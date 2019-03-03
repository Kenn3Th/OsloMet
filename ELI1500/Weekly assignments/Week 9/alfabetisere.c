/**This code takes a string, removes the spaces and alfabetizes it**/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h> /*includes sleep*/
#define Len 50

void alfabetize(char str[], int len);
void rmspace(char str[], char ustr[], int len);

int main(){
    char set[Len], set_uten_space[Len];
    int len, len1;
    printf("Tror du jeg klarer å alfabetisere en hvilken som helst setning?\n");
    sleep(2);                           //Sleeps for 2 seconds
    printf("Try me BITCH!!\n");
    fgets(set,Len,stdin);
    len = strlen(set)-1;                //Length of original string
    rmspace(set,set_uten_space,len);    //Removes spaces
    len1 = strlen(set_uten_space)-1;    //Length of string without spaces
    printf("%s\n",set_uten_space);
    alfabetize(set_uten_space,len1);    //Alfabetizing the string.
    printf("%s\n",set_uten_space);
    return 0;
}
//Removes spaces in the string
void rmspace(char str[], char ustr[], int len){
    for(int i=0,j=0; i<len; i++){
        if(isgraph(str[i])){
            ustr[j] = str[i];
            j++;
        }
    }
}
//Alfabetizing the string
void alfabetize(char str[], int len){
    int flag = 1;
    char lagring;
    while(flag !=0){
        for(int i=0;i<len;i++){
            for(int j=0; j<len;j++){
                if(str[j]>str[j+1]){
                    lagring = str[j];
                    str[j] = str[j+1];
                    str[j+1] = lagring;
                }
            }
        }
        if(str[0]<=str[1] && str[len]>=str[len-1] && str[0] != str[len])
            flag = 0;
    }
}