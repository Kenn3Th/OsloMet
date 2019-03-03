/** This program checks if it is a palindrome **/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define Len 50

void baklengs(char str[], char bstr[], int len);
void rmspace(char str[], char ustr[], int len);
void palindrome(char str1[], char str2[], int len);

int main(){
    char set[Len],bset[Len],uten_space[Len],bset_uten_space[Len];
    int lengde,lengde2;
    printf("Dette programmet sjekker om en setning er et palindrom\n");
    printf("Skriv in en setning du tror er et palindrom\n");
    fgets(set,Len,stdin);
    lengde = strlen(set)-1;                         //Length of the string
    rmspace(set, uten_space, lengde);               //Removes the spaces from the string
    lengde2= strlen(uten_space)-1;                  //Length of the string without spaces
    baklengs(set, bset, lengde);                    //Reverse the string
    rmspace(bset,bset_uten_space, lengde);          //Removes spaces from the reverse string
    palindrome(uten_space,bset_uten_space,lengde2); //Checks if it is a palindrome
}
//Reverse the string
void baklengs(char str[], char bstr[], int len){
    for(int j=0,i=0; i<len; i++,j++)
        bstr[i] = str[len-j-1];        
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
//Checks if the string is a palindrome
void palindrome(char str1[], char str2[], int len){ 
    for(int i=0; i<len; i++){
        if(str1[i] != str2[i]){
            printf("Dette er ikke et palindrom!\n%s != %s\n",str1,str2);
            exit(1);
        }
    }
    printf("%s = %s\nSetningen er et palindrom!\n",str1,str2);
}