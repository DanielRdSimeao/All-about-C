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
	printf("\n*Obs: Esta lista obtém apenas 20 questões! (WHILE & DO-WHILE)\n*Obs²: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\nDigite qual número da lista deseja consultar: ");
	scanf("%d", &consulta);
	
	
switch (consulta) {
	// Pela lista original a numeração começa em 106. Então caso se perca, basta somar +105 ao case desejado.
	// EX.: case 7 + 105 = 112. (VERIFICAR O .PDF)
	
case 1: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==> Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma\n   (Soma) e sua média (Media). Admita que o valor 9999 é utilizado como sentinela\n   para fim de leitura.\n   Ex.: 1, 2, 3 => Soma=6 Media=2\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o\n   maior (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela.\n   Ex.: 1, 2, 3 => Maior=3\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia dois números inteiros positivos (Num1 e Num2) e\n   imprima o quociente (Quoc) e o resto (Resto) da divisão de Num1 por Num2,\n   utilizando apenas as operações de adição e subtração.\n   Ex.: N1=10; N2=2 => Q=5 R=0\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia um conjunto de números (X) e imprima a\n   quantidade de números pares (QPares) e a quantidade de números impares\n   (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim de\n   leitura.\n   Ex.: 1,2,3,4,5 => Pares=2 Impares=3\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que calcule e imprime a soma dos inteiros de 1 a 10. Utilize\n   as estruturas ENQUANTO-FACA / REPITA-FACA para fazer um laço com as\n   instruções de cálculo e incremento. O laço deve terminar quando o valor de x se\n   tornar 11.\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual\n   se perguntou para cada aluno o número de vezes que utilizou o restaurante da\n   universidade no último mês. Construa um algoritmo que determine:\n   a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;\n   b) O percentual de alunos que utilizaram entre 10 e 15 vezes;\n   c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes.\n   Ex.: 2, 3, 11, 12, 21, 22, 23 = a) 28%%; b) 28%%; c) 42%%\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Construa um algoritmo que, para a progressão geométrica 3; 9; 27; 81; ...;\n   6561, determine a soma de seus termos. Construa o algoritmo de maneira a não\n   utilizar a fórmula de soma dos termos. Faça com que o computador gere cada\n   um dos termos a ser somado.\n   Ex.: 3; 9; 27; 81; 243; 729; 2187; 6561 => 9840\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e\n   apresente o nome e peso da mais pesada e o nome e altura da mais alta.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Considere que, para cada um dos hotéis fazenda da região, se tenha registrado\n   o nome do hotel, a sua distância do centro da cidade, o número médio de\n   visitantes no último feriado e o tipo de acesso ao hotel (0 – acesso não asfaltado;\n   1 – acesso asfaltado). Construa um algoritmo que forneça:\n     a) O número de hoteis que distam mais de 15km do centro;\n     b) A quantidade média de visitantes no último feriado, nos hoteis com acesso\n        não asfaltado;\n     c) O nome e a distância do centro em Km, de todos os hoteis de acesso\n        asfaltado que tiveram menos de 1.000 visitantes.\n\n   Ex.: HA, DA=10, V=100, AC=0\n     HB, DA=20, V=50, AC=1\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que calcule a média de salários de uma empresa, pedindo\n   ao usuário o nome dos funcionários e os salários e devolvendo a média, o salário\n   mais alto e o salário mais baixo. Use nome = “fim” para encerrar a leitura.\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia um número e divida-o por dois (sucessivamente)\n   ate que o resultado seja menor que 1. Mostre o resultado da ultima divisão e a\n   quantidade de divisões efetuadas.\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e\n   escreve o valor de E.\n    E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10\n   metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e\n   imprima quantos anos serão necessários para que Zé seja maior que Chico.\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um algoritmo que leia um número n (número de termos de uma\n   progressão aritmética), a1 (o primeiro termo da progressão) e r (a razão da\n   progressão) e escreva os n termos desta progressão, bem como a soma dos\n   elementos.\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os\n   dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe:\n     a) a média de salário do grupo;\n     b) a maior e a menor idade do grupo;\n     c) a quantidade de mulheres com salário até R$100,00.\n\n   Encerre a entrada de dados quando for digitada uma idade negativa.\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia um número inteiro N, calcule e mostre o maior\n   quadrado menor ou igual a N.\n   Por exemplo, se N for igual a 38, o Menor quadrado é 36 (quadrado de 6).\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 17: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia um número FN, calcule e mostre os N primeiros\n   termos da sequência de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido para N\n   sempre será maior ou igual a 2.\n", consulta);
printf("\n========================================\n=================  17  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}




case 18: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Foi realizada uma pesquisa de algumas características físicas da população de\n   uma certa região, a qual coletaram os seguintes dados referentes a cada\n   habitante para serem analisados:\n   - sexo (masculino e feminino)\n   - cor dos olhos (azuis, verdes ou castanhos)\n   - cor dos cabelos (louros, castanhos, pretos)\n   - idade\n   Faça um algoritmo que determine e escreva:\n     a) a maior idade dos habitantes;\n     b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e\n        35 anos, inclusive;\n     c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros;\n\n   O final do conjunto de habitantes é reconhecido pelo valor -1 informado como\n   idade.\n", consulta);
printf("\n========================================\n=================  19  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 19: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia informações de alunos (Matricula, Nota1, Nota2 ,\n   Nota3) com o fim das informações indicado por Matricula = 9999 . Para cada\n   aluno deve ser calculada a média final de acordo com a seguinte fórmula:\n\n   Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9\n\n   Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula,\n   Média Final e a mensagem 'APROVADO'' ; se a média final for inferior a 5, o\n   algoritmo deve mostrar Matricula, Média Final e a mensagem 'REPROVADO'.\n\n   Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e\n   o total de reprovados.\n", consulta);
printf("\n========================================\n=================  20  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 20: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia o número de andares de um prédio e, a seguir, para\n   cada andar do prédio, leia o número de pessoas que entraram e saíram do\n   elevador.\n\n   Considere que o elevador está vazio e está subindo, os dados se referem a\n   apenas uma “subida” do elevador e que o número de pessoas dentro do\n   elevador sempre será maior ou igual a 0.\n\n   Se o número de pessoas, após a entrada e saída for maior que 15, deve ser\n   mostrada a mensagem 'EXCESSO DE PASSAGEIROS . DEVEM SAIR' em\n   seguida, o número de pessoas que devem sair do elevador, de modo que seja\n   obedecido o limite de 15 passageiros.\n\n   Após a entrada de pessoas no último andar o algoritmo deve mostrar quantas\n   pessoas irão descer.\n", consulta);
printf("\n========================================\n=================  20  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}
}

if (consulta > 20) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER NÃO ?? Só até o 20, GÊNIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);
	
}
