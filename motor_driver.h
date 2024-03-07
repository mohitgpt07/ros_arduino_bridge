/***************************************************************
   Motor driver function definitions - by Mohit Kumar Gupta
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  //below can be changed
  #define LEFT_MOTOR_ENABLE 5
  #define LEFT_MOTOR_FORWARD 7
  #define LEFT_MOTOR_BACKWARD 8
  #define RIGHT_MOTOR_FORWARD 11
  #define RIGHT_MOTOR_BACKWARD 9
  #define RIGHT_MOTOR_ENABLE 6
  
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
