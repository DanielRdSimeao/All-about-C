#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// +IDEIA! Fazer com que o programa identifique quente ou frio.

/*
PrencherVetor (int num) {
	//Mostrando a matriz sem a diagonal
	for(int l = 0; l < num; l++){
	    for(int c = 0;  c < num; c++){
	        if (l == c)
	            printf("  |");
	        else
	            printf("%.2d|", mat[l][c]);
	    }
	    printf("\n");
	}
}
*/

//		Nome da cor da letra  int  binário
enum {
		BLACK,			//	   0    0000
		BLUE,			//	   1    0001
		GREEN,			//	   2    0010
		CYAN,			//	   3    0011
		RED,			//	   4    0100
		MAGENTA,		//	   5    0101
		BROWN,			//	   6    0110
		LIGHTGRAY,		//	   7    0111
		DARKGRAY,		//	   8    1000
		LIGHTBLUE,		//	   9    1001
		LIGHTGREEN,		//	  10    1010
		LIGHTCYAN,		//	  11    1011
		LIGHTRED,		//	  12    1100
		LIGHTMAGENTA,	//	  13    1101
		YELLOW,			//	  14    1110
		WHITE			//	  15    1111
};

void textColor (int letras) {
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), letras);
}

int main () {
    setlocale(LC_ALL,"portuguese");
    int num, errado=0, certo=0, tentativas=0, l, c, resposta;
	
    srand(time(NULL));
    textColor(WHITE);
    
    printf(" *Digite 1 número referente a linha/coluna da matriz: ");
    scanf("%d", &num);
	int matriz_sortida[num][num], diagonal_matriz[num][num], numeros_para_acertar[num];
    
    // Gera uma matriz entre 1 e 20 de "l" lados e "C" colunas.
    for (l=0; l<num; l++) {
        for (c=0; c<num; c++) {
            matriz_sortida[l][c] = rand()%20+1; // Atribuindo os números aleatorios na matriz mat[l][c]
			if (l==c) { // Quando "l" e "C" são identicas passa o valor gerado das diagonais para o vetor v[l]
				diagonal_matriz[l][c] = matriz_sortida[l][c];
				numeros_para_acertar[l] = matriz_sortida[l][c];
			}
		}
    }
    
    // Mostra a Matriz SEM a diagonal
    printf("\n Adivinhe a diagonal da matriz abaixo:\n");
    for (l=0; l<num; l++) {
        for (c=0; c<num; c++) {
        	if (l==c) {
            	printf("   |");
			}
			else {
        		printf(" %.2d|", matriz_sortida[l][c]);
			}
        }
        printf("\n");
    }
    printf("\n");
    
    
    /*
	// Mostra a Matriz INTEIRA
    for (l=0; l<num; l++) {
        for (c=0; c<num; c++) {
        	if (l==c) {
        		// NÚMERO COM A COR DESEJADA
        		textColor(GREEN); // textColor(2);
        		printf(" %.2d", numeros_para_acertar[l]);
        		
        		// PIPELINE COM A COR PADRÃO
        		textColor(WHITE);
        		printf("|");
			}
			else {
            	printf(" %.2d|", matriz_sortida[l][c]);
			}
        }
        printf("\n");
    }
    printf("\n");
	*/
	
	
	int decremento=num, verifica;	
    for (verifica=0; verifica<num; verifica++) {
		Repete:
		textColor(WHITE);
        printf("\n Adivinhe o número (entre 1 e 20): ");
        scanf("%d", &resposta);
		
        if (resposta == numeros_para_acertar[verifica]) {
        	if (decremento > 1) {
            	printf(" Este é o %dº número correto: '%d'. Restam: %d\n", verifica+1, resposta, decremento-=1);
				for (l=0; l<num; l++) {
					for (c=0; c<num; c++) {
						if (l==c) {
							textColor(GREEN);
							if (((diagonal_matriz[l][c]==resposta) and (l == verifica)) or (l < verifica)) {
								printf(" %.2d", diagonal_matriz[l][c]);
								textColor(WHITE);
								printf("|");
							}
							else {
								textColor(WHITE);
								printf("   |");
							}
						}
						else {
							textColor(WHITE);
							printf(" %.2d|", matriz_sortida[l][c]);
						}
					}
				printf("\n");
				}
			}
			else if (decremento == 1) {
			    printf(" Este é o %dº número correto: '%d'. Resultado alcançado.\n", verifica+1, resposta);
				for (l=0; l<num; l++) {
					for (c=0; c<num; c++) {
						if (l==c) {
							textColor(GREEN);
							if (((diagonal_matriz[l][c]==resposta) and (l == verifica)) or (l < verifica)) {
								printf(" %.2d", diagonal_matriz[l][c]);
								textColor(WHITE);
								printf("|");
							}
							else {
								textColor(RED);
								printf("   |");
							}
						}
						else {
							textColor(WHITE);
							printf(" %.2d|", matriz_sortida[l][c]);
						}
					}
				printf("\n");
				}
			}
			certo++;
		}
		else if (resposta < 0) {
			printf(" *Tente um número positivo!\n");
			errado++;
			goto Repete;
		}
		else if (resposta > numeros_para_acertar[verifica]) {
			printf(" *Errado! Tente um número menor.\n");
			errado++;
			goto Repete;
		}
		else {
			printf(" *Errado! Tente um número maior.\n");
			errado++;
			goto Repete;
		}
        tentativas = errado + certo;
	}
	printf("\n\n -->|Parabéns! Você acertou todos os números depois de um total de %d tentativas. (%d erros e %d acertos)", tentativas, errado, certo);

printf("\n\n\n");
system ("pause");
}
