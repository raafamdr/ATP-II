#include <stdio.h>
//Faça uma função recursiva que receba N e M, e multiplique M vezes o valor de N por ele mesmo (recursivamente).
int potencia(int n, int m){
	//caso base
	if(m == 0)
		return 1;
	
	//passo recursivo
	return n * potencia(n, m-1);
}

int main(){
	int n, m;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	printf("%d", potencia(n, m));
}
