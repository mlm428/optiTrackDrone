
"use strict";

let MountControl = require('./MountControl.js');
let ManualControl = require('./ManualControl.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let LandingTarget = require('./LandingTarget.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let Trajectory = require('./Trajectory.js');
let ESCStatus = require('./ESCStatus.js');
let FileEntry = require('./FileEntry.js');
let WaypointList = require('./WaypointList.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let Param = require('./Param.js');
let ParamValue = require('./ParamValue.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let Mavlink = require('./Mavlink.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let Vibration = require('./Vibration.js');
let RadioStatus = require('./RadioStatus.js');
let WaypointReached = require('./WaypointReached.js');
let ESCInfo = require('./ESCInfo.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let VehicleInfo = require('./VehicleInfo.js');
let HilGPS = require('./HilGPS.js');
let LogData = require('./LogData.js');
let CommandCode = require('./CommandCode.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let Tunnel = require('./Tunnel.js');
let StatusText = require('./StatusText.js');
let GPSRTK = require('./GPSRTK.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let Thrust = require('./Thrust.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let RTCM = require('./RTCM.js');
let HilControls = require('./HilControls.js');
let BatteryStatus = require('./BatteryStatus.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let HomePosition = require('./HomePosition.js');
let LogEntry = require('./LogEntry.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let State = require('./State.js');
let GPSRAW = require('./GPSRAW.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let GPSINPUT = require('./GPSINPUT.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let VFR_HUD = require('./VFR_HUD.js');
let PositionTarget = require('./PositionTarget.js');
let RTKBaseline = require('./RTKBaseline.js');
let ExtendedState = require('./ExtendedState.js');
let TerrainReport = require('./TerrainReport.js');
let Altitude = require('./Altitude.js');
let DebugValue = require('./DebugValue.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let RCIn = require('./RCIn.js');
let Waypoint = require('./Waypoint.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let ActuatorControl = require('./ActuatorControl.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let RCOut = require('./RCOut.js');
let HilSensor = require('./HilSensor.js');

module.exports = {
  MountControl: MountControl,
  ManualControl: ManualControl,
  AttitudeTarget: AttitudeTarget,
  LandingTarget: LandingTarget,
  OpticalFlowRad: OpticalFlowRad,
  Trajectory: Trajectory,
  ESCStatus: ESCStatus,
  FileEntry: FileEntry,
  WaypointList: WaypointList,
  PlayTuneV2: PlayTuneV2,
  HilActuatorControls: HilActuatorControls,
  NavControllerOutput: NavControllerOutput,
  Param: Param,
  ParamValue: ParamValue,
  GlobalPositionTarget: GlobalPositionTarget,
  Mavlink: Mavlink,
  ADSBVehicle: ADSBVehicle,
  Vibration: Vibration,
  RadioStatus: RadioStatus,
  WaypointReached: WaypointReached,
  ESCInfo: ESCInfo,
  WheelOdomStamped: WheelOdomStamped,
  EstimatorStatus: EstimatorStatus,
  VehicleInfo: VehicleInfo,
  HilGPS: HilGPS,
  LogData: LogData,
  CommandCode: CommandCode,
  ESCTelemetry: ESCTelemetry,
  TimesyncStatus: TimesyncStatus,
  Tunnel: Tunnel,
  StatusText: StatusText,
  GPSRTK: GPSRTK,
  CamIMUStamp: CamIMUStamp,
  CameraImageCaptured: CameraImageCaptured,
  Thrust: Thrust,
  CompanionProcessStatus: CompanionProcessStatus,
  RTCM: RTCM,
  HilControls: HilControls,
  BatteryStatus: BatteryStatus,
  OverrideRCIn: OverrideRCIn,
  HomePosition: HomePosition,
  LogEntry: LogEntry,
  ESCInfoItem: ESCInfoItem,
  State: State,
  GPSRAW: GPSRAW,
  HilStateQuaternion: HilStateQuaternion,
  GPSINPUT: GPSINPUT,
  ESCTelemetryItem: ESCTelemetryItem,
  VFR_HUD: VFR_HUD,
  PositionTarget: PositionTarget,
  RTKBaseline: RTKBaseline,
  ExtendedState: ExtendedState,
  TerrainReport: TerrainReport,
  Altitude: Altitude,
  DebugValue: DebugValue,
  ESCStatusItem: ESCStatusItem,
  RCIn: RCIn,
  Waypoint: Waypoint,
  MagnetometerReporter: MagnetometerReporter,
  ActuatorControl: ActuatorControl,
  OnboardComputerStatus: OnboardComputerStatus,
  RCOut: RCOut,
  HilSensor: HilSensor,
};
