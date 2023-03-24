#include <stdio.h>
int conta_digitos(int n, int m){
	int count = 0;
	//caso base
	if(n == 0)
		return count;
	
	//passo recursivo
	if(n % 10 == m){
		count += 1;
		return count + conta_digitos(n/10, m);
	}

	return conta_digitos(n/10, m);
}

int main(){
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	printf("%d", conta_digitos(n, m));
}
