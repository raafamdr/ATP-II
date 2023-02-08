/***********************************************************
 * Projeto 1 - Processamento de Imagens usando arquivos PGM
 * Docente: Denis Henrique Pinheiro Salvadeo
 * Data: 2021-02-17
 *	Implementação: Rafael Garcia B. M. del Rio
***********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct imagem_pgm{
	char tipo[3];
	int colunas;
	int linhas;
	int tons_cinza;
	int *matriz;
} imagem_pgm;

FILE *abrirArquivo(char *filename, char *mode){
	FILE * file = fopen(filename, mode);
	
	if(file == NULL){
		printf("Não foi possível abrir o arquivo!");
		exit(0);
	}

	return file;
}

FILE *lerArquivo(char *filename){
	return abrirArquivo(filename, "r");
}

FILE *escreverArquivo(char *filename){
	return abrirArquivo(filename, "w");
}

FILE *imageHeader(FILE *file, imagem_pgm pgm){
	fprintf(file, "%s\n", pgm.tipo);
  	fprintf(file, "%d %d\n", pgm.colunas, pgm.linhas);
  	fprintf(file, "%d\n", pgm.tons_cinza);
  	
  	return file;
}

int limiarizarImagem(int limiar, imagem_pgm pgm){
	FILE * file = escreverArquivo("limiar.pgm");
	
	imageHeader(file, pgm);
  	for(int i=0; i<pgm.linhas; i++){
		for(int j=0; j<pgm.colunas; j++){
			if(pgm.matriz[i*pgm.colunas+j] > limiar)
				fprintf(file, "%d ", 255);
			else
				fprintf(file, "%d ", 0);
		}
		fprintf(file, "\n");
	}

	fclose(file);
}

int negativeImage(imagem_pgm pgm){
	FILE * file = escreverArquivo("negativo.pgm");
	
	imageHeader(file, pgm);
  	for(int i=0; i<pgm.linhas; i++){
		for(int j=0; j<pgm.colunas; j++){
			fprintf(file, "%d ", 255-pgm.matriz[i*pgm.colunas+j]);
		}
		fprintf(file, "\n");
	}
	
	fclose(file);
}

int gerarHistograma(imagem_pgm pgm){
	FILE * file = escreverArquivo("histograma.txt");

	int vetor_histograma[pgm.tons_cinza+1], aux;
	
	for(int i=0; i<pgm.tons_cinza+1; i++)
		vetor_histograma[i] = 0;

  	for(int i=0; i<pgm.linhas; i++){
		for(int j=0; j<pgm.colunas; j++){
			aux = pgm.matriz[i*pgm.colunas+j];
			vetor_histograma[aux]+=1;
		}
	}
	
	for(int i=0; i<pgm.tons_cinza+1; i++)
		fprintf(file, "%d: %d\n", i, vetor_histograma[i]);
	
	fclose(file);
}

imagem_pgm informacoesArquivo(FILE *file){
	imagem_pgm pgm;
	
	fscanf(file, "%s", pgm.tipo);
	fscanf(file, "%d %d", &pgm.colunas, &pgm.linhas);
	fscanf(file, "%d", &pgm.tons_cinza);
	pgm.matriz = (int *) malloc(pgm.linhas * pgm.colunas * sizeof(int));
	for(int i=0; i<pgm.linhas; i++){
		for(int j=0; j<pgm.colunas; j++){
			fscanf(file, "%d", (pgm.matriz + i * pgm.colunas + j));
		}
	}
	
	return pgm;
}

int main(){
	FILE *fp = lerArquivo("totem_out.pgm");
	imagem_pgm pgm = informacoesArquivo(fp);

	int limiar = 150;
	limiarizarImagem(limiar, pgm);
	negativeImage(pgm);
	gerarHistograma(pgm);
	
	fclose(fp);
}
