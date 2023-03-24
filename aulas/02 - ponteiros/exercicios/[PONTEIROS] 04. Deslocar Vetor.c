#include <stdio.h>
// *p: valor;
// p: endereço;

void desloca_vetor(int *p, int *q){
    if(p >= q){
        *q = 0;
        return;
    }

    *p = *(p+1);
    return desloca_vetor(p+1, q);
}

int main(){
    int n;

    scanf("%d", &n);

    int vetor[n], i;

    for(i=0; i<n; i++)
        scanf("%d", &vetor[i]);

//    int *p = &vetor[0];
//    int *q = &vetor[n-1];

    desloca_vetor(&vetor[0], &vetor[n-1]);

    for(i=0; i<n; i++)
        printf("%d ", vetor[i]);

}
