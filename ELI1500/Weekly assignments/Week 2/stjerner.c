#include <stdio.h>

int N=6, i, j;
int main(){
    for(i=1;i<N;i++){
        for(j=0;j<i;j++){
            printf("*");}
    printf("\n");}
    return 0;
}