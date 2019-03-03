#include <stdio.h>
#define L 10

int main(){
    int x[L];
    long long y[L];
    float z[L];
    long double w[L];
    
    for(int i; i<L; i++){
        printf("Element %d\n",i);
        printf("Adressen til x[%d] er %p\n",i,&x[i]);
        printf("Adressen til y[%d] er %p\n",i,&y[i]);
        printf("Adressen til z[%d] er %p\n",i,&z[i]);
        printf("Adressen til w[%d] er %p\n",i,&w[i]);
        printf("\n");
    }
    return 0;
}