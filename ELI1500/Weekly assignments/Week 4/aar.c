#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define aar 365

double max(double temp[], int lengde);
int sno(double temp[], double nedb[], int lengde);
int tropenetter(double temp[], int lengde);

int main(){
    srand((unsigned)time(NULL));
    double max_temp[aar];
    double min_temp[aar];
    double nedbor[aar];
    double maxt;
    int snoe,tpnatt;
    for(int i=0;i<aar;i++){
        max_temp[i] = (rand()%100-50)/10.0;
        nedbor[i] = (rand()%500)/10.0;
    }
    for(int i=0;i<aar;i++){
        double x;
        x = (rand()%1000-500)/10.0;
        if(x<max_temp[i])
            min_temp[i] = x;
        else 
            min_temp[i] = x -5;
    }
    maxt = max(max_temp,aar);
    tpnatt = tropenetter(max_temp,aar);
    snoe = sno(min_temp,nedbor,aar);
    printf("Maks temperaturen var %.2f, og det var %d tropenetter ila dette året\n",maxt,tpnatt);
    printf("Det snødde %d dager ila dette året\n",snoe);
    return 0;
}
double max(double temp[], int lengde){
    double maks = 0.0;
    for(int i;i<aar;i++){
        if(maks>temp[i])
            maks = temp[i];
    }
    return maks;
}
int tropenetter(double temp[], int lengde){
    int tnatt = 0;
    for(int i=0;i<aar;i++){
        if(temp[i]>20)
           tnatt +=1;
    }
    return tnatt;
}
int sno(double temp[], double nedb[], int lengde){
    int snodag = 0;
    for(int i; i<aar; i++){
        if(temp[i]<0 && nedb[i]>0)
            snodag+=1;
    }
    return snodag;
}