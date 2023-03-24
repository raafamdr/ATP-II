#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str_inicio, char *str_fim) {
    while(str_inicio < str_fim) {
        if(str_inicio[0] != str_fim[0]) {
            return false;
        }
        str_inicio++;
        str_fim--;
        if(str_inicio[0] == ' ') {
            str_inicio++;
        }
        if(str_fim[0] == ' ') {
            str_fim--;
        }
    }
    return true;
}


int main(){
	char str[50];
	
	scanf(" %[^\n]%*c", str);
	 
	int tamanho = strlen(str); 
	
	if(isPalindrome(str, &str[tamanho-1]))
		printf("S");
	else 
		printf("N");
	
}
