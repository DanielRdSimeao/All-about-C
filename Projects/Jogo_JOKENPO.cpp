#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/*
 * Jogo Pedra - Papel - Tesoura (JoKenPo)
 * @author: Daniel Rodrigues Simeão
 */

enum {
	BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
};

void textColor (int letras) {
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), letras);
}

// 1 - Pedra\n 2 - Papel\n 3 - Tesoura.
// 1 ganha do 3. 1 perde para o 2. (Pedra ganha da Tesoura e perde para o Papel)
// 2 ganha do 1. 2 perde para o 3. (Papel ganha da Pedra e perde para a Tesoura)
// 3 ganha do 2. 3 perde para o 1. (Tesoura ganha do Papel e perde para a Pedra)

int main () {
	setlocale(LC_ALL, "Portuguese" );
	
	int decisao, contadorV=0, contadorD=0;
	do {
		system ("cls");
		
		// Contador de VITÓRIAS e DERROTAS
		textColor(WHITE);
		printf("\n\t *****************"); printf("\t   *****************");
		printf("\n\t ** Contador de **"); printf("\t   ** Contador de **");
		printf("\n\t *** Vitórias ****"); printf("\t   *** Derrotas ****");
		printf("\n\t *******"); textColor(GREEN); printf(" %d ", contadorV); textColor(WHITE); printf("*******");                
										  printf("\t   *******"); textColor(RED); printf(" %d ", contadorD); textColor(WHITE); printf("*******");
		printf("\n\t *****************"); printf("\t   *****************");
		
		// Informações na tela.
		int jogador, computador;
		RepeteOp:
		printf("\n\n  ========== JoKenPo ==========");
		printf("\n | 1. Pedra");
		printf("\n | 2. Papel");
		printf("\n | 3. Tesoura");
		printf("\n |=============================");
		printf("\n | Digite a opção desejada: "); scanf("%d", &jogador);	
		printf("  =============================\n\n");
		
		// Switch do jogador.
		switch(jogador) {
			case 1:
				printf(" Jogador escolheu PEDRA.\n");
			break;
			
			case 2:
				printf(" Jogador escolheu PAPEL.\n");
			break;
			
			case 3:
				printf(" Jogador escolheu TESOURA.\n");
			break;
			
			default: {
				printf(" *Opção inválida!\n"); goto RepeteOp;
			break;
			}
		}
		
		// Lógica do computador.
		srand(time(NULL));
		computador = rand()%3+1; // Gera um número aleatorio entre 1 e 3.
		// Switch do computador.
		switch(computador) {
			case 1:
				printf(" Computador escolheu PEDRA.\n");
			break;
			
			case 2:
				printf(" Computador escolheu PAPEL.\n");
			break;
			
			case 3:
				printf(" Computador escolheu TESOURA.\n");
			break;
		}
		
		// Lógica para determinar o vencedor.
		if (jogador == computador) {
			printf("\n ->|Resultado: Empate.");
		}
		else if ((jogador==1 && computador==3) || (jogador==2 && computador==1) || (jogador==3 && computador==2)) {
			textColor(GREEN);
			printf("\n ->|Resultado: Jogador Venceu!");
			contadorV++;
			textColor(WHITE);
		}
		else {
			textColor(RED);
			printf("\n ->|Resultado: Computador Venceu.");
			contadorD++;
			textColor(WHITE);
		}
		
		printf("\n\n");
		system ("pause");
		printf("\n Deseja continuar jogando ?\n 0 - Não.\n 1 - Sim.\n Escolha: "); scanf("%d", &decisao);
	} while (decisao);
}
