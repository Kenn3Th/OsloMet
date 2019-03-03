#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char set[50],rset[75];
    int len;
    printf("Jeg kan oversette en setning til røverspråk!\nSkriv en setning jeg skal oversette\n");
    fgets(set,50,stdin);
    len = strlen(set)-1;
    for(int i=0,j=0; i<len;i++,j++){
        printf("%d %d\n",i,j);
        if(set[i]=='a' || set[i]=='e' || set[i]=='i' || set[i]=='o' || set[i]=='u' || 
           set[i]=='y' || set[i]==' ')
            rset[j]=set[i];
        else{
            rset[j]=set[i];
            rset[j+1] = 'o';
            rset[j+2] = set[i];
            j+=2; 
        }
    }
    printf("%s\n",rset);
    printf("%s\n",set);
    return 0;
}