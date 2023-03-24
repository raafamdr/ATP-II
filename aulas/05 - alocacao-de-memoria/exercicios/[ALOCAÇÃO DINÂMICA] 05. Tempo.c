#include <stdio.h>
#include <stdlib.h>

typedef struct tempo{
	int horas;
	int minutos;
	int segundos;
} Time;

Time *time_conversor(int s){
	Time *conversao;
    conversao = (Time *) malloc (sizeof(Time));
    
    conversao->horas = s/3600;
    conversao->minutos = (s -(3600*conversao->horas))/60;
    conversao->segundos = (s -(3600*conversao->horas)-(conversao->minutos*60));
	
	return conversao; 
}

int main(){
	int s;
	scanf("%d", &s);
	
	Time *resultado;
	resultado = time_conversor(s);
	
	printf("H: %d\n", resultado->horas);
	printf("M: %d\n", resultado->minutos);
	printf("S: %d", resultado->segundos);
	
	free(resultado);
	
}
