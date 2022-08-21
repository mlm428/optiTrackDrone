
"use strict";

let ParamGet = require('./ParamGet.js')
let CommandHome = require('./CommandHome.js')
let SetMavFrame = require('./SetMavFrame.js')
let SetMode = require('./SetMode.js')
let WaypointClear = require('./WaypointClear.js')
let WaypointPull = require('./WaypointPull.js')
let LogRequestData = require('./LogRequestData.js')
let FileList = require('./FileList.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileChecksum = require('./FileChecksum.js')
let FileOpen = require('./FileOpen.js')
let CommandAck = require('./CommandAck.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let MessageInterval = require('./MessageInterval.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let FileRemove = require('./FileRemove.js')
let StreamRate = require('./StreamRate.js')
let CommandLong = require('./CommandLong.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let CommandInt = require('./CommandInt.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let FileWrite = require('./FileWrite.js')
let MountConfigure = require('./MountConfigure.js')
let FileRename = require('./FileRename.js')
let LogRequestList = require('./LogRequestList.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let WaypointPush = require('./WaypointPush.js')
let FileClose = require('./FileClose.js')
let ParamSet = require('./ParamSet.js')
let ParamPull = require('./ParamPull.js')
let FileRead = require('./FileRead.js')
let CommandBool = require('./CommandBool.js')
let ParamPush = require('./ParamPush.js')
let CommandTOL = require('./CommandTOL.js')
let FileTruncate = require('./FileTruncate.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')

module.exports = {
  ParamGet: ParamGet,
  CommandHome: CommandHome,
  SetMavFrame: SetMavFrame,
  SetMode: SetMode,
  WaypointClear: WaypointClear,
  WaypointPull: WaypointPull,
  LogRequestData: LogRequestData,
  FileList: FileList,
  FileMakeDir: FileMakeDir,
  FileChecksum: FileChecksum,
  FileOpen: FileOpen,
  CommandAck: CommandAck,
  WaypointSetCurrent: WaypointSetCurrent,
  MessageInterval: MessageInterval,
  FileRemoveDir: FileRemoveDir,
  FileRemove: FileRemove,
  StreamRate: StreamRate,
  CommandLong: CommandLong,
  CommandVtolTransition: CommandVtolTransition,
  CommandInt: CommandInt,
  VehicleInfoGet: VehicleInfoGet,
  FileWrite: FileWrite,
  MountConfigure: MountConfigure,
  FileRename: FileRename,
  LogRequestList: LogRequestList,
  LogRequestEnd: LogRequestEnd,
  WaypointPush: WaypointPush,
  FileClose: FileClose,
  ParamSet: ParamSet,
  ParamPull: ParamPull,
  FileRead: FileRead,
  CommandBool: CommandBool,
  ParamPush: ParamPush,
  CommandTOL: CommandTOL,
  FileTruncate: FileTruncate,
  CommandTriggerInterval: CommandTriggerInterval,
  CommandTriggerControl: CommandTriggerControl,
};
