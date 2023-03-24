#include <stdio.h>
#include <stdlib.h>
int *somar_matrizes(int n, int a[n][n], int b[n][n]){
	int *matriz_soma;
	matriz_soma = (int *) malloc(n * n * sizeof(int));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			matriz_soma[i*n+j] = a[i][j] + b[i][j];
		}
	}
	
	return matriz_soma;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n], b[n][n];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}	
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &b[i][j]);
		}	
	}
	
	int *resultado;
	resultado = somar_matrizes(n, a, b);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", resultado[i*n+j]);
		}
		printf("\n");
	}
	
	free(resultado);
}
