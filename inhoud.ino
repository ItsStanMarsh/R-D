float pi = 3.14;
float anwser1;
float anwser2;
float volume;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello you fuck");
}

void loop() { 
  Serial.println("what is the height in dm?");
  while(Serial.available() == 0)
  {}
  anwser1 = Serial.parseFloat();
  
  Serial.println("what is the diameter in dm?");
  while(Serial.available() == 0)
  {}
  anwser2 = Serial.parseFloat();

  delay(1000);

  Calc();
}

void Calc(){
  volume = pi * (anwser2 / 2) * (anwser2 / 2) * anwser1;

  Serial.println("so how big is it ================");
  Serial.print ("height ");
  Serial.print (anwser1);
  Serial.print (" diameter, ");
  Serial.print (anwser2);
  Serial.print (" the volume is ");
  Serial.print (volume);
  Serial.println ("l");
  delay (1000);
}
