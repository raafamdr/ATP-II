#include <stdio.h>
#include <string.h>

char lowerCase(char c) {
    if(c>='A' && c<='Z') {
        return c + 'a' - 'A';
    }
    return c;
}

void filter(char *str, char c) {
    if(str[0] == '\0') {
        return;
    }
    if(lowerCase(str[0]) == lowerCase(c)) {
        memmove(str, str+1, strlen(str));
        filter(str, c);
    } else {
        filter(str+1, c);
    }
}

int main(){
	char str[50];
	char c;
	
	scanf(" %c", &c);
	scanf(" %[^\n]%*c", str);
	
	filter(str, c);
	
	printf("%s", str);
}
