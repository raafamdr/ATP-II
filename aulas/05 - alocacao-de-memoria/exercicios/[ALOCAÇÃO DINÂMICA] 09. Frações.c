#include <stdio.h>
#include <stdlib.h>

typedef struct estrutura_fracao{
	int numerador;
	int denominador;
} Fracao;

Fracao *fracoesPositivas(int k, Fracao *f){
	Fracao *p;
    p = (Fracao *) malloc (k * sizeof(Fracao));
    
    int aux=0;
    
    for(int i=0; i<k; i++){
    	p[i].numerador = 0;
    	p[i].denominador = 0;
	}
    
    for(int i=0; i<k; i++){
   		if(((f[i].numerador >= 0) && (f[i].denominador >= 0)) || ((f[i].numerador <= 0) && (f[i].denominador <= 0))){
			p[aux].numerador = f[i].numerador;
   			p[aux].denominador = f[i].denominador;
   			aux++;
		}
	}
	
	p = realloc(p, aux * sizeof(Fracao));
	
    return p;
}

int main(){
	int k;
	scanf("%d", &k);
	Fracao f[k];
	
	for(int i=0; i<k; i++){
		scanf("%d", &f[i].numerador);
		scanf("%d", &f[i].denominador);
	}
	
	Fracao *resultado;
	resultado = fracoesPositivas(k, f);

	for(int i=0; i<k; i++){
		float divisao = (float) resultado[i].numerador/resultado[i].denominador;
		if( (resultado[i].denominador != 0) && (divisao >= 0) && (resultado[i].numerador <= 1000) && (resultado[i].denominador <= 1000) ){
			printf("%d/%d=%.2f\n", resultado[i].numerador, resultado[i].denominador, divisao);
		}
	}
	
	free(resultado);
}
