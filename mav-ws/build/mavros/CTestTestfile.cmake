# CMake generated Testfile for 
# Source directory: /home/minidrone/repos/optiTrackDrone/mav-ws/src/mavros/mavros
# Build directory: /home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_mavros_gtest_libmavros-frame-conversions-test "/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/test_results/mavros/gtest-libmavros-frame-conversions-test.xml" "--return-code" "/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/mavros/lib/mavros/libmavros-frame-conversions-test --gtest_output=xml:/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/test_results/mavros/gtest-libmavros-frame-conversions-test.xml")
add_test(_ctest_mavros_gtest_libmavros-sensor-orientation-test "/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/test_results/mavros/gtest-libmavros-sensor-orientation-test.xml" "--return-code" "/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/mavros/lib/mavros/libmavros-sensor-orientation-test --gtest_output=xml:/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/test_results/mavros/gtest-libmavros-sensor-orientation-test.xml")
add_test(_ctest_mavros_gtest_libmavros-quaternion-utils-test "/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/test_results/mavros/gtest-libmavros-quaternion-utils-test.xml" "--return-code" "/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/mavros/lib/mavros/libmavros-quaternion-utils-test --gtest_output=xml:/home/minidrone/repos/optiTrackDrone/mav-ws/build/mavros/test_results/mavros/gtest-libmavros-quaternion-utils-test.xml")
subdirs("gtest")
