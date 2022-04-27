void setup(){
  pinMode(4, OUTPUT); // pin number 4 assign to be output pin
}

void loop(){
  digitalWrite(4, HIGH); // put HIGH digital signal on pin 4 | HIGH = 5V
  delay(500); // waiting for 500 ms
  
  digitalWrite(4, LOW); // put LOW digital signal on pin 4 | LOW = 0V
  delay(500); // waiting for 500 ms
}
