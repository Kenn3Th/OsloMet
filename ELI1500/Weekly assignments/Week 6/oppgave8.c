#include <stdio.h>
#include <unistd.h>

int main(){
    int x[5];
    int *y;  
    y = &x[0];
    printf("Skriv in 5 heltalls verdier\n");
    for(int i=0; i<5; i++){
        y = &x[i];
        scanf("%d",y);
        sleep(1);
        printf("Du skrev %d\n",x[i]);
        sleep(1);
        printf("...\n");
        sleep(2);
        printf("Var det %d du skrev??\n",*y);
        sleep(1);
        printf("...\n");
        sleep(2);
        printf("Neste verdi!\n");
    }
    return 0;
}