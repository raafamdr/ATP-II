#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int *vetor;
	vetor = (int *) malloc (n * sizeof(int));
	
	for(int i=0; i<n; i++)
		scanf("%d", &vetor[i]);
		
	vetor = realloc(vetor, n * sizeof(int) * 2);
	
	for(int i=0; i<2*n; i++)
		vetor[i+n] = vetor[i] * 2;	

	for(int i=0; i<2*n; i++)
		printf("%d ", vetor[i]);	
	
	free(vetor);
}
