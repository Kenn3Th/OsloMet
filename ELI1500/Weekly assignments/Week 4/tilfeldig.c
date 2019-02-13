#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *tilfeldig();

int main(){
    int tallet,tall=0;
    int *p;
    printf("Jeg har ramset opp en tilfeldig rekke med tall fra 1 til 20.\n");
    printf("Si et tall så skal jeg sjekke hvor mange ganger dette tallet forekommer i rekken min\n");
    scanf("%d",&tallet);
    p = tilfeldig();
    for(int i=0; i<10;i++){
        if(p[i]==tallet)
            tall +=1;
    }
    printf("%d ganger var tallet ditt i den tilfeldige tall rekken min\n",tall);
    
    return 0;
}

int *tilfeldig(){
    int tilfeldig[10];
    srand((unsigned)time(NULL));
    for(int i = 0;i<10 ;i++)
        tilfeldig[i] = rand()%20+1;
    return tilfeldig;
}