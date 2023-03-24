#include <stdio.h>
#include <stdbool.h>

int soma(int *rg, int contador){
    int R=0;

    if (contador > 9){
        return R;
    }

    R = *rg * contador;
    contador++;

    return R + soma(rg+1, contador);
}

bool validarRG(int *rg){
    int R, D, M, contador=2;

    R = soma(rg, contador);
    M = R % 11;

    D = 11 - M;

    return *(rg+8) == D;
}

int main(){

    int vetor[9], i;

    for(i=0; i<9; i++)
        scanf("%d", &vetor[i]);

    if (validarRG(&vetor[0]))
        printf("S");
    else
        printf("N");
}
