#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/*
case 0: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>(texto)\n", consulta);
printf("\n========================================\n=================  00  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}
*/

int controle = 0;

int main (void) {
	setlocale(LC_ALL, "Portuguese" );
	
	int consulta = 0;
	
	Inicio:
do {
	system("cls || clear");	
	printf("\n*Obs: Esta lista obtém apenas 10 questões! (VETORES & MATRIZES)\n*Obs²: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\nDigite qual número da lista deseja consultar: ");
	scanf("%d", &consulta);
	
	
switch (consulta) {
	// Pela lista original a numeração começa em 126. Então caso se perca, basta somar +125 ao case desejado.
	// EX.: case 7 + 125 = 132. (VERIFICAR O .PDF)
	
case 1: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==> Faça um algoritmo que copie o conteúdo de um vetor em um segundo vetor.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que some o conteúdo de dois vetores e armazene o\n   resultado em um terceiro vetor.\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que faça a união de dois vetores de mesmo tamanho e\n   mesmo tipo em um terceiro vetor com dobro do tamanho.\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escrever um algoritmo que lê um vetor N(20) e o escreve. Troque, a seguir, o 1º\n   elemento com o último, o 2º com o penúltimo etc. até o 10º com o 11º e escreva\n   o vetor N assim modificado. \n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escrever um algoritmo que lê um vetor G(13) que é o gabarito de um teste de\n   loteria esportiva, contendo os valores 1 (coluna 1), 2 (coluna 2) e 3 (coluna do\n   meio). Ler, a seguir, para cada apostador, o número de seu cartão e um vetor\n   Resposta R (13). Verificar para cada apostador o número de acertos e escrever o\n   número do apostador e seu número de acertos. Se tiver 13 acertos, acrescentar\n   a mensagem: 'GANHADOR, PARABENS'.\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==> Faça um algoritmo para somar duas matrizes.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo para calcular a transposta de uma matriz.\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia uma matriz mat 2 x 3 e imprima na tela a soma de\n   todos os elementos da matriz mat. \n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia uma matriz mat 4 x 4, e imprima na tela a soma dos\n   elementos abaixo da diagonal principal da matriz mat.\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um algoritmo que lê uma matriz M(5,5) e calcule as somas:\n   a) da linha 4 de M;\n   b) da coluna 2 de M;\n   c) da diagonal principal;\n   d) da diagonal secundária;\n   e) de todos os elementos da matriz;\n   f) Escreva estas somas e a matriz\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


}

if (consulta > 10) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER NÃO ?? Só até o 10, GÊNIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);

}
