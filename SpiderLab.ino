#define MoveFront Dxl_MotionRun(2, 5, 200, 500)
#define MoveBack Dxl_MotionRun(6, 9, 200, 500)
#define TurnLeft Dxl_MotionRun(10, 13, 200, 500)
#define TurnRight Dxl_MotionRun(14, 17, 200, 500)
#define Ready Dxl_MotionRun(1, 1, 200, 500)

Dynamixel Dxl(1);

char RcvData = 0;

int PSD_anloge_Pin=1,
    Dxl_ID_Min=1,
    Dxl_ID_Max=18,
    PlayCount=0,
    RemoteType=1, // 1=Bluetooth, 0=Zigbee
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
  //pinMode(PSD_anloge_Pin, INPUT_ANALOG);
  if(RemoteType == 1) Serial2.begin(9600); // Bluetooth
  else Serial2.begin(57600); // Zigbee
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
  /*
  // AX-S1 Move
  SerialUSB.println(Dxl.readByte(100,0x1B));
  if(Dxl.readByte(100,0x1B) < 50) MoveFront;
  else {
    for(PlayCount=0;PlayCount<2;PlayCount++) MoveBack;
    for(PlayCount=0;PlayCount<4;PlayCount++) TurnLeft;
  }
  */
  
  if(Serial2.available()){
    RcvData = Serial2.read();
    SerialUSB.println(RcvData);
    
    if(RcvData == 'f') MoveFront;
    if(RcvData == 'b') MoveBack;
    if(RcvData == 'l') TurnLeft;
    if(RcvData == 'r') TurnRight;
    if(RcvData == 's') Ready;
  }
}
