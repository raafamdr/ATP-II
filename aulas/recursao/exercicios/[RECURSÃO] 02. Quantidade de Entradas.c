#include <stdio.h>

int entradas(void){
	int n;
	scanf("%d", &n);
	
	//caso base
	if(n == 0)
		return 0;
	
	//passo recursivo
	return 1 + entradas();
}

int main(){
	printf("%d", entradas());
}

