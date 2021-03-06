#ifndef __STATE_FLAGS_HPP__
#define __STATE_FLAGS_HPP__

namespace state_machine
{
enum StateFlags
{
  NULL_STATE = 1 << 0,
  START_STATE = 1 << 1,
  INITIAL_STATE = 1 << 2,
  INITIAL_LOCATEVEHICLE_STATE = 1 << 3,
  DRIVE_STATE = 1 << 4,
  MISSION_COMPLETE_STATE = 1 << 5,
  EMERGENCY_STATE = 1 << 6,
  DRIVE_ACC_ACCELERATION_STATE = 1 << 7,
  DRIVE_ACC_DECELERATION_STATE = 1 << 8,
  DRIVE_ACC_KEEP_STATE = 1 << 9,
  DRIVE_ACC_STOP_STATE = 1 << 10,
  DRIVE_STR_STRAIGHT_STATE = 1 << 11,
  DRIVE_STR_LEFT_STATE = 1 << 12,
  DRIVE_STR_RIGHT_STATE = 1 << 13,
  DRIVE_BEHAVIOR_LANECHANGE_LEFT_STATE = 1 << 14,
  DRIVE_BEHAVIOR_LANECHANGE_RIGHT_STATE = 1 << 15,
  DRIVE_BEHAVIOR_OBSTACLE_AVOIDANCE_STATE = 1 << 16,
  DRIVE_DETECT_OBSTACLE_STATE = 1 << 17,
  DRIVE_DETECT_STOPLINE_STATE = 1 << 18,
  DRIVE_DETECT_TRAFFICLIGHT_RED_STATE = 1 << 19,
  STATE_END = 1 << 20,
};

enum StateKinds
{
  MAIN_STATE,
  ACC_STATE,
  STR_STATE,
  BEHAVIOR_STATE,
  PERCEPTION_STATE,
  OTHER_STATE,
  UNKNOWN_STATE,
};

enum TrafficLightColors
{
  E_RED = 0,
  E_YELLOW = 0,
  E_GREEN = 1,
  E_COLOR_ERROR = 2
};
}

#endif
