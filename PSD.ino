/* Analog data Read & change PSD */
void PSD_Read()
{
  unsigned char cnt;

  for (cnt = 0; cnt<10; cnt++)
  {
    PSD_Analog_Read[cnt] = PSD_Analog_Infut;
  }

  PSD_Shake();
  PSD_Complement = PSD_Analog_Read[3] + PSD_Analog_Read[4] + PSD_Analog_Read[5] + PSD_Analog_Read[6];
  PSD_Complement = (PSD_Complement >> 2);

  PSD_Analog_Volt = PSD_Complement;
}

/* Analog data Shake */
void PSD_Shake()
{
  unsigned char i = 0, j = 0;
  unsigned int temp = 0;
  
  for (i = 0; i<5; i++)
  {
    for (j = i + 1; j<10 - i; j++)
    {
      if(PSD_Analog_Read[j - 1] > PSD_Analog_Read[j])
      {
        temp = PSD_Analog_Read[j - 1];
        PSD_Analog_Read[j - 1] = PSD_Analog_Read[j];
        PSD_Analog_Read[j] = temp;
      }
    }
    for (j = 10 - i - 2; j>i; j--)
    {
      if (PSD_Analog_Read[j - 1] > PSD_Analog_Read[j])
      {
        temp = PSD_Analog_Read[j - 1];
        PSD_Analog_Read[j - 1] = PSD_Analog_Read[j];
        PSD_Analog_Read[j] = temp;
      }
    }
  }
}

/* PSD Analog data Convert CM */
void PSD_CM_Converter()
{
  PSD_CM_Count++;
  PSD_Voltage = (((float)PSD_Analog_Volt * 5) / 1024);
  if (PSD_Voltage<2.4 && PSD_Voltage>0.4)
  {
    if (PSD_Voltage>0.94 && PSD_Voltage<2.4) PSD_cm = (9.9477*PSD_Voltage*PSD_Voltage) - (46.445*PSD_Voltage) + 64.327;
    else if (PSD_Voltage>0.4 && PSD_Voltage<0.94) PSD_cm = (151.28*PSD_Voltage*PSD_Voltage) - (298.15*PSD_Voltage) + 177.46;
  }
  else
  {
    if (PSD_Voltage>2.4) PSD_cm = 10;
    else if (PSD_Voltage<0.4) PSD_cm = 80;
  }
  PSD_CM += PSD_cm;
  if (PSD_CM_Count >= 5) {
    PSD_CMR = (PSD_CM / 5);
    PSD_CM_Count = 0;
    PSD_CM = 0;
  }
}
