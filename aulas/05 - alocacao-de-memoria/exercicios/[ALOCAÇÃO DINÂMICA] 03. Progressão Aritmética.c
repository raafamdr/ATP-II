#include <stdio.h>
#include <stdlib.h>

int *elementos_PA(int n, int r, int a1){
	int *vetor;
    vetor = (int *) malloc (n * sizeof(int));
    vetor[0] = a1;
    
    for(int i=1; i<n; i++){
    	vetor[i] = vetor[i-1] + r;
	}
    
    return vetor;
}	

int main(){
	int n, r, a1;
	
	scanf("%d %d %d", &n, &r, &a1);
	
	int *resultado;
	resultado = elementos_PA(n, r, a1);
	
	for(int i=0; i<n; i++)
		printf("%d ", resultado[i]);
	
	free(resultado);
}
