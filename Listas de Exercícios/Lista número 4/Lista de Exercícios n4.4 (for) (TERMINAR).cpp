#include <locale.h>
#include <math.h>
#include <time.h>
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
	printf("\n*Obs: Esta lista obtém apenas 18 questões! (FOR)\n*Obs²: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\nDigite qual número da lista deseja consultar: ");
	scanf("%d", &consulta);
	
	
switch (consulta) {
	// Pela lista original a numeração começa em 88. Então caso se perca, basta somar +87 ao case desejado.
	// EX.: case 7 + 87 = 94. (VERIFICAR O .PDF)
	
case 1: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Some os números de 1 a 100 e imprima o valor.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	int soma = 0;
	for (controle = 1; controle<=100; controle++){
		soma = soma+controle;
		if (controle == 100)
			printf("%i = ",controle);
		else
			printf("%i+",controle);
	}
		printf("%i.",soma);
		
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine:\n   a) A soma dos números positivos;\n   b) A quantidade de valores negativos;\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");	
	
	int qtdn1,contNeg = 0,ele = 50;
	int n1[ele];
	n1[0] = 0;
	srand(time(NULL));
	for (controle = 1; controle <= ele; controle++){
		n1[controle] = (rand()%100)-50;
			printf(" %i ",n1[controle]);
		if (n1[controle] >= 0){
			n1[0] = n1[0] + n1[controle];
		}
		if (n1[controle] < 0)
			contNeg++;
	}
		printf("\n\n->| A soma dos valores positivos é: %i.",n1[0]);
		printf("\n->| A quantidade de valores negativos é: %i.",contNeg);
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000.\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	//o cara tem fetiche pelo nome todo o que vc tem contra o "num"?
	// Acho mais legível o "numero" dq "num" KKK
	
	for (controle = 1; controle <=999; controle++){
		if (controle%7==0 and controle < 994)
			printf("%i, ",controle);
		else if (controle%7==0 and controle == 994)
			printf(" %i.",controle);
	}
		
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que imprima todos os números pares compreendidos entre\n   85 e 907. O algoritmo deve também calcular a soma destes valores.\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	int soma = 0;
	for (controle = 86; controle < 908; controle+=2){
			soma = soma+controle;
		if(controle < 906){
			printf("%i + ",controle);
		}
		else
			printf("%i",controle);
			
		
	}
		printf(" = %i.",soma);
	
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que calcule o valor de A, dado por:\n   A = N + (N-1)/2 + (N-2) / 3 + ... + 1/N\n   onde N é um número inteiro positivo.\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	unsigned int N,A = 1; //Aqui deveria ser número, mas vou usar as variáveis do problema, essa aqui vou ter que queimar mais neuronio ou pesquisar pq não veio nada
	printf(" Digite um número: "); scanf("%i",&N);
	
	for (controle = N; controle > 0; N--) {
		A = A * N; 
		
	}
	printf("%i",A);
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria\n   qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o\n   pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de\n   xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter\n   apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um\n   algoritmo para calcular o total de grãos que o monge recebeu.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	

	
	float totalGraos=0;
 	int graos=0;

	for(totalGraos=1;totalGraos>=0 && graos!=64;totalGraos+=totalGraos){
		graos++;
   		printf("\n->| %i° quadro têm %.0f grãos.\n",graos,totalGraos);
 	}

	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Dado o conjunto de instruções a seguir, faça um algoritmo com quatro variações,\n   colocando o comando de repetição adequadamente, de forma a:\n   a) Executar o conjunto 10 vezes;\n   b) Não executar nenhuma vez;\n   c) Executar o conjunto 100 vezes utilizando duas estruturas de repetição;\n   d) Executar N vezes, onde N é uma variável informada pelo usuário.\n   - Ler A, B\n   - Modulo = A mod B (calcula o resto da divisão)\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Para uma turma de 45 alunos, construa um algoritmo que determine:\n   a) A idade média dos alunos com menos de 1,70m de altura;\n   b) A altura média dos alunos com mais de 20 anos.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um algoritmo que calcule o produto dos inteiros ímpares de 1 a 15 e,\n   então, exiba os resultados.\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia um número e imprima a sua tabela de multiplicação\n   de 1 até 13.\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um algoritmo que calcule os quadrados e cubos dos números de 0 a 10\n   e imprima os valores resultantes no formato de tabela, como segue:\n   Número\t Quadrado\t Cubo\n   0\t\t 0\t\t 0\n   1\t\t 1\t\t 1\n   2\t\t 4\t\t 8\n   3\t\t 9\t\t 27\n   4\t\t 16\t\t 64\n   5\t\t 25\t\t 125\n   6\t\t 36\t\t 216\n   7\t\t 49\t\t 343\n   8\t\t 64\t\t 512\n   9\t\t 81\t\t 729\n   10\t\t 100\t\t 1000\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao\n   usuário a quantidade de funcionários, o nome e o salário de cada funcionário e\n   devolvendo a média, o salário mais alto e o salário mais baixo.\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Crie um programa que peça 10 números inteiros e apresente: a média, o maior\n   e o menor.\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um algoritmo que determine o fatorial de um número. Para este\n   problema, tem-se como entrada o valor do número do qual se deseja calcular o\n   fatorial. O fatorial de 0 é igual a 1. O fatorial de um número N(N!) é definido\n   conforme a seguir:  N! = 1 * 2 * 3 * 4 * ... * (N-1) * N\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de\n   serviços. A taxa de serviços é de:\n    ==> R$ 4,00 por diária, se o número de diárias for < 15;\n    ==> R$ 3,60 por diária, se o número de diárias for = 15;\n    ==> R$ 3,00 por diária, se o número de diárias for > 15.\n\n   Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel.\n   Imprima também o total ganho pelo hotel.\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Um determinado material radioativo perde metade de sua massa a cada 50\n   segundos. Dada a massa inicial, em gramas, faça um programa que determine o\n   tempo necessário para que essa massa se torne menor que 0,05 gramas.\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 17: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Sem utilizar a operação de multiplicação, escreva um programa que multiplique\n   dois números inteiros. Por exemplo: 2 * 2 = 2 + 2.\n", consulta);
