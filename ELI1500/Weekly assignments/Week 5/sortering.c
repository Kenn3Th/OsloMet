#include <stdio.h>

/*
void sortering(float arr[], int lengde);
float test[]={2.01,3.3,1.91,0.44,0.12,10.23,0.09,15.21,20.0,19.99};

int main(){
    int len = 10;
    sortering(test,len);
    for(int i=0;i<len;i++)
        printf("%.2f\n",test[i]);
    return 0;
}
*/
void sortering(float arr[], int lengde){
    float space;
    for(int i=0; i<lengde;i++){
        for(int j=0; j<lengde;j++){
            if(arr[j+1]>arr[j]){
                space = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = space;
            }
        }
    }
}