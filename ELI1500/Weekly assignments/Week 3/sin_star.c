#include <stdio.h>
#include <math.h>

int N=30, i, j;
float pi=M_PI,d,b,dt,s;
void stjerner(int N);

int main(){
    stjerner(30);
    return 0;
}

void stjerner(int N){
    dt = pi/(N);
    for(i=0;i<N+1;i++){
        s = ceil(sin(dt*i)*50);
        for(j=0;j<s;j++){
            printf("*");}
    printf("\n");}
}