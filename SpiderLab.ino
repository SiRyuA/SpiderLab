#include <RC100.h>

RC100 Controller;

#define Dxl_Boot           Dxl_MotionRun( 0, 1,Dxl_Speed,Dxl_Delay) /* 초기 값 확인 - 0 */
#define Dxl_Ready          Dxl_MotionRun( 1, 1,Dxl_Speed,Dxl_Delay) /* 준비 - 1 */
#define Dxl_MoveFront      Dxl_MotionRun( 2, 5,Dxl_Speed,Dxl_Delay) /* 전진 - 2~5 */
#define Dxl_MoveBack       Dxl_MotionRun( 6, 9,Dxl_Speed,Dxl_Delay) /* 후진 - 6~9 */ 
#define Dxl_TurnLeft       Dxl_MotionRun(10,13,Dxl_Speed,Dxl_Delay) /* 죄회전 - 10~13 */
#define Dxl_TurnRight      Dxl_MotionRun(14,17,Dxl_Speed,Dxl_Delay) /* 우회전 - 14~17 */
#define Dxl_MoveFrontIR    Dxl_IRMotionRun( 2, 5,Dxl_Speed,Dxl_Delay,Dxl_IRset) /* IR전진 - 2~5 */

#define Dxl_Dance01        Dxl_MotionRun(18,23,Dxl_Speed,Dxl_Delay) /* 돌아가면서 발 구르기 - 18~23 */
#define Dxl_Dance02        Dxl_MotionRun(24,25,Dxl_Speed,Dxl_Delay) /* 한 발 구르기 - 24~25 */ 
#define Dxl_Dance03        Dxl_MotionRun(26,27,Dxl_Speed,Dxl_Delay) /* 오므리기 - 26~27 */
#define Dxl_Dance04        Dxl_MotionRun(28,29,Dxl_Speed,Dxl_Delay) /* 웨이브 - 28~29 */
#define Dxl_Dance05        Dxl_MotionRun(30,31,Dxl_Speed,Dxl_Delay) /* 발 굴리기 - 30~31 */
#define Dxl_Dance06        Dxl_MotionRun(32,33,Dxl_Speed,Dxl_Delay) /* 제자리 뛰기 - 32~33 */
#define Dxl_Dance07        Dxl_MotionRun(34,35,Dxl_Speed,Dxl_Delay) /* 몸통 오른쪽으로 흔들기 - 34~35 */
#define Dxl_Dance08        Dxl_MotionRun(36,37,Dxl_Speed,Dxl_Delay) /* 몸통 왼쪽으로 흔들기 - 36~37 */
#define Dxl_Dance09        Dxl_MotionRun(38,39,Dxl_Speed,Dxl_Delay) /* 몸통 크게 흔들기 - 38~39 */
#define Dxl_Dance10        Dxl_MotionRun(40,41,Dxl_Speed,Dxl_Delay) /* 헤엄치기 40~41 */

#define Dxl_Dance11        Dxl_MotionRun(42,43,Dxl_Speed,Dxl_Delay) /* 밖으로 펌핑 - 42~43 */
#define Dxl_Dance12        Dxl_MotionRun(44,45,Dxl_Speed,Dxl_Delay) /* 몸통으로 바닥치기 - 44~45 */
#define Dxl_Dance13        Dxl_MotionRun(46,47,Dxl_Speed,Dxl_Delay) /* 다리로 바닥치기 - 46~47 */
#define Dxl_Dance14        Dxl_MotionRun(48,49,Dxl_Speed,Dxl_Delay) /* 누워서 모으기 - 48~49 */
#define Dxl_Dance15        Dxl_MotionRun(50,51,Dxl_Speed,Dxl_Delay) /* 안으로 펌핑 - 50~51 */
#define Dxl_Dance16        Dxl_MotionRun(52,53,Dxl_Speed,Dxl_Delay) /* 누워서 모든 다리 흔들기 - 52~53 */
#define Dxl_Dance17        Dxl_MotionRun(54,55,Dxl_Speed,Dxl_Delay) /* 앞뒤다리 흔들기 - 54~55 */
#define Dxl_Dance18        Dxl_MotionRun(56,57,Dxl_Speed,Dxl_Delay) /* 뒷다리 흔들기 56~57 */
#define Dxl_Dance19        Dxl_MotionRun(58,59,Dxl_Speed,Dxl_Delay) /* 앞다리 흔들기 - 58~59 */
#define Dxl_Dance20        Dxl_MotionRun(60,63,Dxl_Speed,Dxl_Delay) /* 중앙 다리 날개짓 - 60~63 */

