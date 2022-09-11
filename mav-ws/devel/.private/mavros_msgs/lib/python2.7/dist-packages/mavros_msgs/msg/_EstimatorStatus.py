# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mavros_msgs/EstimatorStatus.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EstimatorStatus(genpy.Message):
  _md5sum = "39dbcc4be3f04b68422f784827c47dd5"
  _type = "mavros_msgs/EstimatorStatus"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# Current autopilot estimator state
#
# https://mavlink.io/en/messages/common.html#ESTIMATOR_STATUS_FLAGS

std_msgs/Header header
bool attitude_status_flag

bool velocity_horiz_status_flag
bool velocity_vert_status_flag

bool pos_horiz_rel_status_flag
bool pos_horiz_abs_status_flag

bool pos_vert_abs_status_flag
bool pos_vert_agl_status_flag

bool const_pos_mode_status_flag

bool pred_pos_horiz_rel_status_flag
bool pred_pos_horiz_abs_status_flag

bool gps_glitch_status_flag
bool accel_error_status_flag
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','attitude_status_flag','velocity_horiz_status_flag','velocity_vert_status_flag','pos_horiz_rel_status_flag','pos_horiz_abs_status_flag','pos_vert_abs_status_flag','pos_vert_agl_status_flag','const_pos_mode_status_flag','pred_pos_horiz_rel_status_flag','pred_pos_horiz_abs_status_flag','gps_glitch_status_flag','accel_error_status_flag']
  _slot_types = ['std_msgs/Header','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,attitude_status_flag,velocity_horiz_status_flag,velocity_vert_status_flag,pos_horiz_rel_status_flag,pos_horiz_abs_status_flag,pos_vert_abs_status_flag,pos_vert_agl_status_flag,const_pos_mode_status_flag,pred_pos_horiz_rel_status_flag,pred_pos_horiz_abs_status_flag,gps_glitch_status_flag,accel_error_status_flag

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EstimatorStatus, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.attitude_status_flag is None:
        self.attitude_status_flag = False
      if self.velocity_horiz_status_flag is None:
        self.velocity_horiz_status_flag = False
      if self.velocity_vert_status_flag is None:
        self.velocity_vert_status_flag = False
      if self.pos_horiz_rel_status_flag is None:
        self.pos_horiz_rel_status_flag = False
      if self.pos_horiz_abs_status_flag is None:
        self.pos_horiz_abs_status_flag = False
      if self.pos_vert_abs_status_flag is None:
        self.pos_vert_abs_status_flag = False
      if self.pos_vert_agl_status_flag is None:
        self.pos_vert_agl_status_flag = False
      if self.const_pos_mode_status_flag is None:
        self.const_pos_mode_status_flag = False
      if self.pred_pos_horiz_rel_status_flag is None:
        self.pred_pos_horiz_rel_status_flag = False
      if self.pred_pos_horiz_abs_status_flag is None:
        self.pred_pos_horiz_abs_status_flag = False
      if self.gps_glitch_status_flag is None:
        self.gps_glitch_status_flag = False
      if self.accel_error_status_flag is None:
        self.accel_error_status_flag = False
    else:
      self.header = std_msgs.msg.Header()
      self.attitude_status_flag = False
      self.velocity_horiz_status_flag = False
      self.velocity_vert_status_flag = False
      self.pos_horiz_rel_status_flag = False
      self.pos_horiz_abs_status_flag = False
      self.pos_vert_abs_status_flag = False
      self.pos_vert_agl_status_flag = False
      self.const_pos_mode_status_flag = False
      self.pred_pos_horiz_rel_status_flag = False
      self.pred_pos_horiz_abs_status_flag = False
      self.gps_glitch_status_flag = False
      self.accel_error_status_flag = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_12B().pack(_x.attitude_status_flag, _x.velocity_horiz_status_flag, _x.velocity_vert_status_flag, _x.pos_horiz_rel_status_flag, _x.pos_horiz_abs_status_flag, _x.pos_vert_abs_status_flag, _x.pos_vert_agl_status_flag, _x.const_pos_mode_status_flag, _x.pred_pos_horiz_rel_status_flag, _x.pred_pos_horiz_abs_status_flag, _x.gps_glitch_status_flag, _x.accel_error_status_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.attitude_status_flag, _x.velocity_horiz_status_flag, _x.velocity_vert_status_flag, _x.pos_horiz_rel_status_flag, _x.pos_horiz_abs_status_flag, _x.pos_vert_abs_status_flag, _x.pos_vert_agl_status_flag, _x.const_pos_mode_status_flag, _x.pred_pos_horiz_rel_status_flag, _x.pred_pos_horiz_abs_status_flag, _x.gps_glitch_status_flag, _x.accel_error_status_flag,) = _get_struct_12B().unpack(str[start:end])
      self.attitude_status_flag = bool(self.attitude_status_flag)
      self.velocity_horiz_status_flag = bool(self.velocity_horiz_status_flag)
      self.velocity_vert_status_flag = bool(self.velocity_vert_status_flag)
      self.pos_horiz_rel_status_flag = bool(self.pos_horiz_rel_status_flag)
      self.pos_horiz_abs_status_flag = bool(self.pos_horiz_abs_status_flag)
      self.pos_vert_abs_status_flag = bool(self.pos_vert_abs_status_flag)
      self.pos_vert_agl_status_flag = bool(self.pos_vert_agl_status_flag)
      self.const_pos_mode_status_flag = bool(self.const_pos_mode_status_flag)
      self.pred_pos_horiz_rel_status_flag = bool(self.pred_pos_horiz_rel_status_flag)
      self.pred_pos_horiz_abs_status_flag = bool(self.pred_pos_horiz_abs_status_flag)
      self.gps_glitch_status_flag = bool(self.gps_glitch_status_flag)
      self.accel_error_status_flag = bool(self.accel_error_status_flag)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_12B().pack(_x.attitude_status_flag, _x.velocity_horiz_status_flag, _x.velocity_vert_status_flag, _x.pos_horiz_rel_status_flag, _x.pos_horiz_abs_status_flag, _x.pos_vert_abs_status_flag, _x.pos_vert_agl_status_flag, _x.const_pos_mode_status_flag, _x.pred_pos_horiz_rel_status_flag, _x.pred_pos_horiz_abs_status_flag, _x.gps_glitch_status_flag, _x.accel_error_status_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.attitude_status_flag, _x.velocity_horiz_status_flag, _x.velocity_vert_status_flag, _x.pos_horiz_rel_status_flag, _x.pos_horiz_abs_status_flag, _x.pos_vert_abs_status_flag, _x.pos_vert_agl_status_flag, _x.const_pos_mode_status_flag, _x.pred_pos_horiz_rel_status_flag, _x.pred_pos_horiz_abs_status_flag, _x.gps_glitch_status_flag, _x.accel_error_status_flag,) = _get_struct_12B().unpack(str[start:end])
      self.attitude_status_flag = bool(self.attitude_status_flag)
      self.velocity_horiz_status_flag = bool(self.velocity_horiz_status_flag)
      self.velocity_vert_status_flag = bool(self.velocity_vert_status_flag)
      self.pos_horiz_rel_status_flag = bool(self.pos_horiz_rel_status_flag)
      self.pos_horiz_abs_status_flag = bool(self.pos_horiz_abs_status_flag)
      self.pos_vert_abs_status_flag = bool(self.pos_vert_abs_status_flag)
      self.pos_vert_agl_status_flag = bool(self.pos_vert_agl_status_flag)
      self.const_pos_mode_status_flag = bool(self.const_pos_mode_status_flag)
      self.pred_pos_horiz_rel_status_flag = bool(self.pred_pos_horiz_rel_status_flag)
      self.pred_pos_horiz_abs_status_flag = bool(self.pred_pos_horiz_abs_status_flag)
      self.gps_glitch_status_flag = bool(self.gps_glitch_status_flag)
      self.accel_error_status_flag = bool(self.accel_error_status_flag)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_12B = None
def _get_struct_12B():
    global _struct_12B
    if _struct_12B is None:
        _struct_12B = struct.Struct("<12B")
    return _struct_12B
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
