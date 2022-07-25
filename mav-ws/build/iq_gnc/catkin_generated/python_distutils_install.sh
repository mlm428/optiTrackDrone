#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/minidrone/repos/optiTrackDrone/mav-ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/minidrone/repos/optiTrackDrone/mav-ws/install/lib/python2.7/dist-packages:/home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc" \
    "/usr/bin/python2" \
    "/home/minidrone/repos/optiTrackDrone/mav-ws/src/iq_gnc/setup.py" \
    egg_info --egg-base /home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc \
    build --build-base "/home/minidrone/repos/optiTrackDrone/mav-ws/build/iq_gnc" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/minidrone/repos/optiTrackDrone/mav-ws/install" --install-scripts="/home/minidrone/repos/optiTrackDrone/mav-ws/install/bin"
