int sensor = 5; //Cảm biến tiệm cận nối chân số 5 Arduino
int relay = 13; //Relay nối chân số 13 Arduino
int valve = 7; //Van điện từ nối chân số 7 Arduino 
int valueSensor;
void setup() 
{
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(relay, OUTPUT);
  pinMode(valve, OUTPUT);
  digitalWrite(relay, LOW);
  digitalWrite(valve, LOW);
}

void loop() 
{
  valueSensor = digitalRead(sensor); //Đọc giá trị digital từ cảm biến và gán vào biến giatri
 
  if(valueSensor == 0)
  {
    digitalWrite(relay, HIGH);
    digitalWrite(valve, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(relay, LOW);
    digitalWrite(valve, LOW);
  }
}
