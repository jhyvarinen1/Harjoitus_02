#define LED 5
#define LEDON LOW
#define LEDOFF HIGH

void setup(){
  pinMode(LED, OUTPUT);
  Serial.begin(9600);  
}

int viive = 1000;

void loop(){
  digitalWrite(LED, LEDON);
  Serial.println("Palaa");
  delay(viive);
  digitalWrite(LED, LEDOFF);
  Serial.println("Sammuu");
  delay(viive);
}
