#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Nå skal vi se om du klarer enkel addisjon\n");
    int i = 0;
    while(i==0){
        int a = rand()%100;
        int b = rand()%100;
        int ab = a+b;
        int s;
        printf("Hva er %d + %d ?\n",a,b);
        scanf("%d",&s);
        if(ab == s){
            printf("Svaret er riktig!\n");
            i++;
        }
        else{
            printf("Svaret er %d! Prøv igjen\n",ab);
            printf("%d\n",s);
        }
    }
    return 0;
}