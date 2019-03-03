/** This program removes spaces in a tekst string **/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rmspace(char str[],char setm[], int len);
void test(char str[], int len);

int main(){
    char set[50],setum[50];
    int len;
    printf("Dette programmet manipulerer en tekst string\n");
    printf("Skriv in en tekst som jeg skal manipulere\n");
    fgets(set,50,stdin);
    len = strlen(set)-1;
    rmspace(set,setum,len);
    printf("%s\n",setum);
    //test(set,len);
    return 0;
}


void rmspace(char str[],char setm[], int len){
    for(int i=0,j=0; i<len; i++){
        if(isgraph(str[i])){
            setm[j] = str[i];
            j++;
        }
    }
}

/*
void test(char str[],int len){
    char setm[len];
    for(int i=0,j=0; i<len; i++,j++){
        if(isspace(str[i])==1){
            setm[j] = str[i+1];
            i++; }
        else
            setm[j] = str[i];
    }
    printf("%s\n",setm);
}*/