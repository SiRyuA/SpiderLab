#include <RC100.h>
RC100 Controller;

#define MoveFront Dxl_MotionRun(2, 5, 200, 500)
#define MoveBack Dxl_MotionRun(6, 9, 200, 500)
#define TurnLeft Dxl_MotionRun(10, 13, 200, 500)
#define TurnRight Dxl_MotionRun(14, 17, 200, 500)

#define RC_0 0
#define RC_U 1
#define RC_D 2
#define RC_L 4
#define RC_R 8
#define RC_1 15
#define RC_2 32
#define RC_3 64
#define RC_4 128
#define RC_5 256
#define RC_6 512

Dynamixel Dxl(1);

int PSD_anloge_Pin=1,
    Dxl_ID_Min=1,
    Dxl_ID_Max=18,
    PlayCount=0,
    RcvData=0,
    MoveStop=0;

int PSD_Analog_Infut = 0,
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
//  pinMode(PSD_anloge_Pin, INPUT_ANALOG);
  pinMode(BOARD_LED_PIN, OUTPUT);
//  Serial2.begin(57600);
  Dxl.begin(3);
  Dxl_joint();
  Dxl_MotionRun(0, 1,200, 2500);
  //Dxl.readByte(100,0x1B)
}

void loop() {
  /*
  // PSD Read  
  PSD_Analog_Infut = analogRead(PSD_anloge_Pin);
  PSD_Read();
  PSD_CM_Converter();
  SerialUSB.println(PSD_CMR);
  */
  
  // AX-S1 Move
  SerialUSB.println(Dxl.readByte(100,0x1B));
  if(Dxl.readByte(100,0x1B) < 50) MoveFront;
  else {
    for(PlayCount=0;PlayCount<2;PlayCount++) MoveBack;
    for(PlayCount=0;PlayCount<4;PlayCount++) TurnLeft;
  }

  /*
  // ZIG Test
  if(Controller.available())
  {
    RcvData = Controller.readData();
    SerialUSB.print("RcvData = ");
    SerialUSB.println(RcvData);
    
    if(RcvData & RC100_BTN_1) digitalWrite(BOARD_LED_PIN, LOW);
    
    delay(100); 
  }
  digitalWrite(BOARD_LED_PIN,HIGH);
  */
  
  /*
  // ZIG Move
  if(Controller.available())
  {
    RcvData = Controller.readData();
    
         if(RcvData == RC_U) MoveFront;
    else if(RcvData == RC_D) MoveBack;
    else if(RcvData == RC_L) TurnLeft;
    else if(RcvData == RC_R) TurnRight;
    else MoveStop=1;
    
    delay(100);
    
    if(RcvData & RC100_BTN_1) digitalWrite(BOARD_LED_PIN, LOW);
  }  
  digitalWrite(BOARD_LED_PIN,HIGH);
  */
  
  /* ZIG Serial2
  if(Serial2.available()){
    //print it out though USART2(RX2,TX2)
    Serial2.print((char)Serial2.read());
  }
  */
}

