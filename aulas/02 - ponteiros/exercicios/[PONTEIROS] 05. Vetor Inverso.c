#include <stdio.h>

void vetor_inverso(int *p, int *u){
    int aux;

    if(p > u){
        return;
    }

    aux = *p;
    *p = *u;
    *u = aux;
    return vetor_inverso(p+1, u-1);

//    if(p < u){
//        aux = *p;
//        *p = *u;
//        *u = aux;
//        return vetor_inverso(p+1, u-1);
//    }
}

int main(){
    int n;

    scanf("%d", &n);

    int vetor[n], i;

    for(i=0; i<n; i++)
        scanf("%d", &vetor[i]);

    vetor_inverso(&vetor[0], &vetor[n-1]);

    for(i=0; i<n; i++)
        printf("%d ", vetor[i]);

}
