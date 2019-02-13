#include <stdio.h>

int a,b,da,db,n;
int faktor;
void divisor(int a, int b);

int main(){
    printf("Gi meg to tall og jeg finner den største felles faktoren for disse tallene!\n");
    scanf("%d %d",&a,&b);
    divisor(a,b);
    return 0;
}
void divisor(int a, int b){
    int i = 2;
    if(a>b){n=a;}
    else{n=b;}
    while(i<(n+1)){
        i++;
        da = a%i; db = b%i;
        if(da==0 && db==0){
            faktor = i;
        }
    }
    printf("Den største felles faktoren er %d\n",faktor);
}