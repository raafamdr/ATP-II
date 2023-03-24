#include <stdio.h>
#include <stdbool.h>

int capicua(int vetor[], int n){
	//casos base
	if(n == 1)
		return 1;
	
	if(vetor[0] != vetor[n-1])
		return 0;
		
	//caso recursivo
	return capicua(vetor + 1, n - 2);
}

int main(){
	int n;
	scanf("%d", &n);
	int vetor[n];
	
	for(int i=0; i<n; i++)
		scanf("%d", &vetor[i]);

    if (capicua(vetor, n))
        printf("S");
    else
        printf("N");
}
