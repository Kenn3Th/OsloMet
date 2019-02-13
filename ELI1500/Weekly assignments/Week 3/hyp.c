#include <stdio.h>
#include <math.h>

float x,y,h;
float hyp(float x, float y);

int main(){
    printf("Jeg skal hjelpe deg med å finne hypotenusen\n");
    printf("Hva er lengden på de to katetene?\n");
    scanf("%f %f",&x,&y);
    h = hyp(x, y);
    printf("Hypotenusen er %4.2f\n",h);
    return 0;
}

float hyp(float x, float y){
    return sqrt(x*x + y*y);}