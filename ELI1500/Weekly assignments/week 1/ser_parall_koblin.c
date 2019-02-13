#include <stdio.h>

void serie(float R1, float R2);
void parallell(float R1, float R2);

int main(){
    float R1;
    float R2;
    printf("Dette regner ut seriekobling og parallellkobling til to motstander\n");
    printf("Hvor stor er 1. motstand?\n");
    scanf("%f", &R1);
    printf("Hvor stor er 2. motstand?\n");
    scanf("%f", &R2);
    serie(R1,R2);
    parallell(R1,R2);

return 0;
}

void serie(float R1, float R2){
    float Rts; 
    Rts = R1+R2;
    printf("En seriekobling av disse motstanden har en Rt = %.2f\n",Rts);
}
void parallell(float R1, float R2){
    float Rtp;
    Rtp = (R1*R2)/(R1+R2);
    printf("En parallellkobling av disse motstandene har en Rt = %.2f\n",Rtp);
}