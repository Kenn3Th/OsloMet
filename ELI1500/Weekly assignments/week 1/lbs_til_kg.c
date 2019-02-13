#include <stdio.h>

void konverter(float lbs);
float konv_konst = 0.454;

int main(){
    float lbs;
    printf("Hvor mange pund ønsker du å konvertere til kg?\n");
    scanf("%f",&lbs);
    konverter(lbs);
}

void konverter(float lbs){
    float kg;
    kg = lbs*konv_konst;
    printf("%.2f lbs er %.2f kg\n",lbs,kg);
}