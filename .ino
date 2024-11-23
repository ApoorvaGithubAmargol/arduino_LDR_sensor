
const int ledPin = 12;   //the number of the LED pin
const int   ldrPin = A0;  //the number of the LDR pin


void setup() {

  Serial.begin(9600);
   pinMode(ledPin, OUTPUT); 
  pinMode(ldrPin, INPUT); 
}  

void loop() {
  int   ldrStatus = analogRead(ldrPin);   //read the status of the LDR value

  //check   if the LDR status is <= 80 then led is high

Serial.println(ldrStatus);
   if (ldrStatus <=80) {

    digitalWrite(ledPin,   HIGH);               //turn LED on

   }
  else {

    digitalWrite(ledPin,   LOW);          //turn LED off
  }
}
