#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int *vetor;
	vetor = (int *) malloc (n * sizeof(int));
	
	for(int i=0; i<n; i++)
		scanf("%d", &vetor[i]);
	
	int *vetor_novo = (int *) malloc (sizeof(int) * vetor[0]);
	
	for(int i=0; i<vetor[0]; i++)
		*(vetor_novo + i) = vetor[0];
	
	int k=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<vetor[i]; j++, k++)
			*(vetor_novo + k) = vetor[i];
			
			if(i < n-1)
				vetor_novo = (int *) realloc(vetor_novo, sizeof(int) * (k + vetor[i+1]));
	}
	
	for(int i=0; i<k; i++)
		printf("%d ", vetor_novo[i]);
	
}
