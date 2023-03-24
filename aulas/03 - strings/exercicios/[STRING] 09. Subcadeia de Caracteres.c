#include <stdio.h>
#include <string.h>

int substring(char *str, char *substr) {
    unsigned long substrLen = strlen(substr);
    unsigned long strLen = strlen(str);
    
    char substrAtual[substrLen + 1];
    substrAtual[substrLen] = '\0';
    
    int i;
    
    for(i = 0; i < strLen; i++) {
        memcpy(substrAtual, str + i, substrLen);
        if(strcmp(substrAtual, substr) == 0) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    char str[100];
    char substr[100];
    
    scanf(" %[^\n]%*c", str);
    scanf(" %[^\n]%*c", substr);

    int encontrou = substring(str, substr);
    
    if(encontrou){
    	printf("S");
	} else printf("N");
}


