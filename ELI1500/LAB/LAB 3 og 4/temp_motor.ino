/****   Setting pins  ****/
#define pin_6     6   //Enable motor
#define pin_5     5   //Motor controll pin 2
#define pin_4     4   //Motor controll pin 1
#define temp_pin  A0  //Analog input for temperature sensor

/**** Setting values  ****/
#define len 20        //Length av array
#define bits 1024.0   //Bit resolution for Arduino UNO
#define mV 5000.0     //Reference voltage (5V)
float temp_sen[len], t_min, t_max, t_mean, motor_speed, converter;

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
/* Given relation between mV and degrees celsius, 750mV = 25C 
 * relation between mV and bit resolution, referenceVoltage/bitResolution = Rel
 * (measured value)*Rel*25C/750mV = Actual temperature in Celsius
 */
  converter = (mV/bits)*(25.0/750.0);
  for(int i=0;i<len;i++){
      temp_sen[i] = analogRead(temp_pin)*converter;
      delay(500);
  }
  sortering(temp_sen,len);
  max_min_mean(temp_sen,len,&t_min,&t_max,&t_mean);
  /*** Printing max,min and mean values of mesured temperature ***/
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
}
