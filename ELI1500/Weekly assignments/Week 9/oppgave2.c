/** This program reads in 2 tekst strings from the cmd window and check 
which string that comes first in the alfabet and wich string that is the longest **/

#include <stdio.h>
#include <string.h>

void set_før_alf(char set1[], char set2[]);
void set_lengst(char set1[], char set2[]);
int main(){
    char s1[50], s2[50];
    printf("Dette programmet sammenligner to tekst strenger\nSkriv inn to tekst strenger jeg skal samenligne\n");
    printf("Begynn med den første strengen\n");
    fgets(s1,50,stdin);
    printf("Skriv inn neste streng\n");
    fgets(s2,50,stdin);
    set_før_alf(s1,s2);
    set_lengst(s1,s2);
    return 0;
}
void set_før_alf(char set1[], char set2[]){
    int res;
    res = strcmp(set1,set2);
    if(res<0)
        printf("Den første setningen kommer først i alfabetet\n\"%s\"\n",set1);
    else
        printf("Den andre setningen komer først i alfabetet\n\"%s\"\n",set2);
}
void set_lengst(char set1[], char set2[]){
    int lset1, lset2;
    lset1 = strlen(set1);
    lset2 = strlen(set2);
    if(lset1<lset2)
        printf("Den andre setningen er lengst\n\"%s\"\n",set2);
    else
        printf("Den første setningen er lengst\n\"%s\"\n",set1);
}