// check the your while loop line

int counter = 0;

int pinNumber = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

while(!Serial){pinMode(pinNumber,OUTPUT);

  ;// 
}


void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(pinNumber,HIGH);
  delay(1000);
  digitalWrite(pinNumber,LOW);
  delay(1000);
}
