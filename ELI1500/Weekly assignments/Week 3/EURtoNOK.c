#include <stdio.h>
#include <unistd.h>

void EURtoNOK(float euro);
float euro,nok;
int main(){
    printf("Velkommen til konvert-titten-tei!\nVi gjør om euro til norske kroner! Hvor stort beløp ønsker du å konvertere?\n");
    scanf("%f",&euro);
    printf("Vent litt jeg må bare regne\n");
    printf("...\n");
    sleep(2);
    printf("...\n");
    sleep(2);
    printf("jeg lurer deg ikke...\n");
    sleep(2);
    printf("...\n");
    sleep(2);
    EURtoNOK(euro);
    return 0;
}
void EURtoNOK(float euro){
    nok = euro*9.74;
    printf("Ut i fra dagens kurs er %.2f EUR = %.2f\n NOK",euro,nok);
}