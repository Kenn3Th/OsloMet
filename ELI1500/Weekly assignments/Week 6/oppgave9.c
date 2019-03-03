#include <stdio.h>

void funksjon1(int xverdi)
{
    int x;
    x = xverdi;

    //skriv ut adressen til x og verdien til x
    printf("Adressen til x er %p og verdien er %d\n",&x,x);
}

void funksjon2(int dummy)
{
    int y;

    //skriv ut adressen til y og verdien til y
    printf("Adressen til y er %p og verdien er %d\n",&y,y);
}

int main()
{
    funksjon1(7);
    funksjon2(11);
    return 0;
}