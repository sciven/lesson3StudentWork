
// double check that you have a new line after a {
// make sure every { has a matching }
  
  int encounter = 0;
int pinNumber = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 

while(!Serial){  ;// they will explain later
}

pinMode(pinNumber, OUTPUT);


void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(pinNumber, HIGH);
  delay(1000);
  digitalWrite(pinNumber, LOW);
  delay(1000);
}




