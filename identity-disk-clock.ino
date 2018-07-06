int CLK = 13;
int SER = 11;
int LAT = 10;

void setup() {
  pinMode(CLK, OUTPUT);
  pinMode(SER, OUTPUT);
  pinMode(LAT, OUTPUT);
}

void loop() {
  digitalWrite(LAT, LOW);
  shiftOut(SER, CLK, MSBFIRST, 0b11110111);
  digitalWrite(LAT, HIGH);
  
  delayMicroseconds(250);
  /*
  digitalWrite(LAT, LOW);
  shiftOut(SER, CLK, MSBFIRST, 0b11111111);
  digitalWrite(LAT, HIGH);
  
  delayMicroseconds(250);
  */
}