#define Dxl_Dance21        Dxl_MotionRun(64,65,Dxl_Speed,Dxl_Delay) /* 해처리 왼다리 - 64~65 */
#define Dxl_Dance22        Dxl_MotionRun(66,67,Dxl_Speed,Dxl_Delay) /* 해처리 오른다리 - 66~67 */
#define Dxl_Dance23        Dxl_MotionRun(68,68,Dxl_Speed,Dxl_Delay) /* 눕기 - 68 */
#define Dxl_Dance24        Dxl_MotionRun(69,69,Dxl_Speed,Dxl_Delay) /* 누워서 다리들기 - 69 */
#define Dxl_Dance25        Dxl_MotionRun(70,71,Dxl_Speed,Dxl_Delay) /* 앞다리 흔들기 - 70~71 */

#define MPlay2 for(Dxl_Play=0;Dxl_Play<2;Dxl_Play++)
#define MPlay3 for(Dxl_Play=0;Dxl_Play<3;Dxl_Play++)
#define MPlay4 for(Dxl_Play=0;Dxl_Play<4;Dxl_Play++)
#define MPlay5 for(Dxl_Play=0;Dxl_Play<5;Dxl_Play++)
#define MPlay6 for(Dxl_Play=0;Dxl_Play<6;Dxl_Play++)
#define MPlay7 for(Dxl_Play=0;Dxl_Play<7;Dxl_Play++)
#define MPlay8 for(Dxl_Play=0;Dxl_Play<8;Dxl_Play++)
#define MPlay9 for(Dxl_Play=0;Dxl_Play<9;Dxl_Play++)

Dynamixel Dxl(1);

char RemoteType=0; // 1=Bluetooth, 0=Zigbee

char RcvData = 0,
     RcvData_BT = 0; 
long int RcvData_ZIG = 0;

int Dxl_ID_Min=1,
    Dxl_ID_Max=18,
    Dxl_Speed=0,
    Dxl_Delay=0,
    Dxl_IRset=0,
    DxlData_IR = 0,
    Dxl_Play=0,
    PlayCnt=0,
    PlayCount=0;

