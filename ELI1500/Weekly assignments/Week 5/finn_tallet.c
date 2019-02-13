/*array = matrise = n x m , der n er kolonner og m er rader*/

#include <stdio.h>

int main(){
    int n=3,m=3;
    int arr[n][m]={{1,2,3}{3,2,5}{1,4,4}};
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            if (arr[i][j]&arr[j][i])|(arr[j][j]&arr[i][i]);
                continue;
            else printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}