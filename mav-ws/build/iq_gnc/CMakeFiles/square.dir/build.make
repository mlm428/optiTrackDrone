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
CMAKE_SOURCE_DIR = /home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc

# Include any dependencies generated for this target.
include CMakeFiles/square.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/square.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/square.dir/flags.make

CMakeFiles/square.dir/src/square.cpp.o: CMakeFiles/square.dir/flags.make
CMakeFiles/square.dir/src/square.cpp.o: /home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc/src/square.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/square.dir/src/square.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/square.dir/src/square.cpp.o -c /home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc/src/square.cpp

CMakeFiles/square.dir/src/square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/square.dir/src/square.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc/src/square.cpp > CMakeFiles/square.dir/src/square.cpp.i

CMakeFiles/square.dir/src/square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/square.dir/src/square.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc/src/square.cpp -o CMakeFiles/square.dir/src/square.cpp.s

CMakeFiles/square.dir/src/square.cpp.o.requires:

.PHONY : CMakeFiles/square.dir/src/square.cpp.o.requires

CMakeFiles/square.dir/src/square.cpp.o.provides: CMakeFiles/square.dir/src/square.cpp.o.requires
	$(MAKE) -f CMakeFiles/square.dir/build.make CMakeFiles/square.dir/src/square.cpp.o.provides.build
.PHONY : CMakeFiles/square.dir/src/square.cpp.o.provides

CMakeFiles/square.dir/src/square.cpp.o.provides.build: CMakeFiles/square.dir/src/square.cpp.o


# Object files for target square
square_OBJECTS = \
"CMakeFiles/square.dir/src/square.cpp.o"

# External object files for target square
square_EXTERNAL_OBJECTS =

/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: CMakeFiles/square.dir/src/square.cpp.o
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: CMakeFiles/square.dir/build.make
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/mavros/lib/libmavros.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libGeographic.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libdiagnostic_updater.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libeigen_conversions.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/libmavconn/lib/libmavconn.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libclass_loader.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/libPocoFoundation.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libdl.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libroslib.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/librospack.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libpython2.7.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_program_options.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libtinyxml2.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libtf2_ros.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libactionlib.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libmessage_filters.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libroscpp.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/librosconsole.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_regex.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libtf2.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/librostime.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /opt/ros/melodic/lib/libcpp_common.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_system.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_thread.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_chrono.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_date_time.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libboost_atomic.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square: CMakeFiles/square.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/square.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/square.dir/build: /home/minidrone/repos/optiTrackDrone/mav-ws/devel/.private/iq_gnc/lib/iq_gnc/square

.PHONY : CMakeFiles/square.dir/build

CMakeFiles/square.dir/requires: CMakeFiles/square.dir/src/square.cpp.o.requires

.PHONY : CMakeFiles/square.dir/requires

CMakeFiles/square.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/square.dir/cmake_clean.cmake
.PHONY : CMakeFiles/square.dir/clean

CMakeFiles/square.dir/depend:
	cd /home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc /home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc /home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc /home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc /home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc/CMakeFiles/square.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/square.dir/depend

