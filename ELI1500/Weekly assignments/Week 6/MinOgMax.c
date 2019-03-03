#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void minogmax(float tall[], int lengde, float *minpeker, float *maxpeker);

int main(){
    srand(time(NULL));
    int length = 10;
    float tall[length], min, max;
    for(int i=0; i<length; i++)
        tall[i] = (rand()%500)/27.0;
    minogmax(tall,length,&min,&max);
    for(int i=0; i<length; i++)
        printf("%3.2f\t",tall[i]);
    printf("\nMax verdien til dette tallsettet er %3.2f",max);
    printf("\nMin verdien til dette tallsettet er %3.2f\n",min);
    return 0;
}

void minogmax(float tall[], int lengde, float *minpeker, float *maxpeker){
    *minpeker = tall[0];
    *maxpeker = tall[0];
    for(int i=0; i<lengde; i++){
        if(tall[i]<*minpeker)
            *minpeker = tall[i];
        if(tall[i]>*maxpeker)
            *maxpeker = tall[i];
    }
}