#!/bin/bash

#Calling this file will allow Gazebo GUI to be passed to a windows display server
#Common display server is XLaunch

pkill gzclient

pkill gzserver

export GAZEBO_IP=127.0.0.1

export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}'):0

export LIBGL_ALWAYS_INDIRECT=0
