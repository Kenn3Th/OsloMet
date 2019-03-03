#include <stdio.h>

int main(){
    int x = 2, y = 5;
    int *z, *w;
    z = &x;
    w = &y;
    printf("Adressen til x er %d og verdien er %d\n",&x,x);
    printf("Adressen til y er %d og verdien er %d\n",&y,y);
    getchar();
    printf("Adressen til z er %d og verdien er %d\n",&z,z);
    printf("Adressen til w er %d og verdien er %d\n",&w,w);
    getchar();
    printf("Verdien z peker på er %d\n",*z);
    printf("Verdien w peker på er %d\n",*w);
    return 0;
}