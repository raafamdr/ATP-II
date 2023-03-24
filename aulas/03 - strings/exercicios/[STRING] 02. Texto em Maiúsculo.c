#include <stdio.h>

void str_upper(char *str){
	//caso base
	if (*str == '\0')
		return;
	//passo recursivo
	else if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;

	return str_upper(str + 1);
}

int main(){
	char str[50];
		
	scanf(" %[^\n]%*c", str);
	 
	str_upper(str);
	
	printf("%s", str);
}
