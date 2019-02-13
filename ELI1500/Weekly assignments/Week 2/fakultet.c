#include <stdio.h>

void fakultet(int n);
int n, produkt, i;

int main(){
    printf("Vil du vite hvor stor fakultet til et tall er?\nGi meg tallet og jeg skal si deg hvor stor fakulteten er!\n");
    scanf("%d",&n);
    fakultet(n);
    return 0;
}
void fakultet(int n){
    produkt = 1;
    for(i=1;i<n;i++){
        produkt = produkt*i;
    }
    printf("%d! = %d\n",n,produkt);
}