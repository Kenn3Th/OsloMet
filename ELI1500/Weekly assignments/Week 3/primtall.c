#include <stdio.h>

int primtall(int n);

int main(){
    int n = 100;
    for(int i=3; i<=n; i++){
        if(primtall(i)==1) printf("%d\n",i);        
    }
    return 0;
}
int primtall(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){return 0;}
    }
    return 1;
}