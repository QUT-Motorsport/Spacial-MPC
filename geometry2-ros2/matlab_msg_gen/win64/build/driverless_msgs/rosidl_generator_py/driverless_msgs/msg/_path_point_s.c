// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from driverless_msgs:msg\PathPoint.idl
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
#include "driverless_msgs/msg/path_point__struct.h"
#include "driverless_msgs/msg/path_point__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool driverless_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
        "driverless_msgs.msg._path_point.PathPoint",
        full_classname_dest, 41) == 0);
  }
  driverless_msgs__msg__PathPoint * ros_message = _ros_message;
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->location)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // turn_intensity
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_intensity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_intensity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * driverless_msgs__msg__path_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("driverless_msgs.msg._path_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  driverless_msgs__msg__PathPoint * ros_message = (driverless_msgs__msg__PathPoint *)raw_ros_message;
  {  // location
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->location);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_intensity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_intensity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_intensity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
