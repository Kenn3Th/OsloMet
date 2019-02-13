#include <stdio.h>
#include <math.h>

float a, b, c;
void Kar_lig(float a, float b, float c);
void img(float a, float b, float c);

int main(){
    printf("Har du en 2.grads likning som du vil løse?\nGi meg koeffisientene og jeg kan løse den for deg.\nBegynn med ax^2 deretter bx og tilslutt c\n");
    scanf("%f %f %f",&a,&b,&c);
    if ((b*b)<(4*a*c)){
        img(a,b,c);
        printf("%.2f\n",b*b);
    }
    else{
        Kar_lig(a,b,c);}
        
    return 0;
}

void Kar_lig(float a, float b, float c){
    float r1, r2;
    r1 = 1.0/(2*a)*(-b+sqrt(b*b-(4*a*c)));
    r2 = 1.0/(2*a)*(-b-sqrt(b*b-(4*a*c)));
    printf("r1 = %.2f og r2 = %.2f\n",r1,r2);
}
void img(float a, float b, float c){
    float ra, rb;
    ra = -b/(2*a);
    rb = sqrt((4*a*c)-(b*b))/(2*a);
    printf("r1 = %.2f + %2.f i og r2 = %.2f - %2.f i\n",ra,rb,ra,rb);
}  