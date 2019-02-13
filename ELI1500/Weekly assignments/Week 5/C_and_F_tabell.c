#include <stdio.h>
#define size 21
float CtoF(float temp);

int main(){
    float TempC[size],TempF[size];
    for(int i=0;i<size+1;i++){
        if(i==0)
            TempC[i] = -100.0;
        else 
            TempC[i] = TempC[i-1]+10.0;
    }
    for(int j=0;j<size;j++)
        TempF[j] = CtoF(TempC[j]);
    printf("Celsius    Farenheit\n");
    for(int i=0;i<size;i++)
        printf("%7.1f %12.1f\n",TempC[i],TempF[i]);
        
    return 0;
}
float CtoF(float temp){
    float farenheit;
    farenheit = (9.0/5.0)*temp +32;
    return farenheit;
}