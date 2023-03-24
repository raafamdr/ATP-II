#include <stdio.h>
#include <string.h>

int comecaCom(char *str, char *substr) {
    unsigned long substrLen = strlen(substr);
    char substrAtual[substrLen + 1];
    substrAtual[substrLen] = '\0';
    
    memcpy(substrAtual, str, substrLen);
    
    return strcmp(substrAtual, substr) == 0;
}

int main(){
    char silaba[50];
    char matrizSugestoes[50][50];
    int numeroDeSugestoes, i;
    
    scanf("%s", silaba);
    scanf("%d", &numeroDeSugestoes);
    
    for(i = 0; i < numeroDeSugestoes; i++)
        scanf(" %[^\n]%*c", matrizSugestoes[i]);

    for(i = 0; i < numeroDeSugestoes; i++) {
        if(comecaCom(matrizSugestoes[i], silaba)) {
            printf("%s\n", matrizSugestoes[i]);
        }
    }
}
