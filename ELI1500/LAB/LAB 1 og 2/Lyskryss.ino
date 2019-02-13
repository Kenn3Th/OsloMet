/*** 
Regulere et lyskryss 
A er hovedveien, B er side veien og 
Fotgjenger er et fotgjengerfelt over A 
***/
//vei A
#define pin_AGR 5  //Grønt
#define pin_AGU 6  //Gult
#define pin_AR 7   //Rødt
//vei B
#define pin_BGR 11 //Grønt
#define pin_BGU 12 //Gult
#define pin_BR 13  //Rødt
#define knapp_B 2
//Fotgjenger
#define pin_FG 8   //Grønt
#define pin_FR 9   //Rødt
#define knapp_F 3
int var = 0;

void setup() {
  Serial.begin(115200);
  //vei A
  pinMode(pin_AGR, OUTPUT);
  pinMode(pin_AGU, OUTPUT);
  pinMode(pin_AR, OUTPUT);
  //vei B
 
  pinMode(pin_BGR, OUTPUT);
  pinMode(pin_BGU, OUTPUT);
  pinMode(pin_BR, OUTPUT);
  pinMode(knapp_B, INPUT);
  attachInterrupt(digitalPinToInterrupt(knapp_B),vei_B,RISING);
  
  //Fotgjenger
  pinMode(pin_FG, OUTPUT);
  pinMode(pin_FR, OUTPUT);
  pinMode(knapp_F,INPUT);
  attachInterrupt(digitalPinToInterrupt(knapp_F),fotgjenger,RISING);
}

void loop() {
  // start
  switch(var){
    case 12:
    veiB();
    var = 0;
    break;
    
    case 11:
    FOTGJENGER();
    var = 0;
    break;
    
    default:
    Start();
  }
}
