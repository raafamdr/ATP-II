#include <stdio.h>

int tetranacci(int n) {
	//casos base
	if (n ==0 || n == 1 || n == 2 || n == 3)
		return 0;
	if (n == 4)
		return 1;
	
	//passo recursivo
	//Fn = F(n-1) + F(n-2) + F(n-3) + F(n-4)
	return tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
}

int main(){
	int n;
	scanf("%d", &n);
	
	printf("%d", tetranacci(n));
}
