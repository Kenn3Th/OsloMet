#include <stdio.h>
#include <unistd.h>

int N, i, j;
void stjerner(int N);

int main(){
    printf("Nå skal vi tegne stjerner i en trekant form!\n");
    sleep(1);
    printf("Hvordan lurer du sikkert på\n");
    sleep(1);
    printf("*dramatisk pause*\n");
    sleep(2);
    printf("Hvor mange linjer skal vi bruke?\n");
    scanf("%d",&N);
    stjerner(N);
    return 0;
}

void stjerner(int N){
    for(i=1;i<N+1;i++){
        for(j=0;j<i;j++){
            printf("*");}
    printf("\n");}
}