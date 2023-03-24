#include <stdio.h>
#include <stdlib.h>

char *charToString(char c){
	char *str;
    str = (char *) malloc (sizeof(char));
    
    *str = c;
    *(str+1) = '\0';
    
    return str;
}

int main(){
	char c;
	scanf("%c", &c);
	
	char *resultado;
	resultado = charToString(c);
	
	printf("%s", resultado);
	free(resultado);
}
