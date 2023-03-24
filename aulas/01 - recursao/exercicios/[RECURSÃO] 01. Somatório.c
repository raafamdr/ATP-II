#include <stdio.h>

int somatorio(int n){
	//caso base
	if (n == 1)
		return 1;
	
	//passo recursivo
	return n + somatorio(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", somatorio(n));
}

