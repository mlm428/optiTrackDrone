
"use strict";

let ParamValue = require('./ParamValue.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let State = require('./State.js');
let StatusText = require('./StatusText.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let ActuatorControl = require('./ActuatorControl.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let Trajectory = require('./Trajectory.js');
let HilGPS = require('./HilGPS.js');
let RadioStatus = require('./RadioStatus.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let HilControls = require('./HilControls.js');
let Vibration = require('./Vibration.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let LandingTarget = require('./LandingTarget.js');
let ESCStatus = require('./ESCStatus.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let BatteryStatus = require('./BatteryStatus.js');
let PositionTarget = require('./PositionTarget.js');
let Altitude = require('./Altitude.js');
let VehicleInfo = require('./VehicleInfo.js');
let Param = require('./Param.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let Waypoint = require('./Waypoint.js');
let HilSensor = require('./HilSensor.js');
let GPSRTK = require('./GPSRTK.js');
let FileEntry = require('./FileEntry.js');
let WaypointReached = require('./WaypointReached.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let Mavlink = require('./Mavlink.js');
let GPSINPUT = require('./GPSINPUT.js');
let RTKBaseline = require('./RTKBaseline.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let DebugValue = require('./DebugValue.js');
let CommandCode = require('./CommandCode.js');
let LogData = require('./LogData.js');
let RCOut = require('./RCOut.js');
let GPSRAW = require('./GPSRAW.js');
let LogEntry = require('./LogEntry.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let MountControl = require('./MountControl.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ManualControl = require('./ManualControl.js');
let Thrust = require('./Thrust.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let ExtendedState = require('./ExtendedState.js');
let TerrainReport = require('./TerrainReport.js');
let ESCInfo = require('./ESCInfo.js');
let HomePosition = require('./HomePosition.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let RCIn = require('./RCIn.js');
let WaypointList = require('./WaypointList.js');
let Tunnel = require('./Tunnel.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let RTCM = require('./RTCM.js');
let VFR_HUD = require('./VFR_HUD.js');

module.exports = {
  ParamValue: ParamValue,
  OpticalFlowRad: OpticalFlowRad,
  PlayTuneV2: PlayTuneV2,
  State: State,
  StatusText: StatusText,
  GlobalPositionTarget: GlobalPositionTarget,
  ESCTelemetry: ESCTelemetry,
  CompanionProcessStatus: CompanionProcessStatus,
  ActuatorControl: ActuatorControl,
  ADSBVehicle: ADSBVehicle,
  Trajectory: Trajectory,
  HilGPS: HilGPS,
  RadioStatus: RadioStatus,
  ESCInfoItem: ESCInfoItem,
  HilControls: HilControls,
  Vibration: Vibration,
  CamIMUStamp: CamIMUStamp,
  LandingTarget: LandingTarget,
  ESCStatus: ESCStatus,
  TimesyncStatus: TimesyncStatus,
  BatteryStatus: BatteryStatus,
  PositionTarget: PositionTarget,
  Altitude: Altitude,
  VehicleInfo: VehicleInfo,
  Param: Param,
  CameraImageCaptured: CameraImageCaptured,
  Waypoint: Waypoint,
  HilSensor: HilSensor,
  GPSRTK: GPSRTK,
  FileEntry: FileEntry,
  WaypointReached: WaypointReached,
  HilActuatorControls: HilActuatorControls,
  Mavlink: Mavlink,
  GPSINPUT: GPSINPUT,
  RTKBaseline: RTKBaseline,
  ESCStatusItem: ESCStatusItem,
  DebugValue: DebugValue,
  CommandCode: CommandCode,
  LogData: LogData,
  RCOut: RCOut,
  GPSRAW: GPSRAW,
  LogEntry: LogEntry,
  EstimatorStatus: EstimatorStatus,
  HilStateQuaternion: HilStateQuaternion,
  MountControl: MountControl,
  ESCTelemetryItem: ESCTelemetryItem,
  NavControllerOutput: NavControllerOutput,
  WheelOdomStamped: WheelOdomStamped,
  ManualControl: ManualControl,
  Thrust: Thrust,
  OverrideRCIn: OverrideRCIn,
  OnboardComputerStatus: OnboardComputerStatus,
  ExtendedState: ExtendedState,
  TerrainReport: TerrainReport,
  ESCInfo: ESCInfo,
  HomePosition: HomePosition,
  AttitudeTarget: AttitudeTarget,
  RCIn: RCIn,
  WaypointList: WaypointList,
  Tunnel: Tunnel,
  MagnetometerReporter: MagnetometerReporter,
  RTCM: RTCM,
  VFR_HUD: VFR_HUD,
};
