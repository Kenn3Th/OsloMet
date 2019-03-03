#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 10

int finn0(int tall[], int lengde);
int *a=0;

int main(){
    srand(time(NULL));
    int arr[L],x;
    for(int i=0; i<L; i++)
        arr[i] = rand()%10;
    x = finn0(arr,L);
    for(int i=0;i<L;i++)
        printf("%d\t",arr[i]);
    if(x==-1)
        printf("\nDet finnes ikke 0 i dette arrayet!\n");
    else
        printf("\nFørste null jeg finner befinner seg i array[%d]\n",x);
    return 0;    
}

int finn0(int tall[], int lengde){
    for(int i=0; i<lengde;i++){
        if(tall[i] == a){
            return i;
            break;
        }
    } return -1;
}