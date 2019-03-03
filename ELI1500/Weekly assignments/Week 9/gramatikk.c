/*Setnings oppbygning = [substantiv, verb, preposisjon, substantiv] */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));
    char substantiv[8][15] = {"elgen","toget","Ola","Kari","mobiltelefonen","slangen","bilen","veggen"};
    char verb[10][11] = {"kjørte","sykla","dro","gikk","slo","vinka","datt","mediterte","trente","sov"};
    char preposisjon[6][9] = {"foran","bak","over","vedsiden","gjennom","under"};
    int s1=rand()%6,s2= rand()%6,v= rand()%9,p= rand()%5;
    printf("%s %s %s %s\n",substantiv[s1],verb[v],preposisjon[p],substantiv[s2]);
    //printf("%d %d %d %d\n",s1,v,p,s2);
    return 0;
}