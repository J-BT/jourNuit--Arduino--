const int pinNum = 2;
const int pinLED[2] = {4, 6};
int led;
 // 4 = vert
 // 6 = jaune

void setup() {
  Serial.begin(9600);
  pinMode(pinNum, INPUT);

  for (led = 0; led<2 ; led++){
     pinMode(pinLED[led], OUTPUT);
  }
  digitalWrite(pinLED[0], HIGH); // On eteint la LED 1 (verte)
  digitalWrite(pinLED[1], HIGH); // On eteint la LED 2 (jaune)
  
}

void loop() {
  
  boolean boutonON = digitalRead(pinNum);
  Serial.println(boutonON);  // = print 1 si bouton appuyé 

  if (boutonON == true){
    digitalWrite(pinLED[0], HIGH);
    digitalWrite(pinLED[1], LOW);
  }

  else if (boutonON == false){
    digitalWrite(pinLED[0], LOW);
    digitalWrite(pinLED[1], HIGH);
  }
  
}
