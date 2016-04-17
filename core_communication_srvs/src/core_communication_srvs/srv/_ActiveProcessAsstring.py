"""autogenerated by genpy from core_communication_srvs/ActiveProcessAsstringRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ActiveProcessAsstringRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "core_communication_srvs/ActiveProcessAsstringRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """


"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ActiveProcessAsstringRequest, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
"""autogenerated by genpy from core_communication_srvs/ActiveProcessAsstringResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ActiveProcessAsstringResponse(genpy.Message):
  _md5sum = "3e94415c89a949942dd081b366fb1fbc"
  _type = "core_communication_srvs/ActiveProcessAsstringResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
string process
int32 activeId
bool repeat


"""
  __slots__ = ['process','activeId','repeat']
  _slot_types = ['string','int32','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       process,activeId,repeat

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ActiveProcessAsstringResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.process is None:
        self.process = ''
      if self.activeId is None:
        self.activeId = 0
      if self.repeat is None:
        self.repeat = False
    else:
      self.process = ''
      self.activeId = 0
      self.repeat = False

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
      _x = self.process
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_iB.pack(_x.activeId, _x.repeat))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.process = str[start:end].decode('utf-8')
      else:
        self.process = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.activeId, _x.repeat,) = _struct_iB.unpack(str[start:end])
      self.repeat = bool(self.repeat)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.process
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_iB.pack(_x.activeId, _x.repeat))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.process = str[start:end].decode('utf-8')
      else:
        self.process = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.activeId, _x.repeat,) = _struct_iB.unpack(str[start:end])
      self.repeat = bool(self.repeat)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_iB = struct.Struct("<iB")
class ActiveProcessAsstring(object):
  _type          = 'core_communication_srvs/ActiveProcessAsstring'
  _md5sum = '3e94415c89a949942dd081b366fb1fbc'
  _request_class  = ActiveProcessAsstringRequest
  _response_class = ActiveProcessAsstringResponse
