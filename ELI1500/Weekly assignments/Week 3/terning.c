#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int terning();
int eyes, eye, N=3000 , i;

int main(){
    srand(time(NULL));
    int teller=0;
    for(i=1;i<N;i++){
        eyes = terning();
        if(eyes == 6){
            teller +=1;
        }
    }
    printf("Etter %5d kast ble %3d 6'ere\n",N,teller);
    return 0;
}

int terning(){
    eye = rand()%6+1;
    return eye;
}