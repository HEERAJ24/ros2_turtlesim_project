// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interface:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
#define MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HardwareStatus in the package msg_interface.
typedef struct msg_interface__msg__HardwareStatus
{
  int64_t temp;
  bool motors_ready;
  rosidl_runtime_c__String debug_msg;
} msg_interface__msg__HardwareStatus;

// Struct for a sequence of msg_interface__msg__HardwareStatus.
typedef struct msg_interface__msg__HardwareStatus__Sequence
{
  msg_interface__msg__HardwareStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__msg__HardwareStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
