#include <stdio.h>
#include <math.h>
float median(float arr[], int lengde);

int main(){
    float x[]={2.2,1.0,2.0,0.01,1.1};
    float y[]={1.1,2.1,2.5,1.9,2.01,0.01,10.0,9.93};
    float medx,medy;
    int len = 5, len2 = 8;
    for(int i=0;i<len;i++)
        printf("%.2f\t",x[i]);
    printf("\n");
    for(int i=0;i<len2;i++)
        printf("%.2f\t",y[i]);
    printf("\n");
    medx = median(x,len);
    medy = median(y,len2);
    printf("Median til x = %.2f\nMedian til y = %.2f\n",medx,medy);
    return 0;
}

float median(float arr[],int lengde){
    int a,b,midt;
    float med, space;
    for(int i=0; i<lengde;i++){
        for(int j=0; j<lengde;j++){
            if(arr[j+1]>arr[j]){
                space = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = space;
            }
        }
    }
    for(int i=0;i<lengde;i++)
        printf("%.2f\t",arr[i]);
    printf("\n");
    if(lengde%2==0){
        a = lengde/2.0;
        b = a-1;
        med = (arr[a]+arr[b])/2.0;
    } else{ 
        midt = lengde/2;
        med = arr[midt];
    }
    return med;
}