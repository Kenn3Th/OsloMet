#include <stdio.h>
#include <math.h>


int main(){
    int n, i;
    float sum = 0.0 , max, min=5.5, mean;
    printf("Vi skal se hvor mye det har regnet i løpet av en måned, men du må hjelpe meg!\n");
    printf("Du må fylle inn hvor mange dager det er i måneden og hvor mye det har regnet hverdag\n");
    printf("Hvor mange dager er det i måneden du vil undersøke?\n");
    scanf("%d",&n);
    float regn[n-1];
    for(i =0; i<n; ++i){
        printf("Hvor mye regnet det %d dag\n", i+1);
        scanf("%f",&regn[i]);
        sum += regn[i];
        if(regn[i] >max){
            max = regn[i];}
        if(regn[i]< min){
            min = regn[i];}
        if(regn[i]<0){
            break;}
    }
    mean = sum/n;
    printf("Det regnet total %.2f mm de %d dagene. I gjennomsnitt regnet det %.2f mm\n", sum, n, mean);
    printf("på det meste regnet det %.2f mm og på det minste regnet det %.2f mm\n",max,min);
    return 0;
}