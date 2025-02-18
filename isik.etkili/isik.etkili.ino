void setup() {
pinMode(A0,INPUT);
pinMode(3,OUTPUT); 
Serial.begin(9600);
}


void loop() {
int LDR=analongRead(A0);
Serial.print("A0<GİRİŞ)=");
Serial.print(LDR);
if(LDR<50){
  digitalWrite(3,1);
}
else{
  digitalWrite(3,0);
}

}