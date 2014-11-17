#define Dxl_C 512        // Center
#define Dxl_L_R 612      // Left Ready
#define Dxl_L_F 612      // Left Front
#define Dxl_L_B 412      // Left Back
#define Dxl_L_U 712      // Left Up
#define Dxl_L_D 312      // Left Down
#define Dxl_L_HU 812     // Left High Up
#define Dxl_L_LD 212     // Left Low Down
#define Dxl_L_FU 112     // Left Foot Up
#define Dxl_L_FD 912     // Left Foot Down
#define Dxl_R_R 412      // Right Ready
#define Dxl_R_F 412      // Right Front
#define Dxl_R_D 712      // Right Down
#define Dxl_R_U 312      // Right Up
#define Dxl_R_B 612      // Right Back
#define Dxl_R_HU 212     // Right High Up
#define Dxl_R_LD 812     // Right Low Down
#define Dxl_R_FU 912     // Right Foot Up
#define Dxl_R_FD 112     // Right Foot Down

/* Motion Position Array */
int Dxl_MPArray[][18]={
  /* SpiderLab Boot :: 0 */
  {Dxl_C, Dxl_C, Dxl_C, 
   Dxl_C, Dxl_C, Dxl_C,
   Dxl_C, Dxl_C, Dxl_C,
   Dxl_C, Dxl_C, Dxl_C,
   Dxl_C, Dxl_C, Dxl_C,
   Dxl_C, Dxl_C, Dxl_C},
   
  /* SpiderLab Ready :: 1 */
  {Dxl_L_FD,Dxl_L_R, Dxl_C, 
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  /* SpiderLab Move Front :: 2 ~ 5 */
  {Dxl_L_FD, Dxl_L_U, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_F},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_F},

   /* SpiderLab Move Back :: 6 ~ 9 */
  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_B},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_B},
   
  {Dxl_L_FD, Dxl_L_U, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  /* SpiderLab Turn Left :: 10 ~ 13 */
  {Dxl_L_FD, Dxl_L_U, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_F},

  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_B,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_F},
   
  /* SpiderLab Turn Right :: 14 ~ 17 */
  {Dxl_L_FD, Dxl_L_U, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_F,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C},
   
  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_U, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_U, Dxl_R_B},

  {Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_L_FD, Dxl_L_R, Dxl_L_F,
   Dxl_L_FD, Dxl_L_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_B,
   Dxl_R_FD, Dxl_R_R, Dxl_C,
   Dxl_R_FD, Dxl_R_R, Dxl_R_B},


};

/* Dyanamixel Mount */
void Dxl_joint()
{
  char Dxl_Min=Dxl_ID_Min;
  char Dxl_Max=Dxl_ID_Max;
  for(Dxl_Min;Dxl_Min<=Dxl_ID_Min; Dxl_Min++)
  {
    Dxl.jointMode(Dxl_Min);
  }
}

/* Dyanamixel Position Move */
void Dxl_positionRun(int position, int Speed)
{
  char Dxl_Min=Dxl_ID_Min;
  char Dxl_Max=Dxl_ID_Max;
  
  for(Dxl_Min;Dxl_Min <= Dxl_Max; Dxl_Min++)
  {
    Dxl.setPosition(Dxl_Min, Dxl_MPArray[position][Dxl_Min-1], Speed);
  }
}

/* Dyanamixel Motion Move */
void Dxl_MotionRun(int Motion_Start, int Motion_End, int Speed, int Delay)
{
  for(Motion_Start;Motion_Start <= Motion_End; Motion_Start++)
  {
    Dxl_positionRun(Motion_Start, Speed);
    delay(Delay);
  }
}
/*

void Dxl_RemoteRun(char Type, int Speed, int Delay)
{
  char cnt=0;
  
  while(Type=='f')
  {
    if(Serial2.available()){
      if(cnt==0) Dxl_positionRun(2, Speed), delay(Delay), cnt=1;
      else if(cnt==1) Dxl_positionRun(3, Speed), delay(Delay), cnt=2;
      else if(cnt==2) Dxl_positionRun(4, Speed), delay(Delay), cnt=3;
      else if(cnt==3) Dxl_positionRun(5, Speed), delay(Delay), cnt=0;
    }
    else
    {
      Dxl_positionRun(1, Speed);
      delay(Delay);
      break;
    }
  }
  
  while(Type=='b')
  {
    if(Serial2.available()){
      if(cnt==0) Dxl_positionRun(6, Speed), delay(Delay), cnt=1;
      else if(cnt==1) Dxl_positionRun(7, Speed), delay(Delay), cnt=2;
      else if(cnt==2) Dxl_positionRun(8, Speed), delay(Delay), cnt=3;
      else if(cnt==3) Dxl_positionRun(9, Speed), delay(Delay), cnt=0;
    }
    else
    {
      Dxl_positionRun(1, Speed);
      delay(Delay);
      break;
    }
  }
  
  while(Type=='l')
  {
    if(Serial2.available()){
      if(cnt==0) Dxl_positionRun(10, Speed), delay(Delay), cnt=1;
      else if(cnt==1) Dxl_positionRun(11, Speed), delay(Delay), cnt=2;
      else if(cnt==2) Dxl_positionRun(12, Speed), delay(Delay), cnt=3;
      else if(cnt==3) Dxl_positionRun(13, Speed), delay(Delay), cnt=0;
    }
    else
    {
      Dxl_positionRun(1, Speed);
      delay(Delay);
      break;
    }
  }
  
  while(Type=='r')
  {
    if(Serial2.available()){
      if(cnt==0) Dxl_positionRun(14, Speed), delay(Delay), cnt=1;
      else if(cnt==1) Dxl_positionRun(15, Speed), delay(Delay), cnt=2;
      else if(cnt==2) Dxl_positionRun(16, Speed), delay(Delay), cnt=3;
      else if(cnt==3) Dxl_positionRun(17, Speed), delay(Delay), cnt=0;
    }
    else
    {
      Dxl_positionRun(1, Speed);
      delay(Delay);
      break;
    }
  }
  
  while(Type=='s')
  {
    Dxl_positionRun(1, Speed);
    delay(Delay);
    break;
  }
}

*/
