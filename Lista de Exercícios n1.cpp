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

int main (void) {
	setlocale(LC_ALL, "Portuguese" );

	int consulta = 0;
do {
	system("cls || clear");	
	printf("\n*Obs: Esta lista obtém apenas 16 questões!");
	printf("\n\nDigite qual número da lista deseja consultar: ");
	scanf("%d", &consulta);


switch(consulta) {
case 1: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que apresente na tela a frase: 'Meu primeiro programa!!!'\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");

	for (int repet = 1; repet <=10; repet++)
		printf("->|%d - Meu primeiro programa!!!\n", repet);
		
	printf("\n");
	system ("pause");
break;
}

case 2: {
system("cls || clear");		
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário um número inteiro e ao final apresente na tela o número informado pelo \nusuário do programa.\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");

	int num2int;
	printf("Digite um número inteiro: ");
	scanf("%d", &num2int);
		printf("->|%d", num2int);
		
	printf("\n\n");
	system ("pause");
break;
}

case 3: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário um número inteiro e ao final apresente na tela o número informado da \nseguinte forma: 'Foi informado o valor: X'\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");

	int num3int;
	printf("Digite um número inteiro: ");
	scanf("%d", &num3int);
		printf("->|O número informado foi: %d", num3int);
		
	printf("\n\n");
	system ("pause");
break;
}

case 4: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente na tela os dois números \ninformados da seguinte forma: 'Voce informou os numeros X e Y'\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");

	int num4int, num4_1int;
	printf("Digite dois números inteiros seguidos da tecla 'enter': \n");
	scanf("%d %d", &num4int, &num4_1int);
		printf("->|Você informou os números %d e %d", num4int, num4_1int);
		
	printf("\n\n");
	system ("pause");
break;
}
	
case 5: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário um número real e ao final apresente na tela o número informado \nformatado com duas casas decimais da seguinte forma: 'Voce informou o numero X.YY'\n", consulta);
printf("\n*Lembre-se! Neste caso, com a inclusão da biblioteca 'locale.h', números reais são representados usando a vírgula (,)\nEx: 19,69");
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	float num5real;
	printf("Digite um número real: ");
	scanf("%f", &num5real);
		printf("->|Você informou o número %.2f", num5real);
		
	printf("\n\n");
	system ("pause");
break;	
}

case 6: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário a temperatura em graus Celsius e ao final apresente a temperatura \ncorrespondente em graus Farenheit. F = Celsius * 1.8 + 32\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	float celsius6, farenheit6;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &celsius6);
		farenheit6 = celsius6 * 1.8 + 32;
		printf("->|A temperatura informada em Celsius, convertida para Farenheit é: %.2f", farenheit6);	
		
	printf("\n\n");
	system ("pause");
break;
}

case 7: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário um número inteiro e um número real e ao final apresente na tela os \ndois números informados formatando com duas casas decimais somente o número real da seguinte forma: \n'Voce informou os numeros N e X.YY'\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	int num7int;
	float num7real;
	printf("Digite um número inteiro e seguido do enter um número real: \n");
	scanf("%d %f", &num7int, &num7real);
		printf("->|Você informou os números %d e %.2f", num7int, num7real);
		
	printf("\n\n");
	system ("pause");
break;
}

case 8: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário a primeira letra de seu nome e ao final apresente na tela a letra \ninformada pelo usuário da seguinte forma: 'Voce digitou 'Letra''\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	char letra8[1];
	printf("Digite a primeira letra de seu nome: ");
	scanf("%s", &letra8);
		printf("->|Você digitou a letra '%s'.", letra8);
		
	printf("\n\n");
	system ("pause");
break;
}

case 9: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário o nome de sua cor preferida e ao final apresente na tela a cor \ninformada pelo usuário da seguinte forma: 'Voce gosta da cor AAA'\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	char corPreferida[25];
	printf("Digite a sua cor preferida: ");
	scanf("%s", &corPreferida);
		printf("->|Você gosta da cor '%s'.", corPreferida);
		
	printf("\n\n");
	system ("pause");
break;
}

case 10: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário o nome de uma verdura e uma fruta de sua preferencia e ao final \napresente na tela as informações digitadas pelo usuário da seguinte forma: \n'Voce gosta de AAAAAAA e BBBBBBB'\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	char verdura[30], fruta[30];
	printf("Digite uma verdura e uma fruta de sua preferência (aperte enter ao final da cada escolha): \n");
	scanf("%s %s", &verdura, &fruta);
		printf("->|Você gosta de %s e %s", verdura, fruta);
		
	printf("\n\n");
	system ("pause");
