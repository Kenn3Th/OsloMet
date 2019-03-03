#include <stdio.h>
#include <unistd.h>
void sortering(int *xpeker, int *ypeker, int *zpeker);

int main(){
    int x,y,z;
    printf("Gi meg tre heltall å sortere!\n");
    scanf("%d %d %d",&x,&y,&z);
    sortering(&x,&y,&z);
    sleep(1);
    printf("chicka lacka chicka lacka\t bom bo0om!!\n");
    sleep(1);
    printf("... ...\t");
    sleep(2);
    printf("...\n");
    sleep(1);
    printf("%3d %3d %3d\n",x,y,z);
    return 0;
}

void sortering(int *xpeker, int *ypeker, int *zpeker){
    int xplass,yplass,zplass;
    for(int i=0; i<3;i++){
        if(*xpeker>*ypeker){
            xplass = *xpeker;
            *xpeker = *ypeker;
            *ypeker = xplass;
        }
        if(*ypeker>*zpeker){
            yplass = *ypeker;
            *ypeker = *zpeker;
            *zpeker = yplass;
        }
    }
}