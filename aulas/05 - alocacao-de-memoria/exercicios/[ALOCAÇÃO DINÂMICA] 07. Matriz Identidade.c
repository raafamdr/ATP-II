#include <stdio.h>
#include <stdlib.h>

int *matriz_identidade(int n){
	int *matriz;
	matriz = (int *) malloc(n * n * sizeof(int));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j)
				matriz[i*n+j] = 1;
			else 
				matriz[i*n+j] = 0;
		}
	}
	
	return matriz;
}

int main(){
	int n;
	scanf("%d", &n);
	
	int *resultado;
	resultado = matriz_identidade(n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", resultado[i*n+j]);
		}
		printf("\n");
	}
	
	free(resultado);
}
