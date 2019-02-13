#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10000

int terninger();

int main(){
    int sum, antall[26], number_of_eyes[26];
    srand((unsigned)time(NULL));
    for(int i=0;i<26;i++){
        number_of_eyes[i] = 0;
        for(int j=5;j<31-i;j++)
            antall[i] = j;}
        
    for(int i=0;i<size;i++){
        sum = terninger();
        for(int j = 0; j<26;j++){
            if(sum == antall[j]){
                number_of_eyes[j] += 1;}
        }
    }
    for(int i=0;i<26;i++){
        //printf("%d\n",number_of_eyes[i]);
        for(int j=0;j<number_of_eyes[i]/10.0;j++)
            printf("*");
        printf("\n");}
    return 0;
}

int terninger(){
    int t1,t2,t3,t4,t5,sum=0;
    t1 = rand()%6+1; t2 = rand()%6+1; t3 = rand()%6+1;
    t4 = rand()%6+1; t5 = rand()%6+1;
    sum = t1+t2+t3+t4+t5;
    return sum;
}