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
printf("\n%d� Exerc�cio proposto:\n==>(texto)\n", consulta);
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
	printf("\n*Obs: Esta lista obt�m apenas 20 quest�es! (WHILE & DO-WHILE)\n*Obs�: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\nDigite qual n�mero da lista deseja consultar: ");
	scanf("%d", &consulta);
	
	
switch (consulta) {
	// Pela lista original a numera��o come�a em 106. Ent�o caso se perca, basta somar +105 ao case desejado.
	// EX.: case 7 + 105 = 112. (VERIFICAR O .PDF)
	
case 1: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==> Fa�a um algoritmo que leia um conjunto de n�meros (X) e imprima sua soma\n   (Soma) e sua m�dia (Media). Admita que o valor 9999 � utilizado como sentinela\n   para fim de leitura.\n   Ex.: 1, 2, 3 => Soma=6 Media=2\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um conjunto de dados num�ricos (X) e imprima o\n   maior (Maximo) dentre eles. Admita que o valor 9999 � utilizado como sentinela.\n   Ex.: 1, 2, 3 => Maior=3\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois n�meros inteiros positivos (Num1 e Num2) e\n   imprima o quociente (Quoc) e o resto (Resto) da divis�o de Num1 por Num2,\n   utilizando apenas as opera��es de adi��o e subtra��o.\n   Ex.: N1=10; N2=2 => Q=5 R=0\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um conjunto de n�meros (X) e imprima a\n   quantidade de n�meros pares (QPares) e a quantidade de n�meros impares\n   (QImpares) lidos. Admita que o valor 9999 � utilizado como sentinela para fim de\n   leitura.\n   Ex.: 1,2,3,4,5 => Pares=2 Impares=3\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que calcule e imprime a soma dos inteiros de 1 a 10. Utilize\n   as estruturas ENQUANTO-FACA / REPITA-FACA para fazer um la�o com as\n   instru��es de c�lculo e incremento. O la�o deve terminar quando o valor de x se\n   tornar 11.\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual\n   se perguntou para cada aluno o n�mero de vezes que utilizou o restaurante da\n   universidade no �ltimo m�s. Construa um algoritmo que determine:\n   a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;\n   b) O percentual de alunos que utilizaram entre 10 e 15 vezes;\n   c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes.\n   Ex.: 2, 3, 11, 12, 21, 22, 23 = a) 28%%; b) 28%%; c) 42%%\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Construa um algoritmo que, para a progress�o geom�trica 3; 9; 27; 81; ...;\n   6561, determine a soma de seus termos. Construa o algoritmo de maneira a n�o\n   utilizar a f�rmula de soma dos termos. Fa�a com que o computador gere cada\n   um dos termos a ser somado.\n   Ex.: 3; 9; 27; 81; 243; 729; 2187; 6561 => 9840\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo que pe�a o nome, a altura e o peso de duas pessoas e\n   apresente o nome e peso da mais pesada e o nome e altura da mais alta.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Considere que, para cada um dos hot�is fazenda da regi�o, se tenha registrado\n   o nome do hotel, a sua dist�ncia do centro da cidade, o n�mero m�dio de\n   visitantes no �ltimo feriado e o tipo de acesso ao hotel (0 � acesso n�o asfaltado;\n   1 � acesso asfaltado). Construa um algoritmo que forne�a:\n     a) O n�mero de hoteis que distam mais de 15km do centro;\n     b) A quantidade m�dia de visitantes no �ltimo feriado, nos hoteis com acesso\n        n�o asfaltado;\n     c) O nome e a dist�ncia do centro em Km, de todos os hoteis de acesso\n        asfaltado que tiveram menos de 1.000 visitantes.\n\n   Ex.: HA, DA=10, V=100, AC=0\n     HB, DA=20, V=50, AC=1\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que calcule a m�dia de sal�rios de uma empresa, pedindo\n   ao usu�rio o nome dos funcion�rios e os sal�rios e devolvendo a m�dia, o sal�rio\n   mais alto e o sal�rio mais baixo. Use nome = �fim� para encerrar a leitura.\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um n�mero e divida-o por dois (sucessivamente)\n   ate que o resultado seja menor que 1. Mostre o resultado da ultima divis�o e a\n   quantidade de divis�es efetuadas.\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Escrever um algoritmo que l� um valor N inteiro e positivo e que calcula e\n   escreve o valor de E.\n    E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10\n   metros e cresce 3 cent�metros por ano. Construa um algoritmo que calcule e\n   imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico.\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Escreva um algoritmo que leia um n�mero n (n�mero de termos de uma\n   progress�o aritm�tica), a1 (o primeiro termo da progress�o) e r (a raz�o da\n   progress�o) e escreva os n termos desta progress�o, bem como a soma dos\n   elementos.\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Foi feita uma pesquisa entre os habitantes de uma regi�o. Foram coletados os\n   dados de idade, sexo (M/F) e sal�rio. Fa�a um algoritmo que informe:\n     a) a m�dia de sal�rio do grupo;\n     b) a maior e a menor idade do grupo;\n     c) a quantidade de mulheres com sal�rio at� R$100,00.\n\n   Encerre a entrada de dados quando for digitada uma idade negativa.\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um n�mero inteiro N, calcule e mostre o maior\n   quadrado menor ou igual a N.\n   Por exemplo, se N for igual a 38, o Menor quadrado � 36 (quadrado de 6).\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 17: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um n�mero FN, calcule e mostre os N primeiros\n   termos da sequ�ncia de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido para N\n   sempre ser� maior ou igual a 2.\n", consulta);
printf("\n========================================\n=================  17  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}




case 18: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Foi realizada uma pesquisa de algumas caracter�sticas f�sicas da popula��o de\n   uma certa regi�o, a qual coletaram os seguintes dados referentes a cada\n   habitante para serem analisados:\n   - sexo (masculino e feminino)\n   - cor dos olhos (azuis, verdes ou castanhos)\n   - cor dos cabelos (louros, castanhos, pretos)\n   - idade\n   Fa�a um algoritmo que determine e escreva:\n     a) a maior idade dos habitantes;\n     b) a quantidade de indiv�duos do sexo feminino cuja idade est� entre 18 e\n        35 anos, inclusive;\n     c) a quantidade de indiv�duos que tenham olhos verdes e cabelos louros;\n\n   O final do conjunto de habitantes � reconhecido pelo valor -1 informado como\n   idade.\n", consulta);
printf("\n========================================\n=================  19  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 19: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia informa��es de alunos (Matricula, Nota1, Nota2 ,\n   Nota3) com o fim das informa��es indicado por Matricula = 9999 . Para cada\n   aluno deve ser calculada a m�dia final de acordo com a seguinte f�rmula:\n\n   M�dia final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9\n\n   Se a m�dia final for igual ou superior a 5, o algoritmo deve mostrar Matr�cula,\n   M�dia Final e a mensagem 'APROVADO'' ; se a m�dia final for inferior a 5, o\n   algoritmo deve mostrar Matricula, M�dia Final e a mensagem 'REPROVADO'.\n\n   Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e\n   o total de reprovados.\n", consulta);
printf("\n========================================\n=================  20  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 20: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia o n�mero de andares de um pr�dio e, a seguir, para\n   cada andar do pr�dio, leia o n�mero de pessoas que entraram e sa�ram do\n   elevador.\n\n   Considere que o elevador est� vazio e est� subindo, os dados se referem a\n   apenas uma �subida� do elevador e que o n�mero de pessoas dentro do\n   elevador sempre ser� maior ou igual a 0.\n\n   Se o n�mero de pessoas, ap�s a entrada e sa�da for maior que 15, deve ser\n   mostrada a mensagem 'EXCESSO DE PASSAGEIROS . DEVEM SAIR' em\n   seguida, o n�mero de pessoas que devem sair do elevador, de modo que seja\n   obedecido o limite de 15 passageiros.\n\n   Ap�s a entrada de pessoas no �ltimo andar o algoritmo deve mostrar quantas\n   pessoas ir�o descer.\n", consulta);
printf("\n========================================\n=================  20  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}
}

if (consulta > 20) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER N�O ?? S� at� o 20, G�NIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);
	
}
