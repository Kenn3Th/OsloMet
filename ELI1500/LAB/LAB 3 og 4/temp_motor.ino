/****   Setting pins  ****/
#define pin_6     6   //Enable motor
#define pin_5     5   //Controll pin 2
#define pin_4     4   //Controll pin 1
#define temp_pin  A0  //

/**** Setting values  ****/
#define len 20
#define bits 1024.0
#define mV 5000.0
#define konv 30.0
float temp_sen[len], temperatur[len]; 
float t_min, t_max, t_mean, motor_speed;

/****      Code       ****/
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin_4, OUTPUT);
  pinMode(pin_5, OUTPUT);
  pinMode(pin_6, OUTPUT);
  pinMode(temp_pin, INPUT);
}

void loop() {
  /****   Temperatur sensor   ****/
  for(int i=0;i<len;i++){
      temp_sen[i] = analogRead(temp_pin)*(mV/bits)/konv;
      delay(500);
  }
  sortering(temp_sen,len);
  max_min_mean(temp_sen,len,&t_min,&t_max,&t_mean);
  Serial.println("---Max temperatur---");
  Serial.println(t_max);
  Serial.println("---Min temperatur---");
  Serial.println(t_min);
  Serial.println("---Mean temperatur---");
  Serial.println(t_mean);
  /****       DC motor      ****/
  motor_speed= m_speed(t_mean);
  analogWrite(pin_6,motor_speed);
  digitalWrite(pin_4,HIGH);
  digitalWrite(pin_5,LOW); 
  Serial.println("Vifte hastighet");
  Serial.println(motor_speed);
}
