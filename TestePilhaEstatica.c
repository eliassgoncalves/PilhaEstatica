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

// Bibliotecas
#include <stdio.h> // Para scanf, printf, fgets, gets
#include <string.h> // Para strcpy
#include <stdlib.h> // Para exit e malloc
#include <stdio_ext.h> // Para o __fflush
#include <stdbool.h> // Para o bool
#include <locale.h> // Para config. idioma local
#include "PilhaEstatica.c"

// Main
int main( void ){
	setlocale(LC_ALL, "Portuguese");
	
	/*
	 * Para melhor utilização, add nesse programa um menu para 
	 * informar ao usuário as opções que o programa implementa. 
	 * Desenvolva casos de teste para cada função do programa.
	 */

	// Variáveis
	Pilha *pilha;
	int op, item, topo;

	// Menu
	do{
		printf("-----------------------------------------------------------------\n");
        printf("Escolha uma opção: \n");
        printf("1 - Criar Pilha (create);\n");
        printf("2 - Empilhar (push);\n");
        printf("3 - Desempilhar (pop);\n");
        printf("4 - Verificar topo (top);\n");
        printf("5 - Alterar topo (pull).\n");
        printf("0 - Sair.\n");
        printf("-----------------------------------------------------------------\n");
        printf("Sua escolha: ");
        scanf("%d", &op);

        system("clear"); // No windows use cls no lugar de clear
        
        switch ( op )
        {
            case 1:
                pilha = create( pilha );
                break;
    
            case 2:
            	if(pilha != NULL ){
            		printf( "Valor a ser empilhado: " ); scanf( "%d", &item );
                	if( push( pilha, item ) )
                		printf( "Empilhado com sucesso!\n" );
                	else
                		printf( "Erro ao empilhar!\n" );
            	}
            	else
            		printf( "Crie a pilha antes...\n" );
                break;
            
            case 3:
            	if(pilha != NULL )
                	if( pop( pilha ) )
                		printf( "Desempilhado com sucesso!\n" );
                	else
                		printf( "Erro ao desempilhar!\n" );
                else
            		printf( "Crie a pilha antes...\n" );
                break;
            
            case 4:
            	if(pilha != NULL ){
	            	topo = top( pilha );
	            	if( topo == EMPTY ) 
	            		printf( "Pilha vazia.\n" );
	            	else
	            		printf( "Topo da pilha: %d\n", topo );
	            }
	            else
            		printf( "Crie a pilha antes...\n" );
                break;
            
            case 5:
            	if(pilha != NULL ){
            		printf( "Novo valor: " ); scanf( "%d", &item );
                	if( pull( pilha, item ) )
                		printf( "Topo alterado com sucesso!\n" );
                	else
                		printf( "Erro ao alterar topo!\n" );
            	}
                else
            		printf( "Crie a pilha antes...\n" );
                break;

            case 0:
            	exit(0);
           
            default:
                printf("Valor incorreto!\n");
                break;
        }
	} while( op != 0 );

	return 0;
}