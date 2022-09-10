""" Algorithm Description:
    subscribe to mocap data
    pass mocap data to either: mavproxy, FCU (mavlink)
"""

#! /usr/bin/env python
# Import ROS.
import rospy
# Import the API.


def callback(PoseData):
    rospy.loginfo(rospy.get_caller_id() + PoseData.data)
    rospy.loginfo("recorded info: %s", PoseData.data)

def listener():
    rospy.Subscriber('/vrpn_client_node/<rigid body name>/pose', Pose, callback) #check message type