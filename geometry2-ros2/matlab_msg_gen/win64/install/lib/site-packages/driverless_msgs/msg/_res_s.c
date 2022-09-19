// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from driverless_msgs:msg\RES.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "driverless_msgs/msg/res__struct.h"
#include "driverless_msgs/msg/res__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool driverless_msgs__msg__res__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "driverless_msgs.msg._res.RES",
        full_classname_dest, 28) == 0);
  }
  driverless_msgs__msg__RES * ros_message = _ros_message;
  {  // sw_k2
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw_k2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sw_k2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bt_k3
    PyObject * field = PyObject_GetAttrString(_pymsg, "bt_k3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bt_k3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estop
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // loss_of_signal_shutdown_notice
    PyObject * field = PyObject_GetAttrString(_pymsg, "loss_of_signal_shutdown_notice");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->loss_of_signal_shutdown_notice = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radio_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "radio_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radio_quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * driverless_msgs__msg__res__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RES */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("driverless_msgs.msg._res");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RES");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  driverless_msgs__msg__RES * ros_message = (driverless_msgs__msg__RES *)raw_ros_message;
  {  // sw_k2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sw_k2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw_k2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bt_k3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bt_k3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bt_k3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loss_of_signal_shutdown_notice
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->loss_of_signal_shutdown_notice ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loss_of_signal_shutdown_notice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radio_quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radio_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radio_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
