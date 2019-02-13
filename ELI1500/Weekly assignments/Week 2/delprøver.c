/*
Oppgave 2.3
Studentene i en annen klasse har 5 delprøver i løpet av året. 
Hver prøve gir en poengsum i området 0-100. 
Gjennomsnittet av poengsummene vil også være et tall mellom 0 og 100
*/
#include <stdio.h>
void Karakter(float snitt);
int i;
int prøver = 5;
float sum = 0.0;
float snitt;
float p;

int main(){
    for(i=1; i<(prøver+1); i++){
        printf("Hva ble poengsummen på prøve nr. %d\n",i);
        scanf("%f",&p);
        sum += p;
    }
    snitt = sum/prøver;
    Karakter(snitt);
    return 0;
}

void Karakter(float snitt){
    if(snitt<40){
        printf("%.2f %%\n",snitt);
        printf("Karakter F!\nDu strøyk! SKJERPINGS!!\n");}
    else if(39<snitt && snitt<50){
        printf("%.2f %%\n",snitt);
        printf("Karakter E\nDetta var på hengende håret!\n");}
    else if(49<snitt && snitt<60){
        printf("%.2f %%\n",snitt);
        printf("Karakter D\nDu kunne ha klart bedre! Prøv igjen til neste år!\n");}
    else if(59<snitt && snitt<80){
        printf("%.2f %%\n",snitt);
        printf("Karakter C\nGodt nok!\n");}
    else if(79<snitt && snitt<90){
        printf("%.2f %%\n",snitt);
        printf("Karakter B! Bra jobba!\n");}
    else{
        printf("%.2f %%\n",snitt);
        printf("Karakter A!!! Kunne ikke gått no bedre detta!\n");}
}