#include <stdio.h>
#include <unistd.h>

void byttom(int *x, int *y); //function to change the number

int main(){
    int a = 3, b = 5;
    printf("a = %d og b = %d\n",a,b);
    sleep(2);
    printf("Bada BING!\n");
    byttom(&a,&b);
    printf("a = %d og b = %d\n",a,b);
    return 0;
}

void byttom(int *x, int *y){
    int *q;
    *q = *x;
    *x = *y;
    *y = *q;
}