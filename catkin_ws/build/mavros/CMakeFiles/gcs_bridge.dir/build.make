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
CMAKE_SOURCE_DIR = /home/minidrone/catkin_ws/src/mavros/mavros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/minidrone/catkin_ws/build/mavros

# Include any dependencies generated for this target.
include CMakeFiles/gcs_bridge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gcs_bridge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gcs_bridge.dir/flags.make

CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o: CMakeFiles/gcs_bridge.dir/flags.make
CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o: /home/minidrone/catkin_ws/src/mavros/mavros/src/gcs_bridge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/minidrone/catkin_ws/build/mavros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o -c /home/minidrone/catkin_ws/src/mavros/mavros/src/gcs_bridge.cpp

CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/minidrone/catkin_ws/src/mavros/mavros/src/gcs_bridge.cpp > CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.i

CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/minidrone/catkin_ws/src/mavros/mavros/src/gcs_bridge.cpp -o CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.s

CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.requires:

.PHONY : CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.requires

CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.provides: CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.requires
	$(MAKE) -f CMakeFiles/gcs_bridge.dir/build.make CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.provides.build
.PHONY : CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.provides

CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.provides.build: CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o


# Object files for target gcs_bridge
gcs_bridge_OBJECTS = \
"CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o"

# External object files for target gcs_bridge
gcs_bridge_EXTERNAL_OBJECTS =

/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: CMakeFiles/gcs_bridge.dir/build.make
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /home/minidrone/catkin_ws/devel/.private/mavros/lib/libmavros.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libdiagnostic_updater.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libeigen_conversions.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /home/minidrone/catkin_ws/devel/.private/libmavconn/lib/libmavconn.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libclass_loader.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/libPocoFoundation.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libdl.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libroslib.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librospack.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libpython2.7.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_program_options.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libtinyxml2.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole_bridge.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libtf2_ros.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libactionlib.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libmessage_filters.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libroscpp.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_regex.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libtf2.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librostime.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libcpp_common.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_system.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_thread.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_chrono.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_date_time.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_atomic.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libdiagnostic_updater.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libeigen_conversions.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /home/minidrone/catkin_ws/devel/.private/libmavconn/lib/libmavconn.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libclass_loader.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/libPocoFoundation.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libdl.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libroslib.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librospack.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libpython2.7.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_program_options.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libtinyxml2.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole_bridge.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libtf2_ros.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libactionlib.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libmessage_filters.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libroscpp.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_regex.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libtf2.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/librostime.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /opt/ros/melodic/lib/libcpp_common.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_system.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_thread.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_chrono.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_date_time.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libboost_atomic.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: /usr/lib/aarch64-linux-gnu/libGeographic.so
/home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge: CMakeFiles/gcs_bridge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/minidrone/catkin_ws/build/mavros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gcs_bridge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gcs_bridge.dir/build: /home/minidrone/catkin_ws/devel/.private/mavros/lib/mavros/gcs_bridge

.PHONY : CMakeFiles/gcs_bridge.dir/build

CMakeFiles/gcs_bridge.dir/requires: CMakeFiles/gcs_bridge.dir/src/gcs_bridge.cpp.o.requires

.PHONY : CMakeFiles/gcs_bridge.dir/requires

CMakeFiles/gcs_bridge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gcs_bridge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gcs_bridge.dir/clean

CMakeFiles/gcs_bridge.dir/depend:
	cd /home/minidrone/catkin_ws/build/mavros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/minidrone/catkin_ws/src/mavros/mavros /home/minidrone/catkin_ws/src/mavros/mavros /home/minidrone/catkin_ws/build/mavros /home/minidrone/catkin_ws/build/mavros /home/minidrone/catkin_ws/build/mavros/CMakeFiles/gcs_bridge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gcs_bridge.dir/depend

