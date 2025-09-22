#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[3][2],i,j;
    int transposta[2][3];

        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                matriz[i][j] = (rand()%(10))+1;
            }
        }
        printf("\nMatriz normal:\n");

         for(i=0;i<3;i++){
            for(j=0;j<2;j++){
               printf("%d ",matriz[i][j]);
            }
            printf("\n");
        }

    for(j=0;j<2;j++){
        for(i=0;i<3;i++){
           transposta[i][j] =matriz[i][j] ;
        }
    }
            printf("\nMatriz Transposta:\n");
        for(j=0;j<2;j++){
            for(i=0;i<3;i++){
               printf("%d ",transposta[i][j]);
            }
            printf("\n");
        }

    return 0;
}
