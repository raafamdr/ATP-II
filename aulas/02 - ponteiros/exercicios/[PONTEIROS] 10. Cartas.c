#include <stdio.h>
// *p: valor;
// p: endereço;
void verifica_cartas(int *carta){
    if((*carta == *(carta+1)) && (*(carta+2) != 0)){ //compara a primeira e a segunda carta e se a terceira carta é nula
        *(carta+3) = *(carta+2);
    } else if((*carta == *(carta+1)) && (*(carta+3) != 0)){ //compara a primeira e a segunda carta e se a quarta carta é nula
        *(carta+2) = *(carta+3);
    } else if((*carta == *(carta+2)) && (*(carta+1) != 0)){ //compara a primeira e a terceira carta e se a segunda carta é nula
        *(carta+3) = *(carta+1);
    } else if((*carta == *(carta+2)) && (*(carta+3) != 0)){ //compara a primeira e a terceira carta e se a quarta carta é nula
        *(carta+1) = *(carta+3);
    } else if((*(carta+1) == *(carta+2)) && (*carta != 0)){ //compara a segunda e a terceira carta e se a primeira carta é nula
        *(carta+3) = *carta;
    } else if((*(carta+1) == *(carta+2)) && (*(carta+3) != 0)){ //compara a segunda e a terceira carta e se a quarta carta é nula
        *carta = *(carta+3);
    } else if((*carta == *(carta+3)) && (*(carta+1) != 0)){ //compara a primeira e a quarta carta e se a segunda carta é nula
        *(carta+2) = *(carta+1);
    } else if((*carta == *(carta+3)) && (*(carta+2) != 0)){ //compara a primeira e a quarta carta e se a terceira carta é nula
        *(carta+1) = *(carta+2);
    } else if((*(carta+1) == *(carta+3)) && (*carta != 0)){ //compara a segunda e a quarta carta e se a primeira carta é nula
        *(carta+2) = *carta;
    } else if((*(carta+1) == *(carta+3)) && (*(carta+2) != 0)){ //compara a segunda e a quarta carta e se a terceira carta é nula
        *carta = *(carta+2);
    }
}

int main(){
    int vetor_cartas[4], i;

    for(i=0; i<4; i++)
        scanf("%d", &vetor_cartas[i]);

    verifica_cartas(&vetor_cartas[0]);

    for(i=0; i<4; i++)
        printf("%d ", vetor_cartas[i]);
}
