#include <stdio.h>

int main(){
    int a,b,AND,OR,XOR;
    printf("Her skal jeg teste ut de logiske operasjonene\n");
    printf("AND, OR and XOR, på to tall, skriv in to tall jeg skal prøve det på\n");
    scanf("%d %d",&a,&b);
    AND = a&b; OR = a|b; XOR = a^b;
    printf("A AND B = %d, A OR B = %d og A XOR B = %d\n",AND,OR,XOR);
    
    return 0;
}
