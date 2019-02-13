#include <stdio.h>
void fakultet(int n);
int i,n;
double produkt;

int main(){
    for(i=1;i<51;i++)
        fakultet(i);
    return 0;
}
void fakultet(int n){
    produkt = 1.0;
    for(i=1;i<n;i++)
        produkt = produkt*i;
    printf("%d! = %.2f\n",n,produkt);
}