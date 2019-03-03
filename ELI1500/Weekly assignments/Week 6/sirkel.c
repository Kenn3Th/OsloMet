/*** Sirkel
Areal = pi*R^2; Omkrets = 2piR
der R er radius.
***/
#include <stdio.h>
#include <math.h>
#include <unistd.h>

void sirkel(float radius, float *A, float *O);

int main(){
    float r, omkrets, areal;
    printf("Dette programmet hjelper deg å regne ut areal og omkretsen til en sirkel.\nDet eneste jeg trenger er radius\n");
    sleep(1);
    printf("Hva er radiusen?!?\n");
    scanf("%f",&r);
    printf("Saken er biff!\n");
    sleep(2);
    sirkel(r,&areal,&omkrets);
    printf("Arealt til sirkelen din er %.2f og omkretsen er %.2f\n",areal,omkrets);
    return 0;
}
void sirkel(float radius, float *A, float *O){
    float pi = M_PI;        //pi fra math.h
    *O = 2*pi*radius;       //Omkrets
    *A = pi*radius*radius;  //Areal
}