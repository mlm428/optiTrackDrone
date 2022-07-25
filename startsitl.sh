#!/bin/bash
cd ~/repos/optiTrackDrone/ardupilot/Tools/autotest &&
python sim_vehicle.py -v ArduCopter -f gazebo-iris --console
