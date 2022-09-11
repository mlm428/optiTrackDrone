#! /usr/bin/env python
# Import ROS.
import rospy
import math
# Import the API.
from iq_gnc.py_gnc_functions import *
# To print colours (optional).
from iq_gnc.PrintColours import *
#from std_msgs.msg import String, Odometry
from geometry_msgs.msg import PoseStamped 
'''
will consistently wait for data for arm-receive message 
wait for message from FCU for confirming arm*
'''
class LocalizationControl:
    """
    Used to test basic localization control using optitrack vrpn streamer
    """
    def __init__(self):
        # rigid body name - modify if needed
        self.rigidbody = 'MAV1'

        # Initializing ROS node.
        rospy.init_node("drone_controller", anonymous=True)

        # Create an object for the API.
        self.drone = gnc_api()
        # Wait for FCU connection.
        self.drone.wait4connect()
        # Wait for the mode to be switched.
        self.drone.wait4start()

        #store quaternion fields
        self.q0 = None
        self.q1 = None
        self.q2 = None
        self.q3 = None

        #decompose drone pose
        self.posepsi = None
        self.dronepose = [
            self.posex,
            self.posey,
            self.posez,
            self.posepsi
        ]
        #end init

    def set_local_frame(self):
        """
            1. Create local reference frame.
            2. Call listener to update PoseData
            3. Construct tuples for coords and orientations
            4. Use drone initialize_local_frame method
        """
        self.listener()

        coords = (
            self.posex,
            self.posey,
            self.posez
        )
        orientation = (
            self.q0,
            self.q1,
            self.q2,
            self.q3
        )
        self.drone.initialize_local_frame(coords, orientation) # -> needs to be replaced with frame world id / replace with frame that drone is currently at


    def pose_callback(self, PoseData):
        """Gets the raw pose of the drone and processes it for use in control.
        Args:
                msg (geometry_msgs/PoseStamped): Raw pose of the drone with header.
        """
        #access origin point coordinates
        self.posex, self.posey, self.posez = (
            PoseData.pose.pose.position.x,
            PoseData.pose.pose.position.y,
            PoseData.pose.pose.position.z,
        )
        #access quaternion
        self.q0, self.q1, self.q2, self.q3 = (
            PoseData.pose.pose.orientation.w,
            PoseData.pose.pose.orientation.x,
            PoseData.pose.pose.orientation.y,
            PoseData.pose.pose.orientation.z,
        )
        #compute psi (rot about z) from quaternion degrees
        self.posepsi = math.degrees(math.atan2((2 * (q0 * q3 + q1 * q2)), 
                    (1 - 2 * (pow(q2, 2) + pow(q3, 2)))))

        self.dronepose = [
            self.posex,
            self.posey,
            self.posez,
            self.posepsi
        ]

        rospy.loginfo(rospy.get_caller_id() + PoseData)
        rospy.loginfo("recorded info: %s", PoseData)

    def listener(self):
        rospy.Subscriber('/vrpn_client_node/'+ self.rigidbody +'/pose', PoseStamped, self.pose_callback) #check message type

    def main(self):
        #set local reference frame
        self.set_local_frame()

        # Request takeoff with an altitude of 2m.
        self.drone.takeoff(2)

        # Specify control loop rate. We recommend a low frequency to not over load the FCU with messages. Too many messages will cause the drone to be sluggish.
        rate = rospy.Rate(3)

        # Specify some waypoints
        goals = [[0, 0, 3, 0], [5, 0, 3, -90], [5, 5, 3, 0],
                [0, 5, 3, 90], [0, 0, 3, 180], [0, 0, 3, 0]]
        i = 0
        while i < len(goals):
            self.drone.set_destination(
                x=goals[i][0], y=goals[i][1], z=goals[i][2], psi=goals[i][3])
            self.listener()
            rate.sleep()
            if self.drone.check_waypoint_reached(self.dronepose): # -> use pose data from sub to check
                i += 1
        # Land after all waypoints are reached.
        self.drone.land()
        rospy.loginfo(CGREEN2 + "All waypoints reached landing now." + CEND)

if __name__ == '__main__':
    try:
        LC = LocalizationControl()
        LC.main()
    except KeyboardInterrupt:
        exit()
