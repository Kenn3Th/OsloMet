#include <stdio.h>

int main(){
    int i;
    printf("|-----------------|\n");
    printf("|  i    i^2   i^3 |\n");
    printf("|-----------------|\n");
    for(i=1; i<11;i++){
        printf("|%3d%6d%6d  |\n",i,i*i,i*i*i);
    }
    printf("|-----------------|\n");
    
    return 0;
}