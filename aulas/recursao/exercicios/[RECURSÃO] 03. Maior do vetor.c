#include <stdio.h>

int maior_vetor(int tamanho_vetor, int vetor[]){
	int i;
	//caso base
	if(vetor[i] > maior)
		return 0;
	
	//passo recursivo
	return maior_vetor();
}

int main(){
	int tamanho_vetor;
	scanf("%d", &tamanho_vetor);
	
	int vetor[tamanho_vetor];
	
	for(int i=0; i<tamanho_vetor; i++)
		scanf("%d", &vetor[i]);
		
	for(int i=0; i<tamanho_vetor; i++)
		printf("%d ", vetor[i]);
}

