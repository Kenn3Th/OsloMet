#include <stdio.h>
#include <unistd.h>

int min(float x, float y);
int x,y,minst;

int main(){
    printf("Dette arbitrærere programme finner hvilket heltall som er størst av to tall\n");
    sleep(1);
    printf("...\n");
    sleep(2);
    printf("sigh!..\n");
    sleep(2);
    printf("hvilke tall vil du sjekke?\n");
    scanf("%d %d",&x,&y);
    minst = min(x,y);
    printf("...\n");
    sleep(2);
    printf("sigh!..\n");
    sleep(1);
    printf("Det minste tallet er %d\n",minst);
    return 0;}

int min(float x, float y){
    if(x<y)
        return x;
    else 
        return y;}