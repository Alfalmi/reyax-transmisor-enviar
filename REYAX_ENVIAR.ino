#define led 13
String incomingString;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(115200);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial2.available()){
    incomingString = Serial2.readString();
   Serial.println(incomingString);
   digitalWrite(led,HIGH);
   delay(500);
      digitalWrite(led,LOW);
    }

}
