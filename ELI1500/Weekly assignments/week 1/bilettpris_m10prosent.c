#include <stdio.h>
#include <math.h>

int barne_bilett = 100;
int voksen_bilett = 180;
int voksen;
int barn;
void bilett_pris(int voksen, int barn);

int main(){
    printf("Hvor mange voksne og hvor mange barn skal inn i fornøyesesparken?\n");
    scanf("%d %d",&voksen, &barn);
    bilett_pris(voksen,barn);
    
    return 0;    
}

void bilett_pris(int voksen, int barn){
    if (voksen + barn < 10){
        int pris;
        pris = voksen*voksen_bilett + barn*barne_bilett;
        printf("For %d voksen og %d barn blir prisen %d\n",voksen,barn,pris);
    }
    else{
        float pris;
        pris = (voksen*voksen_bilett + barn*barne_bilett)*0.9;
        printf("For %d voksen og %d barn blir prisen %.2f\n",voksen,barn,pris);
    }
    
}