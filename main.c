#include <stdio.h>
#include <stdlib.h>

#define tamanho 5 

void corPratos(int valor){
	if(valor == 1){
		printf("Prato Vermelho\n");
	}else if(valor == 2){
		printf("Prato Verde\n");
	}else if(valor == 3){
		printf("Prato Azul\n");
	}else if(valor == 4){
		printf("Prato Branco\n");
	}else if(valor == 5){
		printf("Prato Laranja\n");
	}
} 

typedef struct tipo_pilha1{
	int dados[tamanho];
	int ini;
	int topo;
}tipo_pilha1;

tipo_pilha1 pilha1;

typedef struct tipo_pilha2{
	int dados[tamanho];
	int ini;
	int topo;
}tipo_pilha2;

tipo_pilha2 pilha2;

void empilha1(int elemento){

	if(pilha1.topo == tamanho){
		printf("Pilha 1 cheia.\n");
		system("pause");
	}
	else
	{
		pilha1.dados[pilha1.topo] = elemento;
		pilha1.topo++;
	}
}

void empilha2(int elemento){

	if(pilha2.topo == tamanho){
		printf("Pilha 2 cheia.\n");
		system("pause");
	}
	else
	{
		pilha2.dados[pilha2.topo] = elemento;
		pilha2.topo++;
	}
}

int desempilha1(){

	int elemento;
	
	if(pilha1.topo == pilha1.ini){		
		printf("Pilha 1 vazia.\n");
		system("pause");
	}
	else
	{
		pilha1.topo--;
		elemento = pilha1.dados[pilha1.topo];
		return elemento;
	}
}

int main(int argc, char *argv[]) {
	
	pilha1.topo = 0;
	pilha1.ini = 0;
	int prato = 0;
	
	printf("Pilha 1\n\n");
	
	while(prato != 5){
		empilha1(prato);
		corPratos(pilha1.topo);
		prato++;
	}
		
	printf("\n\nPilha 2\n\n");
	
	while(prato != 0){
		empilha2(prato);
		corPratos(pilha1.topo);
		desempilha1();
		prato--;
	}

	return 0;
}