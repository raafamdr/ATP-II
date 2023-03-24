#include <stdio.h>

int countwords(char *str){
	//caso base
	if (*str == '\0')
		return 0;
	//passo recursivo
	else if(*str == ' ')
		return 1 + countwords(str + 1);
	else
		return countwords(str + 1);
}

int main(){
	char str[50];
	
	scanf(" %[^\n]%*c", str);
	 
	printf("%d", 1 + countwords(str));
}

//int countwords(char *str){
//	int ENCONTROU_ESPACO = 0; 
//	
//	int palavras = 0;
//	
//	while(*str){
//		if(*str == ' ')
//			ENCONTROU_ESPACO = 1;

//		else if(ENCONTROU_ESPACO){
//			ENCONTROU_ESPACO = 0;
//			++palavras;
//		}
//
//		++str;
//		
//	}
//	
//	return palavras;
//}
