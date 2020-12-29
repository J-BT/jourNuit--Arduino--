const int pinNum = 2;
const int pinLED[2] = {4, 6};
int led;
 // 4 = blanche
 // 6 = bleue

void setup() {
  Serial.begin(9600);
  pinMode(pinNum, INPUT);

  for (led = 0; led<2 ; led++){
     pinMode(led, OUTPUT);
  }
  digitalWrite(pinLED[1], HIGH); // On eteint la LED 6
  digitalWrite(pinLED[0], LOW); // On eteint la LED 4
  

}

void loop() {
  
  boolean a = digitalRead(pinNum);
  Serial.println(a);

  if (a){
    digitalWrite(pinLED[1], LOW);
  }

  else if (a!=1){
    digitalWrite(pinLED[1], HIGH);
  }
  
}