break;
}
	
case 11: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela o numero informado e \nna linha de baixo o dobro deste número da seguinte forma: \n\tNumero -> X\n\tDobro deste numero -> Y\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	float num11real, dobro11;
	printf("Digite um número real: ");
	scanf("%f", &num11real);
		dobro11 = num11real * 2;
		printf("->|O número informado foi: %.2f\n->|O dobro deste número é: %.2f", num11real, dobro11);
		
	printf("\n\n");
	system ("pause");
break;	
}
	
case 12: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela o numero informado e \nna linha de baixo o quadrado deste número e na linha de baixo o cubo deste número da seguinte forma: \n\tNumero -> X\n\tQuadrado deste numero -> Y\n\tCubo deste numero -> Z\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	float num12real, quadrado12, cubo12;
	printf("Digite um número real: ");
	scanf("%f", &num12real);
		quadrado12 = num12real * num12real;
		cubo12 = quadrado12 * num12real; // OU num12real * num12real * num12real
		printf("->|O número informado foi: %.2f\n->|O quadrado deste número é: %.2f\n->|O cubo deste número é: %.2f", num12real, quadrado12, cubo12);
		
	printf("\n\n");
	system ("pause");
break;
}

case 13: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente na tela a soma dos dois \nnúmeros informados da seguinte forma: 'O numeros N e X somados correspondem a Y'\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	int num13int, num13_1int, soma13;
	printf("Digite dois números inteiros seguidos da tecla 'enter': \n");
	scanf("%d %d", &num13int, &num13_1int);
		soma13 = num13int + num13_1int;
		printf("->|Os números %d e %d somados correspondem a %d", num13int, num13_1int, soma13);
		
	printf("\n\n");
	system ("pause");
break;
}

case 14: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário dois números reais e ao final apresente na tela o produto dos dois \nnúmeros informados da seguinte forma: 'O produto dos numeros N e X corresponde a Y'\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	float num14real, num14_1real, produto14;
	printf("Digite dois números reais seguidos da tecla 'enter': \n");
	scanf("%f %f", &num14real, &num14_1real);
		produto14 = num14real * num14_1real;
		printf("->|O produto dos números %.2f e %.2f corresponde a %.2f", num14real, num14_1real, produto14);
		
	printf("\n\n");
	system ("pause");
break;
}

case 15: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite ao usuário dois números reais e ao final apresente na tela as quatro operações \naritméticas básicas dos dois números informados\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	float num15real, num15_1real;
	float soma15, subt15, mult15, div15;
	printf("Digite dois números reais seguidos da tecla 'enter': \n");
	scanf("%f %f", &num15real, &num15_1real);
		soma15 = num15real + num15_1real;
		subt15 = num15real - num15_1real;
		mult15 = num15real * num15_1real;
		div15  = num15real / num15_1real;
		printf("->|A soma de %.2f e %.2f é: %.2f\nA subtração de %.2f e %.2f é: %.2f\nA multiplicação de %.2f e %.2f é: %.2f\nA divisão de %.2f e %.2f é: %.2f", num15real, num15_1real, soma15, num15real, num15_1real, subt15, num15real, num15_1real, mult15, num15real, num15_1real, div15);

	printf("\n\n");
	system ("pause");
break;
}
	
case 16: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Escreva um programa que solicite o valor fixo do salário de um vendedor, o total vendido no mês e o percentual \nde comissão do vendedor. Ao final apresentar o salário bruto\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	float salarioFixo16, totalVendMes16, percentComisVendedor16;
	float calcComissao16, comissao16, salarioBruto16;
	printf("Informe o valor fixo do seu salário: ");
	scanf("%f", &salarioFixo16);
	printf("Agora informe o total vendido no mês: ");
	scanf("%f", &totalVendMes16);
	printf("E agora informe o percentual da sua comissão: ");
	scanf("%f", &percentComisVendedor16);
		calcComissao16 = percentComisVendedor16 / 100;
		salarioBruto16 = salarioFixo16 + (totalVendMes16 * calcComissao16);
		printf("->|O seu salário bruto é de: R$%.2f", salarioBruto16);

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
