#include <stdio.h>
int i;
float C[5]={0.0, 10.77, 37.7, 50.13, 100.0},F;
float C_to_F(float C);

int main(){
    printf("Celsius    Farenheit\n");
    for(i=0; i<4; i++){
        F = C_to_F(C[i]);
        printf(" %4.2f      %4.2f\n",C[i],F);
    }
    return 0;    
}
float C_to_F(float C){
    F = ((9.0/5.0)*C+32.0);
    return F;}