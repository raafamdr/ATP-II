#include <stdio.h>
void analisarFita(int *vetor, int N, int *Q){
    int i, aux=0;

    for(i=0; i<N; i++){
        if(vetor[i] == 1){
            aux=0;
        } else{
            aux++;
        }

        if(*Q < aux)
            *Q = aux;
    }
}

int main(){
    int N, i, Q=0;

    scanf("%d", &N);

    int vetor[N];

    for(i=0; i<N; i++)
        scanf("%d", &vetor[i]);

    analisarFita(vetor, N, &Q);

    printf("%d", Q);
}
