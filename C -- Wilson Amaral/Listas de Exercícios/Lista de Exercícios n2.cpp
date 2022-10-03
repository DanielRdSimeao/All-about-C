#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

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
do {
	system("cls || clear");	
	printf("\n*Obs: Esta lista obtém apenas 14 questões!");
	printf("\n\nDigite qual número da lista deseja consultar: ");
	scanf("%d", &consulta);


switch(consulta) {
case 1: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um programa que solicite ao usuário um número real e ao final imprima na tela se o número informado é \nmaior que 10 (dez)\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	float num1real;
	
	printf("Digite um número real: ");
	scanf("%f", &num1real);
		if (num1real > 10)
			printf("->|O número '%g' é maior que 10.", num1real);

	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário um número real e ao final imprima na tela se o número informado é \nmaior ou igual a dez ou menor que 10 (dez)\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	float num2real;
	
	printf("Digite um número real: ");
	scanf("%f", &num2real);
		if (num2real >= 10)
			printf("->|O número '%g' é maior ou igual a 10.", num2real);
		else if (num2real < 10)
			printf("->|O número '%g' é menor que 10.", num2real);
		else
			printf("->|O número '%g' é igual a 10.", num2real);

	printf("\n\n");
	system ("pause");
break;	
}


case 3: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o número informado é \nmaior que dez, se é menor que dez, ou se é igual a dez\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");

	float num3real;
	
	printf("Digite um número real: ");
	scanf("%f", &num3real);	
		if (num3real > 10)
				printf("->|O número '%g' é maior que 10.", num3real);
			else if (num3real < 10)
				printf("->|O número '%g' é menor que 10.", num3real);
			else
				printf("->|O número '%g' é igual a 10.", num3real);

	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o número informado é \npositivo, negativo ou nulo (zero)\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	float num4real;
	
	printf("Digite um número real: ");
	scanf("%f", &num4real);
		if (num4real > 0)
			printf("->|O número '%g' é positivo, pois é maior que 0 (zero).", num4real);
		else if (num4real < 0)
			printf("->|O número '%g' é negativo, pois é menor que 0 (zero).", num4real);
		else
			printf("->|O número '%g' é nulo, pois é igual a 0 (zero).", num4real);

	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: \né múltiplo de 3, ou, não é múltiplo de 3\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	int num5int;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num5int);
		if (num5int % 3 == 0)
			printf("->|O número '%d' é múltiplo de 3.", num5int);
		else
			printf("->|O número '%d' não é múltiplo de 3.", num5int);

	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que leia um número inteiro e o múltiplo a ser testado e imprima uma das mensagens: \né múltiplo de 'X', ou, não é múltiplo de 'X'\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	int num6int, multiplo6;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num6int);
	printf("Digite um múltiplo a ser testado: ");
	scanf("%d", &multiplo6);
		if (num6int % multiplo6 == 0)
			printf("->|O número '%d' é múltiplo de %d.", num6int, multiplo6);
		else
			printf("->|O número '%d' não é múltiplo de %d.", num6int, multiplo6);
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Desenvolva um algoritmo que classifique um número inteiro fornecido pelo usuário como par ou ímpar\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	int num7int;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num7int);
		if (num7int % 2 == 0)
			printf("->|O número '%d' é par.", num7int);
		else 
			printf("->|O número '%d' é ímpar.", num7int);
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade desse número, caso \ncontrário, imprimir o dobro do número\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	float num8real;
	
	printf("Digite um número (inteiro ou real): ");
	scanf("%f", &num8real);
		if (num8real > 20) {
			float metade8 = num8real / 2;
			printf("->|A metade de '%g' é: %g", num8real, metade8);
		}
		else {
			float dobro8 = num8real * 2;
			printf("->|O dobro de '%g' é: %g", num8real, dobro8);
		}
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado seja maior que 10, \nimprima o quadrado do resultado, caso contrário, imprima a metade dele\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	int num9int, num9_1int, soma9int;
	
	printf("Digite dois números inteiros seguidos da tecla 'enter': \n");
	scanf("%d %d", &num9int, &num9_1int);
	soma9int = num9int + num9_1int;
	
		if (soma9int > 10) {
			float quadrado9 = soma9int * soma9int;
			printf("->|O quadrado de '%d' é: %g", soma9int, quadrado9);
		}
		else {
			float metade9 = soma9int / 2;
			printf("->|A metade de '%d' é: %g", soma9int, metade9);
		}	
		
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>O sistema de avaliação de determinada disciplina é composto por três provas. A primeira prova tem peso 2, \na segunda tem peso 3 e a terceira tem peso 5. Considerando que a média para aprovação é 6.0, faça um algoritmo \npara calcular a média final de um aluno desta disciplina e dizer se o aluno foi aprovado ou não\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	float vetor[3];
	
	for (controle=1; controle<=3; controle++) {
		printf("Digite a %d. nota da prova: ", controle);
		scanf("%f", &vetor[controle]);
		vetor[0] = ((vetor[1]*2) + (vetor[2]*3) + (vetor[3]*5)) / 10;
	}
	if (vetor[0] >= 6)
		printf("->|Aluno aprovado com média: %g", vetor[0]);
	else
		printf("->|Aluno reprovado com nota abaixo da média.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da pessoa mais pesada\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	char nome11[2][25];
	float peso11[2];
	
	for (controle=1; controle<=2; controle++) {
		printf("Digite o %d nome e %d peso: \n", controle, controle);
		scanf("%s %f", &nome11[controle], &peso11[controle]);
	}
	if (peso11[1] > peso11[2])
		printf("->|%s é mais pesado(a) que %s com %gKg.", nome11[1], nome11[2], peso11[1]);
	else if (peso11[1] < peso11[2])
		printf("->|%s é mais pesado(a) que %s com %gKg.", nome11[2], nome11[1], peso11[2]);
	else
		printf("->|Ambos tem o mesmo peso.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e 90, ou não\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	float num12real;
	
	printf("Digite um número: ");
	scanf("%f", &num12real);
		if ( num12real >= 20 and num12real <= 90)
			printf("O número está entre 20 e 90.");
		else
			printf("O número não está entre 20 e 90.");
			
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se são iguais\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	float num13[2];
	
	for (controle=1; controle<=2; controle++) {
		printf("Digite o %d. número: ", controle);
		scanf("%f", &num13[controle]);
	}
	if (num13[1] > num13[2])
		printf("->|O número %g é maior que o número %g.", num13[1], num13[2]);
	else if (num13[1] < num13[2])
		printf("->|O número %g é maior que o número %g.", num13[2], num13[1]);
	else
		printf("->|Ambos os números (%g e %g) são iguais.", num13[1], num13[2]);
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa em linguagem C que solicite ao usuário a média para aprovação em um curso e em seguida \nsolicite ao usuário o nome, sexo e as 03 notas do aluno e ao final imprima a frase: 'O aluno XXXXX foi aprovado \ncom media YY'' considerando o gênero do(a) aluno(a) e se foi aprovado(a) ou reprovado(a)\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	float media14Aprov, soma14notas = 0, media14notas, notas14[3];
	char nome14[25], sexo14;
	
	printf("Digite a média para aprovação em um curso: ");
	scanf("%f", &media14Aprov);
	printf("Digite o seu nome: ");
	scanf("%s", &nome14);
	
	do {
		printf("Digite o seu sexo [F / M]: ");
		scanf("%s", &sexo14);
	} while (sexo14 != 'M' && sexo14 != 'm' && sexo14 != 'F' && sexo14 != 'f');
	
	for (controle=1; controle<=3; controle++) {
		printf("Digite a %d. nota: ", controle);
		scanf("%f", &notas14[controle]);
		soma14notas = soma14notas + notas14[controle];
	}
	media14notas = soma14notas / 3;
	
	if (sexo14 == 'M' || sexo14 == 'm')
		if (media14notas >= media14Aprov)
			printf("->|O aluno %s foi aprovado com média %g.", nome14, media14notas);
		else
			printf("->|O aluno %s foi reprovado com nota abaixo da média.", nome14);
	
	if (sexo14 == 'F' || sexo14 == 'f')
		if (media14notas >= media14Aprov)
			printf("->|A aluna %s foi aprovada com média %g.", nome14, media14notas);
		else
			printf("->|A aluna %s foi reprovada com nota abaixo da média.", nome14);
	
	printf("\n\n");
	system ("pause");
break;
}

}
} while (consulta);

	printf("\n");
	system ("pause");
	return 0;
}
