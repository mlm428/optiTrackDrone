//  GCS Message ID's
/// NOTE: to ensure we never block on sending MAVLink messages
/// please keep each MSG_ to a single MAVLink message. If need be
/// create new MSG_ IDs for additional messages on the same
/// stream

#pragma once

enum ap_message : uint8_t {
    MSG_HEARTBEAT,
    MSG_ATTITUDE,
    MSG_ATTITUDE_QUATERNION,
    MSG_LOCATION,
    MSG_SYS_STATUS,
    MSG_POWER_STATUS,
    MSG_MEMINFO,
    MSG_NAV_CONTROLLER_OUTPUT,
    MSG_CURRENT_WAYPOINT,
    MSG_VFR_HUD,
    MSG_SERVO_OUTPUT_RAW,
    MSG_RC_CHANNELS,
    MSG_RC_CHANNELS_RAW,
    MSG_RAW_IMU,
    MSG_SCALED_IMU,
    MSG_SCALED_IMU2,
    MSG_SCALED_IMU3,
    MSG_SCALED_PRESSURE,
    MSG_SCALED_PRESSURE2,
    MSG_SCALED_PRESSURE3,
    MSG_GPS_RAW,
    MSG_GPS_RTK,
    MSG_GPS2_RAW,
    MSG_GPS2_RTK,
    MSG_SYSTEM_TIME,
    MSG_SERVO_OUT,
    MSG_NEXT_MISSION_REQUEST_WAYPOINTS,
    MSG_NEXT_MISSION_REQUEST_RALLY,
    MSG_NEXT_MISSION_REQUEST_FENCE,
    MSG_NEXT_PARAM,
    MSG_FENCE_STATUS,
    MSG_AHRS,
    MSG_SIMSTATE,
    MSG_SIM_STATE,
    MSG_AHRS2,
    MSG_HWSTATUS,
    MSG_WIND,
    MSG_RANGEFINDER,
    MSG_DISTANCE_SENSOR,
    MSG_TERRAIN,
    MSG_BATTERY2,
    MSG_CAMERA_FEEDBACK,
    MSG_MOUNT_STATUS,
    MSG_OPTICAL_FLOW,
    MSG_MAG_CAL_PROGRESS,
    MSG_MAG_CAL_REPORT,
    MSG_EKF_STATUS_REPORT,
    MSG_LOCAL_POSITION,
    MSG_PID_TUNING,
    MSG_VIBRATION,
    MSG_RPM,
    MSG_WHEEL_DISTANCE,
    MSG_MISSION_ITEM_REACHED,
    MSG_POSITION_TARGET_GLOBAL_INT,
    MSG_POSITION_TARGET_LOCAL_NED,
    MSG_ADSB_VEHICLE,
    MSG_BATTERY_STATUS,
    MSG_AOA_SSA,
    MSG_LANDING,
    MSG_ESC_TELEMETRY,
    MSG_ORIGIN,
    MSG_HOME,
    MSG_NAMED_FLOAT,
    MSG_EXTENDED_SYS_STATE,
    MSG_AUTOPILOT_VERSION,
    MSG_EFI_STATUS,
    MSG_GENERATOR_STATUS,
    MSG_WINCH_STATUS,
    MSG_WATER_DEPTH,
    MSG_HIGH_LATENCY2,
    MSG_AIS_VESSEL,
    MSG_MCU_STATUS,
    MSG_UAVIONIX_ADSB_OUT_STATUS,
    MSG_ATTITUDE_TARGET,
    MSG_AUTOPILOT_STATE_FOR_GIMBAL_DEVICE,
    MSG_LAST // MSG_LAST must be the last entry in this enum
};