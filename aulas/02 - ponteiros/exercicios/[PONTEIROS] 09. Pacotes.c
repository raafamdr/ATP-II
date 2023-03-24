#include <stdio.h>

typedef struct estrutura_pacote{
	int idade;
	float peso;
    float (*calcular_frete)(struct estrutura_pacote);
}Pacote;

float Pegasus(Pacote pacote) {
    return pacote.peso * 8;
}

float AgileLog(Pacote pacote) {
    return pacote.peso * 5 + 10;
}

float QuantumTeletransportes(Pacote pacote) {
    if (pacote.idade == 10){
        return 0;
    }
    return pacote.peso * 6.7 + 5;
}

int main(){
    int N, i, empresa_frete;
    float frete;
    float (*calculadores_de_frete[3])(Pacote pacote) = {Pegasus, AgileLog, QuantumTeletransportes};

    scanf("%d", &N);
    Pacote meu_pacote[N];

    for(i=0; i<N; i++){
        frete=0;
        scanf("%d", &meu_pacote[i].idade);
        scanf("%f", &meu_pacote[i].peso);
        scanf("%d", &empresa_frete);
        meu_pacote[i].calcular_frete = calculadores_de_frete[empresa_frete-1];

        frete = meu_pacote[i].calcular_frete(meu_pacote[i]);

        printf("%.2f\n", frete);
    }
}
