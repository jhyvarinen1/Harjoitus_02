#define LED 5
#define LEDON LOW
#define LEDOFF HIGH

void setup(){
  pinMode(LED, OUTPUT);  
}

int viive = 500;

void loop(){
  digitalWrite(LED, LEDON);
}
