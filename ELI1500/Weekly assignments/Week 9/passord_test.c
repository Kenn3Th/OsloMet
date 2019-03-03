/** This program tests if a password meets the requierments, 1 digit 1 small and 1 big letter **/

#include <stdio.h>
#include <stdlib.h> //for exit() cmd
#include <string.h>
#include <ctype.h>

void tall_og_bokstav(char pswd[], int len);

int main(){
    char passord[20];
    int lengde;
    printf("Dette er en passord kontrollør, er passordet ditt sikkert å bruke?\n");
    printf("Skriv det inn å finn ut!\n");
    fgets(passord,20,stdin); //stdin(standard input) betyr at det char leses fra tastaturet
    lengde = strlen(passord)-1;
    //Sjekker lengden på passordet
    if(lengde<8){
        printf("Passordet ditt er for kort!\nDet har kun %lu karakterer, kravet er 8 karakterer\n",strlen(passord)-1);
        exit(1);}
    //sjekker om det er tall,stor og liten bokstav i passordet.
    tall_og_bokstav(passord,lengde);
    return 0;
}
void tall_og_bokstav(char pswd[], int len){
    int sum=0,suma=0,sumA=0;
    for(int i=0; i<len; i++){
        if(isdigit(pswd[i])==1)
            sum++;
        if(islower(pswd[i])==1)
            suma++;
        if(isupper(pswd[i])==1)
            sumA++;}
    if(sum == 0){
        printf("Du må ha minst 1 tall i passordet ditt!\n");
        exit(1);}
    else if(suma == 0){ 
        printf("Du må ha minst 1 liten bokstav i passordet ditt!\n");
        exit(1);}
    else if(sumA == 0){
        printf("Du må ha minst 1 stor bokstav i passordet ditt!\n");
        exit(1);}
    else
        printf("Godkjent!\n");
}