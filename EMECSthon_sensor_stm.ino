float humidity;
int humPin = A0;

HardwareSerial Serial1(PA10, PA9);

void setup() {
  Serial1.begin(9600);
  pinMode(humPin,INPUT);    //Define the pin as input

}

void loop() {

  humidity = analogRead(humPin);

  Serial1.print("Humidity level: ");
  Serial1.print(abs(100-(((humidity-450)/573) *100)));
  Serial1.println (" %");
 
  delay(1000);
}
