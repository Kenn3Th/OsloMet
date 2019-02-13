#include <stdio.h>

int temp[7];
void utskrift(int x[],int str);

int main(){
    printf("Hei. Kan du gi meg tempraturen for de siste 7 dagene?\n");
    for(int i=0; i<7; i++){
        printf("Tempratur %d. dag\n",i+1);
        scanf("%d",&temp[i]);
    }
    utskrift(temp,7);
    return 0;
}

void utskrift(int x[],int str){
    int n,s=0;
    float m;
    n = str;
    for(int i=0; i<n; i++){
        s += x[i];
    }
    printf("Herer en oversiktilg tabell over temperaturene for oppgitt uke, samt snitt temperaturen\n");
    printf("/*************** **************** ***************/\n");
    printf("Dag1   Dag2   Dag3   Dag4   Dag5   Dag6   Dag7\n");
    printf("%2d   %4d   %4d   %4d   %4d   %4d   %4d\n",x[0],x[1],x[2],x[3],x[4],x[5],x[6]);
    printf("/*************** **************** ***************/\n");
    m = (float)s/(float)n;
    printf("Gjenomsnitt's temperaturen er %.2f\n",m);
}