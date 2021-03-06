/*
 * Copyright 2020 Makani Technologies LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AVIONICS_SERVO_FIRMWARE_TYPES_H_
#define AVIONICS_SERVO_FIRMWARE_TYPES_H_

#include "avionics/common/servo_types.h"
#include "avionics/servo/firmware/r22_param.h"

typedef struct {
  ServoInputState input;
  ServoControlState control;
  ActuatorState state;
  int64_t sync_timestamp;
  bool updated;
} ServoState;

typedef struct {
  bool clear_errors;
  bool armed;
  bool clear_error_log;
  bool set_parameter;
  uint32_t set_parameter_value;
  bool get_parameter;
  R22Parameter parameter_type;
} ServoOperatorCommand;

#endif  // AVIONICS_SERVO_FIRMWARE_TYPES_H_
