#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct estrutura_participantes{
    char nome[30];
    int numero_chutado;
} Participante;

void definirVencedor(Participante *participantes, int N, int S, Participante *vencedor) {
    int i;
    int proximidade = INT_MAX;
    for(i=0; i<N; i++){
        int numero_atual = (*(participantes+i)).numero_chutado;

        int proximidade_atual = abs(S - numero_atual);

        if(proximidade_atual <= proximidade) {
            proximidade = proximidade_atual;
            *vencedor = *(participantes+i);
        }

    }
}
int main(){
    int S, N, i;

    scanf("%d", &S);
    scanf("%d", &N);

    Participante vetor_participantes[N];
    Participante vencedor;

    for(i=0; i<N; i++){
        scanf(" %[^\n]%*c", vetor_participantes[i].nome);
        scanf("%d", &vetor_participantes[i].numero_chutado);
    }

    definirVencedor(vetor_participantes, N, S, &vencedor);
    printf("%s", vencedor.nome);
}
