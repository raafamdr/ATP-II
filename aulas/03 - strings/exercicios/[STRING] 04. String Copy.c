#include <stdio.h>

void strcopy(char *dest, char *src){
	
   while (*src != '\0') {
      *dest = *src;
	  dest++;
	  src++; 
   }
   
   *dest = '\0';

}

int main(){
	char str[50], str_new[50];
	
	scanf(" %[^\n]%*c", str);
	
	strcopy(str_new, str);
	
	printf("%s", str_new);
}
