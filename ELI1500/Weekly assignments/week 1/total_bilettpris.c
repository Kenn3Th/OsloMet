#include <stdio.h>

int barne_bilett = 150;
int voksen_bilett = 210;
void Total_pris(int voksen, int barn);

int main(){
    int voksen;
    int barn;
    printf("Hvor mange voksne?\n");
    scanf("%d",&voksen);
    printf("Hvor mange barn?\n");
    scanf("%d",&barn);
    Total_pris(voksen, barn);
}

void Total_pris(int voksen, int barn){
    int total;
    total = voksen*voksen_bilett + barn*barne_bilett;
    if (voksen > 1){
        printf("Prisen for %d voksne og %d barn er %d ,-\n",voksen,barn,total);
    } else{
        printf("Prisen for %d voksen og %d barn er %d ,-\n",voksen,barn,total);
    }
}