#include <stdio.h>
#include <math.h>

int i,j,N=100,count=0;
float h,c;

int main(){
    printf("Her er alle rettvinklede trekanter med heltall sider:\n");
    printf("     |  side1   side 2  hypotenus|\n");
    for(i=1;i<N;i++){
        for(j=1;j<i;j++){
            c = sqrt(i*i+j*j);
            h = i*i + j*j;
            if((c*c) == h && c ==(int)c && c<N){
                count++;
                printf("%2d   |  %3d     %3d       %3d    |\n",count,i,j,(int)c);
            }
        }
    }
    return 0;
}