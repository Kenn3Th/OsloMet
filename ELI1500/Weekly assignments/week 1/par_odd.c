#include <stdio.h>

void par_odd(int x);

int main(){
    int x;
    int y;
    printf("Dette programmet sjekker om tallet du putter inn er et partall eller odde tall!\n");
    printf("Hvilket tall skal vi prøve?\n");
    y = scanf("%d",&x);
    if (y==1){
        par_odd(x);
    }
    else{
        printf(" Dette er vel ikke et tall??\n");}
    
    return 0;
}

void par_odd(int x){
    if(x%2==0){
        printf("Dette er et partall!\n");
    }
    else{
        printf("Dette er ikke et partall!\n");
    }
}