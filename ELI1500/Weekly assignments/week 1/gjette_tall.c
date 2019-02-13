#include <stdio.h>
#include <stdlib.h>


int main(){
    int a;
    int s;
    int gjett = 0;
    printf("Jeg har valgt et tilfeldig tall mellom 0-100\nKan du gjette tallet?\n");
    while(1){
    a = rand()%100;
    while( a != s){
        scanf("%d",&s);
        if(s<a){
            printf("Større!\n");
            gjett++;
        }
        if(s>a){
            printf("Mindre!\n");
            gjett++;
        }
    }
    printf("Du gjettet det på %d forsøk!\n",gjett);
    printf("Det var lett! Prøv å gjette dette tallet da!\n");
    }
    return 0;
}