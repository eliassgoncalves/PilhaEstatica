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

#ifndef _PILHA_ESTATICA_H_INCLUDED_
#define _PILHA_ESTATICA_H_INCLUDED_


// Tamanho máximo da pilha 
#define MAX 3
#define EMPTY -1

// Definição da Pilha
typedef struct pilha_estatica Pilha;

// Protótipos da pilha
Pilha *create( );    	  // Criar pilha
int top( Pilha* );		  // Acessa o item no topo da lista
bool is_empty( Pilha* );  // Verificar se a pilha está vazia
bool is_full( Pilha* );   // Verificar se a pilha está cheia
bool push( Pilha*, int ); // Empilhar item
bool pop( Pilha* );  	  // Desempilhar item
bool pull( Pilha*, int ); // Alterar item no topo

#endif