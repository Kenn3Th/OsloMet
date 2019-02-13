#include <stdio.h>
char c;
int l_vokal,l_konsonant,s_vokal,s_konsonant;
int main(){
    printf("Lurer du på om en bokstav er en vokal eller en konsonant?\nSkriv den ned så finner vi ut av d\nPS! klarer ikke ta inn æ,ø,å\n");
    scanf("%c",&c);
    //vokal = a e i o u y æ ø å
    switch(c){
        case'a':
            printf("%c er en liten vokal\n",c);
            break;
        case'A':
            printf("%c er en stor vokal\n",c);
            break;
        case'e':
            printf("%c er en liten vokal\n",c);
            break;
        case'E':
            printf("%c er en stor vokal\n",c);
            break;
        case'i':
            printf("%c er en liten vokal\n",c);
            break;
        case'I':
            printf("%c er en stor vokal\n",c);
            break;
        case'o':
            printf("%c er en stor vokal\n",c);
            break;
        case'O':
        case'u':
            printf("%c er en stor vokal\n",c);
            break;
        case'U':
            printf("%c er en stor vokal\n",c);
            break;
        case'y':
            printf("%c er en stor vokal\n",c);
            break;
        case'Y':
            printf("%c er en stor vokal\n",c);
            break;
        default:
            printf("%c er ikke en vokal men en konsonant\n",c);
    }
    return 0;
}