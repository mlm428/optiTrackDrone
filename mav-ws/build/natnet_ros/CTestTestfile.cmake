# CMake generated Testfile for 
# Source directory: /home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros
# Build directory: /home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_natnet_ros_rostest_test_client.test "/home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros/test_results/natnet_ros/rostest-test_client.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros --package=natnet_ros --results-filename test_client.xml --results-base-dir \"/home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros/test_results\" /home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros/test/client.test ")
subdirs("gtest")
