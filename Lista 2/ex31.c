#include<stdio.h>
#include<math.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

int Vandermonde(int matriz[][NUM_COLUNA]){

    int eh_vandermonde=1;

    for(int i=0;i<NUM_LINHA;i++){
        if(matriz[i][0]!=1){
            eh_vandermonde=0;

        }
    }

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=1;j<NUM_COLUNA-1;j++){
                if(matriz[i][j]!=sqrt(matriz[i][j+1])){
                    eh_vandermonde=0;

                }
            }
        }

        return eh_vandermonde;
}


int main(){

    int matriz[NUM_LINHA][NUM_COLUNA]=
    {{1,2,4},
     {1,3,9},
     {1,5,25}} ;

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int eh_vandermonde = Vandermonde(matriz);

    if(eh_vandermonde){
        printf("\nEssa matriz eh vandermonde!");
    }else{
        printf("\nNao eh vandermonde!");
    }

    return 0;
}
