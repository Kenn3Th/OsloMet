#include <stdio.h>
void g_eq_l(float x);

int main(){
    float x;
    printf("Her skal vi finne ut om tallet er større, lik eller mindre enn 0\n");
    printf("Hvilket tall skal vi prøve?\n");
    scanf("%f",&x);
    g_eq_l(x);
    return 0;
}

void g_eq_l(float x){
 if(x>0){
    printf("x er større enn 0\n");}
    else if(x==0){
        printf("X = 0\n");}
    else if(x<0){
    printf("x er mindre enn 0\n");}
    else{
     printf("Har du satt inn et tall?")   
    }
}