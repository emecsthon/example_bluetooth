HardwareSerial Serial1(PA10, PA9);

char InfoAPP;
int PUMP = 13;

void setup() {
  pinMode(PUMP,OUTPUT);
  Serial1.begin(9600);
}

void loop() {

  InfoAPP = Serial1.read();

  if ( InfoAPP == '2')
  {
    digitalWrite(PUMP, LOW);
  }

  if ( InfoAPP == '1')
  {
    digitalWrite(PUMP, HIGH);
  }
}
