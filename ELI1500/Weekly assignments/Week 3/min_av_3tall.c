/*Denne oppgaven skal jeg finne den minste av 3 tall*/
#include <stdio.h>
#include <unistd.h>

int min(int x, int y,int z);
int x,y,z,minst;

int main(){
    printf("Har skal vi se hvilke tall som er minst av tre vilkårlige tall som du skal bestemme\n");
    sleep(1);
    printf("...\n");
    sleep(1);
    printf("Hvilke tall skal vi prøve?\n");
    scanf("%d %d %d",&x,&y,&z);
    printf("Skal vi se\n");
    minst = min(x, y, z);
    sleep(2);
    printf("...\n");
    sleep(2);
    printf("...\n");
    sleep(1);
    printf("Det minste av disse 3 tallene er %d\n",minst);
    return 0;
}

int min(int x, int y, int z){
    if(x<y && x<z)
        return x;
    else if(y<x && y<z)
        return y;
    else
        return z;}