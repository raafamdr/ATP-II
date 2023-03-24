#include <stdio.h>

int strlength(char *str){
	//caso base
	if (*str == '\0')
		return 0;
	//passo recursivo
	else
		return 1 + strlength(str + 1);
}

int main(){
	char str[50];
	
	scanf(" %[^\n]%*c", str);
	 
	printf("%d", strlength(str));
}
