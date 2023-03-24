#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n){  
    if (n <= 1)
		return 0;  
    if (n <= 3)
		return 1;  
    
    if (n % 2== 0 || n % 3 == 0) 
		return 0;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n % i == 0 || n % (i+2) == 0)  
           return 0;  
    
    return 1;  
}  
  
int *nextPrime(int n){
    int encontrou = 0;
    
    int *h;
    h = (int *) malloc (sizeof(int));
  
    while (!encontrou){ 
        n++; 
  
        if (isPrime(n)){
        	encontrou = 1;
        	*h = n;
		}
            
    }
	
    return h;
}

int main(){
	int n;
	scanf("%d", &n);
	
	int *resultado;
	resultado = nextPrime(n);
	
	printf("%d", *resultado);
	
	free(resultado);
	
	return 0;
}
