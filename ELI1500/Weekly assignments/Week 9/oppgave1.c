#include <stdio.h>
#include <ctype.h>
char *strlwr(char *str);
char *strupr(char *str);

int main(){
    char navn[80];
    printf("Kan du gjøre en James Bond etter ligning?\n");
    fgets(navn,80,stdin);
    printf("%s\n",navn);
    printf("%s\n",strupr(navn));
    printf("%s\n",strlwr(navn));
    return 0;
}

char *strlwr(char *str){
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}
char *strupr(char *str){
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper((unsigned char)*p);
      p++;
  }

  return str;
}