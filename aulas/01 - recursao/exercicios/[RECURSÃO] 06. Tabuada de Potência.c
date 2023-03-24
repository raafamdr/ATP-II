#include <stdio.h>

//intervalo [0, 5]
void tabuada(int n, int count, int resultado){
	//caso base
	if(count > 5)
		return;
	
	printf("%d ^ %d = %d\n", n, count, resultado);
	
	//passo recursivo
	return tabuada(n, count+1, resultado * n);
}

int main(){
	int n;
	
	scanf("%d", &n);
	
	tabuada(n, 0, 1);
}
