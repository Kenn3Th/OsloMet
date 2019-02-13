#include <stdio.h>

void lik(float x, float y);

int main(){
    float x;
    float y;
    printf("Her skal vi se om x er lik y\n");
    printf("Hva er x?\n");
    scanf("%f",&x);
    printf("Hva er y?\n");
    scanf("%f",&y);
    lik(x,y);
    return 0;
}

void lik(float x, float y){
 if(x==y){
     printf("x = y\n");}
    else if(x>y){
        printf("x er større enn y\n");}
    else if(x<y){
        printf("x er mindre enn y\n");}
    else{
        printf("Kan kun sammenligne tall!\n");}
}