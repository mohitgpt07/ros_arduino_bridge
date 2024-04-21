/***************************************************************
   Motor driver function definitions - by Mohit Kumar Gupta
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  //below can be changed
  #define LEFT_MOTOR_ENABLE 7
  #define LEFT_MOTOR_FORWARD 6
  #define LEFT_MOTOR_BACKWARD 11
  #define RIGHT_MOTOR_FORWARD 5
  #define RIGHT_MOTOR_BACKWARD 9
  #define RIGHT_MOTOR_ENABLE 8
  
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