printf("\n========================================\n=================  17  =================\n========================================\n");
	
	int numero1, numero2, resultado=0;
	
	printf("Digite o 1º número: "); scanf("%d", &numero1);
	printf("Digite o 2º número: "); scanf("%d", &numero2);
	
	for (controle=1; controle<=numero1; controle++)
		resultado += numero2;
	
	printf("%d * %d = %d\n\n", numero1, numero2, resultado);
	
	printf("\n\n");
	system ("pause");
break;
}


case 18: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>A série de Fibonacci é formada pela sequência:\n   0, 1, 1, 2, 3, 5, 8, 13, 21, ...\n\n   Construa um algoritmo que gere e mostre a série até o vigésimo termo.\n", consulta);
printf("\n========================================\n=================  18  =================\n========================================\n");
	
	int a=0, b=1, auxiliar;
	int valor=20;
	
    printf("\nSérie de Fibonacci:\n\n");
	
    for(controle=1; controle<=valor; controle++) {
        
		if (controle==1 or controle==2)
			printf("%dº termo: 1 \n", controle, auxiliar);
        else if (controle>2 or controle<valor)
        	printf("%dº termo: %d \n", controle, auxiliar);
        else if (controle==valor)
        	printf("%dº termo: %d.", controle, auxiliar);
		
		auxiliar = a + b;
        a = b;     
        b = auxiliar;
    }
	
	printf("\n\n");
	system ("pause");
break;
}


}

if (consulta > 18) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER NÃO ?? Só até o 18, GÊNIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);
		
}
