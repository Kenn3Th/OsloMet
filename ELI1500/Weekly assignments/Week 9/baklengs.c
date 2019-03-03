/** This program reads in a string and returns it in reverse **/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char setning[50],bset[50];
    int len;
    printf("Skriv in en setnings så skal jeg vise deg noe morsomt!\n");
    fgets(setning,50,stdin);
    len = strlen(setning);
    for(int j=1, i=0;i<len;j++,i++)
        bset[i] = setning[len-j];
    printf("%s\n",bset);
    return 0;
}