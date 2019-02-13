#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float *arr;
double *min_stor();
int n;

int main(){
    float max, min;
    double *m_s;
    printf("Jeg kan finne det største og minste tallet i en liste/array\nDu må bare gi meg en liste \n");
    printf("Hvor stor er lista?\n");
    scanf("%d",&n);
    float *arr = (float*)malloc(n*sizeof(float));
    for(int i=0; i<n;i++){
        printf("Hva er %d verdi?\n",i);
        scanf("%f",&arr[i]);
    }
    m_s = min_stor();
    printf("Den største verdien er %.2f, og den minste verdien er %.2f\n",m_s[1], m_s[0]);
    return 0;
}

double *min_stor(){
    double min_max[2];
    min_max[0] = arr[0]; min_max[1]=arr[0];
    for(int i=0; i<n; i++){
        if(min_max[0]<arr[i])
            min_max[0]=arr[i];
        if(min_max[1]>arr[i])
            min_max[1]=arr[i];
    }
    return min_max;
}