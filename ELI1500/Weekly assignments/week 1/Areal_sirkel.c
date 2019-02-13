#include <stdio.h>
#include <math.h>
    
float pi = M_PI;
void Areal(float radius);

int main(){
    float r;
    printf("Hvor stor er radien på sirkelen?\n");
    scanf("%f",&r);
    Areal(r);
    return 0;
}
void Areal(float radius){
    float A;
    A = pi*radius*radius;
    printf("En sirkel med radius %.2f har et areal = %.2f\n",radius,A);
}