#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAKSANT 25000

double snitt(double tall[], int lengde);
double innenfor(double tall[], int lengde, double gsnitt);

int main(){
    srand(time(NULL));
    double tall[MAKSANT];
    double gjennomsnitt, tallinn;
    for(int i=0; i<MAKSANT;i++)
        tall[i] = (rand()%10000)/100.0;
    gjennomsnitt = snitt(tall,MAKSANT);
    tallinn = innenfor(tall,MAKSANT,gjennomsnitt);
    printf("Gjennomsnittet er %.2f pluss minus %.2f\n",gjennomsnitt, gjennomsnitt*0.1);
    printf("Det er %.2f tall som er innen for 10%% av gjennomsnittet\n",tallinn);
    
    return 0;
}
//Funksjon som regner ut gjennomsnittet av tallene i array tall
double snitt(double tall[], int lengde){
    double gsnitt,sum=0.0;
    for(int i = 0; i<lengde; i++)
        sum += tall[i];
    gsnitt = sum/lengde;
    return gsnitt;
}
//Funksjon som sjekker hvor mange tall som er innen for gjennomsnittet med et avvik på pm 10%
double innenfor(double tall[], int lengde, double gsnitt){
    double pbredde,mbredde,counter=0.0;
    pbredde = gsnitt + gsnitt*0.1;
    mbredde = gsnitt - gsnitt*0.1;
    for(int i =0; i<MAKSANT; i++){
        if(mbredde<tall[i] && tall[i]<pbredde){
            counter +=1;
            //printf("%.2f\n",tall[i]);
        }
        }
    return counter;
}