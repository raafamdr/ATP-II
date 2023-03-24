#include <stdio.h>
#include <string.h>

char criptografia_rotacao(char originalChar, int rotacao) {
    char index = originalChar - 'a';
    char indexModificado = index + rotacao;
    char indexCriptografado = indexModificado % 26;
    return indexCriptografado + 'a';
}

void criptografia(char *originalStr, int rotacao) {
    unsigned long tamanho = strlen(originalStr);
    int i;
    for(i=0; i < tamanho; i++) {
        if(originalStr[i] == ' ') {
            continue;
        }
        originalStr[i] = criptografia_rotacao(originalStr[i], rotacao);
    }
}

int main(){
	char str[50];
	int rotacao;
	
	scanf("%d", &rotacao);
	scanf(" %[^\n]%*c", str);
	
	criptografia(str, rotacao);
	
	printf("%s", str);
}

