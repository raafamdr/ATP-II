#include <stdio.h>

void removeDoVetor(int *vetor, int posicao_atual, int N) {
    while(posicao_atual < (N-1)) {
        *(vetor+posicao_atual) = *(vetor+posicao_atual+1);
        posicao_atual++;
    }
}

void sorteio(int N, int P, int *vetor){
    int pulos = P - 1;
    int posicao_atual = pulos;

    while(N > 1) {
        removeDoVetor(vetor, posicao_atual, N);
        posicao_atual += pulos;
        N--;
        int passou = posicao_atual - N;
        if(passou >= 0) {
            posicao_atual = passou % N;
        }
    }
}

int main() {
    int N, P, i;
    scanf("%d", &N);
    scanf("%d", &P);
    int vetor[N];

    for(i=0; i<N; i++)
        scanf("%d", &vetor[i]);

    sorteio(N, P, &vetor[0]);

    printf("%d", vetor[0]);
}
