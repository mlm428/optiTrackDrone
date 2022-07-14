
"use strict";

let FileRename = require('./FileRename.js')
let FileRead = require('./FileRead.js')
let LogRequestData = require('./LogRequestData.js')
let FileClose = require('./FileClose.js')
let CommandLong = require('./CommandLong.js')
let MountConfigure = require('./MountConfigure.js')
let FileTruncate = require('./FileTruncate.js')
let SetMode = require('./SetMode.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let CommandBool = require('./CommandBool.js')
let FileMakeDir = require('./FileMakeDir.js')
let LogRequestList = require('./LogRequestList.js')
let ParamSet = require('./ParamSet.js')
let ParamPush = require('./ParamPush.js')
let WaypointClear = require('./WaypointClear.js')
let ParamPull = require('./ParamPull.js')
let FileWrite = require('./FileWrite.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let WaypointPull = require('./WaypointPull.js')
let SetMavFrame = require('./SetMavFrame.js')
let WaypointPush = require('./WaypointPush.js')
let CommandTOL = require('./CommandTOL.js')
let ParamGet = require('./ParamGet.js')
let CommandHome = require('./CommandHome.js')
let MessageInterval = require('./MessageInterval.js')
let CommandInt = require('./CommandInt.js')
let CommandAck = require('./CommandAck.js')
let FileChecksum = require('./FileChecksum.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let StreamRate = require('./StreamRate.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileList = require('./FileList.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let FileOpen = require('./FileOpen.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let FileRemove = require('./FileRemove.js')

module.exports = {
  FileRename: FileRename,
  FileRead: FileRead,
  LogRequestData: LogRequestData,
  FileClose: FileClose,
  CommandLong: CommandLong,
  MountConfigure: MountConfigure,
  FileTruncate: FileTruncate,
  SetMode: SetMode,
  VehicleInfoGet: VehicleInfoGet,
  CommandBool: CommandBool,
  FileMakeDir: FileMakeDir,
  LogRequestList: LogRequestList,
  ParamSet: ParamSet,
  ParamPush: ParamPush,
  WaypointClear: WaypointClear,
  ParamPull: ParamPull,
  FileWrite: FileWrite,
  LogRequestEnd: LogRequestEnd,
  WaypointPull: WaypointPull,
  SetMavFrame: SetMavFrame,
  WaypointPush: WaypointPush,
  CommandTOL: CommandTOL,
  ParamGet: ParamGet,
  CommandHome: CommandHome,
  MessageInterval: MessageInterval,
  CommandInt: CommandInt,
  CommandAck: CommandAck,
  FileChecksum: FileChecksum,
  CommandVtolTransition: CommandVtolTransition,
  StreamRate: StreamRate,
  CommandTriggerInterval: CommandTriggerInterval,
  FileList: FileList,
  CommandTriggerControl: CommandTriggerControl,
  FileOpen: FileOpen,
  WaypointSetCurrent: WaypointSetCurrent,
  FileRemoveDir: FileRemoveDir,
  FileRemove: FileRemove,
};
