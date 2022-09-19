# generated from rosidl_generator_py/resource/_idl.py.em
# with input from driverless_msgs:msg\RES.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RES(type):
    """Metaclass of message 'RES'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('driverless_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'driverless_msgs.msg.RES')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__res
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__res
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__res
            cls._TYPE_SUPPORT = module.type_support_msg__msg__res
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__res

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RES(metaclass=Metaclass_RES):
    """Message class 'RES'."""

    __slots__ = [
        '_sw_k2',
        '_bt_k3',
        '_estop',
        '_loss_of_signal_shutdown_notice',
        '_radio_quality',
    ]

    _fields_and_field_types = {
        'sw_k2': 'boolean',
        'bt_k3': 'boolean',
        'estop': 'boolean',
        'loss_of_signal_shutdown_notice': 'boolean',
        'radio_quality': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sw_k2 = kwargs.get('sw_k2', bool())
        self.bt_k3 = kwargs.get('bt_k3', bool())
        self.estop = kwargs.get('estop', bool())
        self.loss_of_signal_shutdown_notice = kwargs.get('loss_of_signal_shutdown_notice', bool())
        self.radio_quality = kwargs.get('radio_quality', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sw_k2 != other.sw_k2:
            return False
        if self.bt_k3 != other.bt_k3:
            return False
        if self.estop != other.estop:
            return False
        if self.loss_of_signal_shutdown_notice != other.loss_of_signal_shutdown_notice:
            return False
        if self.radio_quality != other.radio_quality:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sw_k2(self):
        """Message field 'sw_k2'."""
        return self._sw_k2

    @sw_k2.setter
    def sw_k2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sw_k2' field must be of type 'bool'"
        self._sw_k2 = value

    @property
    def bt_k3(self):
        """Message field 'bt_k3'."""
        return self._bt_k3

    @bt_k3.setter
    def bt_k3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bt_k3' field must be of type 'bool'"
        self._bt_k3 = value

    @property
    def estop(self):
        """Message field 'estop'."""
        return self._estop

    @estop.setter
    def estop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'estop' field must be of type 'bool'"
        self._estop = value

    @property
    def loss_of_signal_shutdown_notice(self):
        """Message field 'loss_of_signal_shutdown_notice'."""
        return self._loss_of_signal_shutdown_notice

    @loss_of_signal_shutdown_notice.setter
    def loss_of_signal_shutdown_notice(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'loss_of_signal_shutdown_notice' field must be of type 'bool'"
        self._loss_of_signal_shutdown_notice = value

    @property
    def radio_quality(self):
        """Message field 'radio_quality'."""
        return self._radio_quality

    @radio_quality.setter
    def radio_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radio_quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radio_quality' field must be an unsigned integer in [0, 255]"
        self._radio_quality = value
