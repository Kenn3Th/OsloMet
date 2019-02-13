#include <stdio.h>

float C;
void C_to_F(float C);

int main(){
    printf("Her skal vi regne om celsius til farenheit\n");
    printf("Hvor mange grader celsius vil du gjøre om til farenheit?\n");
    scanf("%f",&C);
    C_to_F(C);
    
    return 0;    
}
void C_to_F(float C){
    float F;
    F = ((9.0/5.0)*C+32.0);
    printf("%.2f celsius er %.2f farenheit\n",C,F);
}