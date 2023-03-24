#include <stdio.h>

void verifySpaces(char *str, int i, int *countSpaces){	
	if(*(str+i) != ' '){
		*(str+(*countSpaces)) = *(str+i);
		*countSpaces = *countSpaces+1;
	}
	else if(*(str+i-1) != ' '){
		*(str+(*countSpaces)) = *(str+i);
		*countSpaces = *countSpaces+1;
	}
}

void removePLetter(char *str){
	int countSpaces=0;
	
	for(int i=0; *(str+i) != '\0'; i++){
		if(*(str+i) != 'p')
			verifySpaces(str, i, &countSpaces);
		else if(*(str+i-1) == 'p' && *(str+i+1) == 'p')
			verifySpaces(str, i, &countSpaces);	
		else if(*(str+i+1) == '\0')
			verifySpaces(str, i, &countSpaces);	
	}
	
	*(str+countSpaces) = '\0';
}

int main(){	
    char str[1000];
    scanf(" %[^\n]%*c", str);
	
	removePLetter(str);

	printf("%s", str);
}
