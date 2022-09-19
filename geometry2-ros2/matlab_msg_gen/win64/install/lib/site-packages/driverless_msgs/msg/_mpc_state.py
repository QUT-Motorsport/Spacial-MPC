# generated from rosidl_generator_py/resource/_idl.py.em
# with input from driverless_msgs:msg\MPCState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MPCState(type):
    """Metaclass of message 'MPCState'."""

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
                'driverless_msgs.msg.MPCState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MPCState(metaclass=Metaclass_MPCState):
    """Message class 'MPCState'."""

    __slots__ = [
        '_s',
        '_ey',
        '_etheta',
        '_otheta_dot',
        '_vx',
        '_vy',
        '_d',
        '_t',
    ]

    _fields_and_field_types = {
        's': 'double',
        'ey': 'double',
        'etheta': 'double',
        'otheta_dot': 'double',
        'vx': 'double',
        'vy': 'double',
        'd': 'double',
        't': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.s = kwargs.get('s', float())
        self.ey = kwargs.get('ey', float())
        self.etheta = kwargs.get('etheta', float())
        self.otheta_dot = kwargs.get('otheta_dot', float())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.d = kwargs.get('d', float())
        from builtin_interfaces.msg import Time
        self.t = kwargs.get('t', Time())

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
        if self.s != other.s:
            return False
        if self.ey != other.ey:
            return False
        if self.etheta != other.etheta:
            return False
        if self.otheta_dot != other.otheta_dot:
            return False
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.d != other.d:
            return False
        if self.t != other.t:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's' field must be of type 'float'"
        self._s = value

    @property
    def ey(self):
        """Message field 'ey'."""
        return self._ey

    @ey.setter
    def ey(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ey' field must be of type 'float'"
        self._ey = value

    @property
    def etheta(self):
        """Message field 'etheta'."""
        return self._etheta

    @etheta.setter
    def etheta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'etheta' field must be of type 'float'"
        self._etheta = value

    @property
    def otheta_dot(self):
        """Message field 'otheta_dot'."""
        return self._otheta_dot

    @otheta_dot.setter
    def otheta_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'otheta_dot' field must be of type 'float'"
        self._otheta_dot = value

    @property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
        self._vx = value

    @property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
        self._vy = value

    @property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd' field must be of type 'float'"
        self._d = value

    @property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 't' field must be a sub message of type 'Time'"
        self._t = value
