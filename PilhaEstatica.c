/*
*
* Computer Science Section
* Faculdades Doctum de Caratinga
* Caratinga, MG, Brazil
* Feb. 20, 2020
* author: Elias Goncalves
* email: falarcomelias@gmail.com
* Licensed under the Apache License, Version 2.0
*
*/

#include "PilhaEstatica.h"


// Estrutura da pilha
struct pilha_estatica{
	int dado[MAX];
	int topo;
};


// Implementações das operações da pilha
Pilha *create( ){   // Criar pilha
	
	Pilha *pilha = ( Pilha* ) calloc( 1, sizeof(Pilha) );
	pilha->topo = EMPTY;
	printf( "Pilha criada com sucesso...\n" );

	return pilha;
}

int top( Pilha *pilha ){
	printf( "Verificando topo da pilha...\n" );
	if( !is_empty( pilha ) )
		return pilha->dado[ pilha->topo ]; // se pilha NÂO vazia retun é o dado
	
	return EMPTY; // se pilha vazia retun é -1
}


bool is_empty( Pilha *pilha ){  // Verificar se a pilha está vazia
	printf( "Verificando se a pilha está vazia...\n" );
	return ( pilha->topo == EMPTY );
}


bool is_full( Pilha *pilha ){   // Verificar se a pilha está cheia
	printf( "Verificando se a pilha está cheia...\n" );
	return ( pilha->topo == MAX-1 );
}


bool push( Pilha *pilha, int item ){ // Empilhar item
	if( !is_full( pilha ) ){
		printf( "Empilhando %d...\n", item );
		pilha->topo++; // Incrementa antes, pois o valor inicial é -1
		pilha->dado[ pilha->topo ] = item;
		return true;	
	}
	else
		printf( "Pilha cheia!\n" );

	return false;
}


bool pop( Pilha *pilha ){  // Desempilhar item
	if( !is_empty( pilha ) ){
		printf( "Desempilhando %d...\n", pilha->dado[pilha->topo] );
		pilha->topo--;
		return true;
	}
	else
		printf( "Pilha vazia!\n" );

	return false;
}


bool pull( Pilha *pilha, int item ){ // Alterar o dado no topo da pilha
	if( !is_empty( pilha ) ){
		printf( "Alterando topo da pilha...\n" );
		pilha->dado[pilha->topo] = item;
		return true;
	}
	return false;
}

