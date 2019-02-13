#include <stdio.h>
#include <math.h>

float p1, p2, q1, q2;
void avstand(float p1,float p2,float q3,float q4);

int main(){
    printf("Her skal vi finne avstanden mellom to vektorer\n");
    printf("Hva er x og y verdiene til første vektor?\n");
    scanf("%f %f",&p1, &p2);
    printf("Hva er x og y verdiene til andre vektor?\n");
    scanf("%f %f",&q1, &q2);
    avstand(p1,p2,q1,q2);
    
    return 0;
}

void avstand(float p1, float p2, float q3, float q4){
    float rot;
    float X;
    float Y;
    X = (p1-q1)*(p1-q1);
    Y = (p2-q2)*(p2-q2);
    rot = sqrt(X+Y);
    printf("Avstanden mellom punktene er %.2f\n",rot);    
}