# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros

# Utility rule file for _run_tests_natnet_ros_rostest_test_client.test.

# Include the progress variables for this target.
include CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/progress.make

CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test:
	catkin_generated/env_cached.sh /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/run_tests.py /home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros/test_results/natnet_ros/rostest-test_client.xml "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros --package=natnet_ros --results-filename test_client.xml --results-base-dir \"/home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros/test_results\" /home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros/test/client.test "

_run_tests_natnet_ros_rostest_test_client.test: CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test
_run_tests_natnet_ros_rostest_test_client.test: CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/build.make

.PHONY : _run_tests_natnet_ros_rostest_test_client.test

# Rule to build all files generated by this target.
CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/build: _run_tests_natnet_ros_rostest_test_client.test

.PHONY : CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/build

CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/clean

CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/depend:
	cd /home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros /home/minidrone/repos/optiTrackDrone/mav-ws/src/natnet_ros/natnet_ros /home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros /home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros /home/minidrone/repos/optiTrackDrone/mav-ws/build/natnet_ros/CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_run_tests_natnet_ros_rostest_test_client.test.dir/depend

