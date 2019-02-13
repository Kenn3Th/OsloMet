#include <stdio.h>

int n;
int N;

int main(){
    n = 1;
    while(N<5000){
        n++;
        N = n*n;}
    printf("Det minste heltallet n som gjør at n^2>5000 er %d\n",N);
        
    return 0;
}