#include <stdio.h>

int contarVogais(char *str){
	//caso base
	if (*str == '\0')
		return 0;
	//passo recursivo
	else if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
		return 1 + contarVogais(str + 1);
	else if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
		return 1 + contarVogais(str + 1);
	else 
		return contarVogais(str + 1);
}


int main(){
	char str[50];
	
	scanf(" %[^\n]%*c", str);
	 
	printf("%d", contarVogais(str));
}
