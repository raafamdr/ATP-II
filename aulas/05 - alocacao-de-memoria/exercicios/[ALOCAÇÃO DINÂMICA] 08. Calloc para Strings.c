#include <stdio.h>
#include <stdlib.h>

char *strcalloc(int l, char c){
	char *str;
    str = (char *) malloc (l * sizeof(char));
    
    for(int i=0; i<l; i++)
    	str[i] = c;
    
    str[l] = '\0';
    return str;
}

int main(){
	int l;
	char c;
	
	scanf("%d", &l);
	scanf(" %c", &c);
	
	char *resultado;
	resultado = strcalloc(l, c);
	
	printf("%s", resultado);
	
	free(resultado);
}
