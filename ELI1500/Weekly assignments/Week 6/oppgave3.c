#include <stdio.h>
#include <unistd.h>

void s_og_p(int x, int y, int *sum, int *prod);

int main(){
    int x,y,sum, prod;
    printf("Her skal jeg addere og multiplisere 2 heltall. Hvilke 2 tall jeg skal jeg bruke?\n");
    scanf("%d %d",&x,&y);
    s_og_p(x,y,&sum,&prod);
    printf("Let's do som calculating!!\n");
    sleep(2);
    printf("%d + %d = %d og %d*%d = %d\n",x,y,sum,x,y,prod);
    return 0;
}

void s_og_p(int x, int y, int *sum, int *prod){
    *sum = x+y;
    *prod = x*y;
}