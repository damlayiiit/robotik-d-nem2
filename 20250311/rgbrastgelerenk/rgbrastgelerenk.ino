int r=3;
int g=5;
int b=6;
void setup() {
 pinMode(r,OUTPUT);
 pinMode(g,OUTPUT);
 pinMode(b,OUTPUT);
}
void loop() {
anologWrite(r,random(0, 255));
analogWrite(g,random(0, 255));
analogWrite(b,random(0, 255));
delay(500);
}