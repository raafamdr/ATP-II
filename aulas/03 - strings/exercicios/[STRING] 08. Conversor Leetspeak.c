#include <stdio.h>

void leetConverter(char *str){
	//caso base
	if(*str == '\0')
		return;
	else if(*str == '4'){
		*str = 'A';
		return leetConverter(str + 1);
	}
	else if(*str == '8'){
		*str = 'B';
		return leetConverter(str + 1);
	}
	else if(*str == 'c'){
		*str = 'C';
		return leetConverter(str + 1);
	}
	else if(*str == 'd'){
		*str = 'D';
		return leetConverter(str + 1);
	}
	else if(*str == '3'){
		*str = 'E';
		return leetConverter(str + 1);
	}
	else if(*str == 'f'){
		*str = 'F';
		return leetConverter(str + 1);
	}
	else if(*str == '9'){
		*str = 'G';
		return leetConverter(str + 1);
	}
	else if(*str == '#'){
		*str = 'H';
		return leetConverter(str + 1);
	}
	else if(*str == '1'){
		*str = 'I';
		return leetConverter(str + 1);
	}
	else if(*str == 'j'){
		*str = 'J';
		return leetConverter(str + 1);
	}
	else if(*str == 'k'){
		*str = 'K';
		return leetConverter(str + 1);
	}
	else if(*str == '/'){
		*str = 'L';
		return leetConverter(str + 1);
	}
	else if(*str == 'm'){
		*str = 'M';
		return leetConverter(str + 1);
	}
	else if(*str == 'n'){
		*str = 'N';
		return leetConverter(str + 1);
	}
	else if(*str == '0'){
		*str = 'O';
		return leetConverter(str + 1);
	}
	else if(*str == '?'){
		*str = 'P';
		return leetConverter(str + 1);
	}
	else if(*str == 'q'){
		*str = 'Q';
		return leetConverter(str + 1);
	}
	else if(*str == 'r'){
		*str = 'R';
		return leetConverter(str + 1);
	}
	else if(*str == '5'){
		*str = 'S';
		return leetConverter(str + 1);
	}
	else if(*str == '7'){
		*str = 'T';
		return leetConverter(str + 1);
	}
	else if(*str == 'u'){
		*str = 'U';
		return leetConverter(str + 1);
	}
	else if(*str == 'v'){
		*str = 'V';
		return leetConverter(str + 1);
	}
	else if(*str == 'w'){
		*str = 'W';
		return leetConverter(str + 1);
	}
	else if(*str == 'x'){
		*str = 'X';
		return leetConverter(str + 1);
	}
	else if(*str == 'y'){
		*str = 'Y';
		return leetConverter(str + 1);
	}
	else if(*str == '2'){
		*str = 'Z';
		return leetConverter(str + 1);
	}
	else
		return leetConverter(str+1);
}

int main(){
	char str[50];
	
	scanf(" %[^\n]%*c", str);
	
	leetConverter(str);
	
	printf("%s", str);
}
