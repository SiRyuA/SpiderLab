Dynamixel Dxl(1);

int PSD_anloge_Pin=1,
    Dxl_ID_Min=1,
    Dxl_ID_Max=18,
    Play_Count=0;

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
  pinMode(PSD_anloge_Pin, INPUT_ANALOG);
  PSD_Analog_Infut = analogRead(PSD_anloge_Pin);
  Dxl.begin(3);
  Dxl_joint();
  Dxl_MotionRun(0, 1,200, 1000);
  

}

void loop() {
  PSD_Read();
  PSD_CM_Converter();
  SerialUSB.println(PSD_CMR);
  
}

