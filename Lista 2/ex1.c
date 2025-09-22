#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int matriz[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[3][3];
    srand(time(NULL));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matriz[i][j] = (rand()%(10))+1;
            }
        }
        imprimir(matriz);

    return 0;
}