int PSD_anloge_Pin=1,
    PSD_Analog_Infut = 0,
    PSD_Analog_Read[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    PSD_Analog_Volt = 0,
    PSD_Analog_Save = 0,
    PSD_Complement = 0,
    PSD_CM_Count = 0;

float PSD_Voltage = 0,
      PSD_cm = 0,
      PSD_CM = 0,
      PSD_CMR = 0;

void setup() {
  //pinMode(PSD_anloge_Pin, INPUT_ANALOG);
  RemoteType=0; // 1=Bluetooth, 0=Zigbee
  if(RemoteType == 1) Serial2.begin(9600); // Bluetooth
  else  Controller.begin(1); // Zigbee
  Dxl.begin(3);
  Dxl_joint();
  Dxl_Speed=500;
  Dxl_Delay=500;
  Dxl_IRset=50;
  
  Dxl_MotionRun(0, 1,200, 2500);
  //Dxl.readByte(100,0x1B)

  PlayCount = 0;
}

void loop() {
  /*
  // PSD Read  
  PSD_Analog_Infut = analogRead(PSD_anloge_Pin);
  PSD_Read();
  PSD_CM_Converter();
  SerialUSB.println(PSD_CMR);
  */
  /*
  // AX-S1 Move
  DxlData_IR = Dxl.readByte(100,0x1B);
  SerialUSB.println(DxlData_IR);
  if(DxlData_IR < 50) Dxl_MoveFront;
  else {
    for(PlayCount=0;PlayCount<2;PlayCount++) Dxl_MoveBack;
    for(PlayCount=0;PlayCount<4;PlayCount++) Dxl_TurnLeft;
  }
  */
  if(RemoteType == 1) {
      if(Serial2.available()){
        BT_ZIG_Changer();
        Select_Move();
      }
  }
  else {
    if(Controller.available()){
      if(Controller.readData() > 0){
        PlayCnt++;
        delay(50);
      }
      if(PlayCnt > 5){
        BT_ZIG_Changer();
        Select_Move();
        PlayCount_Move();
        PlayCnt = 0;
      }
    }
  }  
}
      
      
      
void Dxl_IRmove(void)
{
  DxlData_IR = Dxl.readByte(100,0x1B);
  SerialUSB.println(DxlData_IR);
  if(DxlData_IR < Dxl_IRset) Dxl_MoveFrontIR;
  else {
    for(PlayCount=0;PlayCount<2;PlayCount++) Dxl_MoveBack;
    for(PlayCount=0;PlayCount<4;PlayCount++) Dxl_TurnLeft;
  }
}

void BT_ZIG_Changer(void)
{
  if(RemoteType == 1){
    RcvData_BT = Serial2.read();
    SerialUSB.println(RcvData_BT);
  }
  else {
    RcvData_ZIG = Controller.readData();
    //Delay(1000);
    SerialUSB.println(RcvData_ZIG);
  }
  
  if(RemoteType == 1){
     if(RcvData_BT == 'f') RcvData = 'a';
     if(RcvData_BT == 'b') RcvData = 'b'; 
     if(RcvData_BT == 'l') RcvData = 'c';
     if(RcvData_BT == 'r') RcvData = 'd';
     if(RcvData_BT == 's') RcvData = 'j';
  }
  else {
    if(RcvData_ZIG == 0) RcvData = '0';
    if(RcvData_ZIG == 1) RcvData = 'a';
    if(RcvData_ZIG == 2) RcvData = 'b';
    if(RcvData_ZIG == 4) RcvData = 'c';
    if(RcvData_ZIG == 8) RcvData = 'd';
    if(RcvData_ZIG == 16) RcvData = 'e';
    if(RcvData_ZIG == 32) RcvData = 'f';
    if(RcvData_ZIG == 64) RcvData = 'g';
    if(RcvData_ZIG == 128) RcvData = 'h';
    if(RcvData_ZIG == 256) RcvData = 'i';
    if(RcvData_ZIG == 512) RcvData = 'j';
  }
  
  SerialUSB.println(RcvData);
}

void Select_Move(void)
{
  if(RcvData == 'a') {
    Dxl_Speed=500;
    Dxl_Delay=300;
    Dxl_MoveFront;
  }
  if(RcvData == 'b') {
      Dxl_Speed=500;
      Dxl_Delay=300;
      Dxl_MoveBack;
  }
  if(RcvData == 'c') {
    Dxl_Speed=500;
    Dxl_Delay=300;
    Dxl_TurnLeft;
  }
  if(RcvData == 'd') {
    Dxl_Speed=500;
    Dxl_Delay=300;
    Dxl_TurnRight;
  }
  if(RcvData == 'e') PlayCount = 1;
  if(RcvData == 'f') PlayCount = 2;
  if(RcvData == 'g') PlayCount = 3;
  if(RcvData == 'h') PlayCount = 4;
  //if(RcvData == 'i') Dxl_Ready;
  if(RcvData == 'j') Dxl_Ready;
}

void PlayCount_Move(void)
{
  char i=1;
  
  if(PlayCount == 1){
    Dxl_Speed=500;
    Dxl_Delay=250;
    while(i)
    {
        if(Controller.available()){
          if(Controller.readData() > 0){
            PlayCnt++;
            delay(50);
          }
          if(PlayCnt > 5){
            BT_ZIG_Changer();
            if(RcvData == 'i') i=0;
            PlayCount = 0;
            PlayCnt = 0;
            Dxl_Ready;
          }
        }
        else Dxl_IRmove();
    }
  }
  
  if(PlayCount == 2){
    Dxl_Speed=200;
    Dxl_Delay=500;
    while(i)
    {
        if(Controller.available()){
          if(Controller.readData() > 0){
            PlayCnt++;
            delay(50);
          }
          if(PlayCnt > 5){
            BT_ZIG_Changer();
            if(RcvData == 'i') i=0;
            PlayCount = 0;
            PlayCnt = 0;
            Dxl_Ready;
          }
        }
        else Dxl_Dance25;
    }
  }
  
  if(PlayCount == 3){
    Dxl_Speed=200;
    Dxl_Delay=500;
    
      SISTAR_Touch_My_Body();
      
      PlayCount = 0;
      Dxl_Ready;
  }
  
  if(PlayCount == 4){
    Dxl_Speed=200;
    Dxl_Delay=500;
    Dxl_Dance23;
    while(i)
    {
        if(Controller.available()){
          if(Controller.readData() > 0){
            PlayCnt++;
            delay(50);
          }
          if(PlayCnt > 5){
            BT_ZIG_Changer();
            if(RcvData == 'i') i=0;
            PlayCount = 0;
            PlayCnt = 0;
            
            Dxl_Ready;
          }
        }
        else Dxl_Dance24;
    }
  }
}

void SISTAR_Touch_My_Body(void)
{
  Dxl_Speed=200;
  Dxl_Delay=500;
  
  MPlay5 Dxl_Dance02;
  
  Dxl_Speed=350;
  Dxl_Delay=1000;
  
  MPlay8 Dxl_Dance08;
  
  Dxl_Speed=200;
  Dxl_Delay=500;
  
  MPlay5 Dxl_Dance01;
  MPlay4 Dxl_Dance19;
  
  Dxl_Speed=80;
  Dxl_Delay=600;
  
  MPlay5 Dxl_Dance16;
  
  Dxl_Speed=200;
  Dxl_Delay=400;
  
  MPlay5 Dxl_Dance02;
  MPlay5 Dxl_Dance09;
  MPlay5 Dxl_Dance10;
  MPlay5 Dxl_Dance04;
  MPlay4 Dxl_Dance06;
  
  MPlay2 Dxl_Dance02;
  MPlay4 Dxl_Dance09;
  MPlay4 Dxl_Dance10;
  MPlay4 Dxl_Dance04;
  MPlay4 Dxl_Dance06;
  
  Dxl_Speed=350;
  Dxl_Delay=1000;

  MPlay8 Dxl_Dance08;
  
//
  
  Dxl_Speed=200;
  Dxl_Delay=500;
  
  MPlay3 Dxl_Dance01;
  
  Dxl_Speed=600;
  
  MPlay4 Dxl_Dance20;
  
  Dxl_Speed=300;
  
  MPlay8 Dxl_Dance05;
  
//

  Dxl_Speed=200;
  Dxl_Delay=400;
  
  MPlay5 Dxl_Dance02;
  MPlay5 Dxl_Dance09;
  MPlay5 Dxl_Dance10;
  MPlay5 Dxl_Dance04;
  MPlay4 Dxl_Dance06;
  
  MPlay2 Dxl_Dance02;
  MPlay4 Dxl_Dance09;
  MPlay4 Dxl_Dance10;
  MPlay4 Dxl_Dance04;
  MPlay4 Dxl_Dance06;
  
  Dxl_Speed=350;
  Dxl_Delay=1000;
  
  MPlay8 Dxl_Dance08;
  
  Dxl_Speed=200;
  Dxl_Delay=500;
  
  MPlay9 Dxl_Dance01;
}
