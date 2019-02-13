#include <stdio.h>
#include <unistd.h>

void NOKtoPHP(float nok);
float php,nok;
int main(){
    printf("Velkommen til konvert-titten-tei!\nVi gjør norske kroner til fillipinske pesos! Hvor stort beløp ønsker du å konvertere?\n");
    scanf("%f",&nok);
    printf("Vent litt jeg må bare regne\n");
    printf("...\n");
    sleep(2);
    printf("...\n");
    sleep(2);
    printf("jeg lurer deg ikke...\n");
    sleep(2);
    printf("...\n");
    sleep(2);
    printf("...\n");
    sleep(2);
    NOKtoPHP(nok);
    return 0;
}
void NOKtoPHP(float nok){
    php = nok*6.14;
    printf("Ut i fra dagens kurs er %.2f NOK = %.2f PHP\n",nok,php);
}