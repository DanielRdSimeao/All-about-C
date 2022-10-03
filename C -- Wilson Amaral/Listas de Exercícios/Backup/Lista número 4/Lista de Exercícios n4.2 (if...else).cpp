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

int controle;

int main (void) {
	setlocale(LC_ALL, "Portuguese" );
	
	int consulta = 0;
	
	Inicio:
do {
	system("cls || clear");	
	printf("\n *Obs: Esta lista obt�m apenas 41 quest�es! (IF...ELSE)\n *Obs�: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\n Digite qual n�mero da lista deseja consultar: ");
	scanf("%d", &consulta);
	
	
switch (consulta) {
	// Pela lista original a numera��o come�a em 31. Ent�o caso se perca, basta somar +30 ao case desejado.
	// EX.: case 7 + 30 = 37. (VERIFICAR O .PDF)
	
case 1: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois n�meros A e B e imprima o maior deles.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");

	int A, B;
	printf("Digite o valor de A: ");scanf("%i", &A);
	printf("Digite o valor de B: ");scanf("%i", &B);
	if (A > B)
		printf("\n->| %i � o maior n�mero.", A);
	else if (A == B)
		printf("\n->| Ambas as vari�veis valem %i.", A);
	else 
		printf("\n->| %i � o maior n�mero.", B);
		
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um n�mero N e imprima �F1�, �F2� ou �F3�, conforme a condi��o:\n   ->�F1�, se N <= 10\n   ->�F2�, se N > 10 e N <= 100\n   ->�F3�, se N > 100\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");

	int N;
	printf("Digite um n�mero inteiro: "); scanf("%i", &N);
	if (N <= 10)
		printf("\n->| F1.");	
	else if (N > 10 and N <= 100)
		printf("\n->| F2.");
	else
		printf("\n->| F3.");
		
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>O sistema de avalia��o de determinada disciplina, � composto por tr�s provas. A primeira prova tem peso 2, \n   a segunda tem peso 3 e a terceira tem peso 5. Fa�a um algoritmo para calcular a m�dia final de um aluno \n   desta disciplina.\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");

	float nota[4];
	for (controle = 1; controle<=3; controle++){
		printf("Digite a %i� nota: ", controle); scanf("%f", &nota[controle]);
	}
	nota[0] = ((nota[1]*2) + (nota[2]*3) + (nota[3]*5))/10;
	
	if (nota[0] >= 7)
		printf("\n->| Aluno est� aprovado com m�dia %g",nota[0]);
	else
		printf("\n->| Aluno est� de recupera��o com m�dia %g",nota[0]);
		
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Construa um algoritmo que receba como entrada tr�s valores e os imprima em ordem crescente.\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	Repete1:
	float valor[4];
	for (controle = 1; controle<=3; controle++) {
		printf("\n Digite o %i� valor: ", controle); scanf("%f", &valor[controle]);
	}
	
	if  (valor[1] < valor[2] and valor[1] < valor[3])
		if (valor[2] < valor[3])
			printf("\n->| %g, %g, %g.", valor[1], valor[2], valor[3]);
		else
			printf("\n->| %g, %g, %g.", valor[1], valor[3], valor[2]);
			
	if  (valor[2] < valor[1] and valor[2] < valor[3])
		if (valor[1] < valor[3])
			printf("\n->| %g, %g, %g.", valor[2], valor[1], valor[3]);
		else
			printf("\n->| %g, %g, %g.", valor[2], valor[3], valor[1]);
	
	if  (valor[3] < valor[1] and valor[3] < valor[2])
		if (valor[2] < valor[1])
			printf("\n->| %g, %g, %g.", valor[3], valor[2], valor[1]);
		else
			printf("\n->| %g, %g, %g.", valor[3], valor[1], valor[2]);
	
	if (valor[1] == valor[2, 3] and valor[2] == valor[1, 3] and valor[3] == valor[1, 2]) {
		printf("\n->| Os valores informados s�o iguais. Que tal testar com n�meros distintos ??"); Sleep(1500); goto Repete1;
	}
			
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Considere que o �ltimo concurso vestibular apresentou tr�s provas: Portugu�s, Matem�tica e Conhecimentos Gerais. \n   Considerando que para cada candidato tem-se um registro contendo o seu nome e as notas obtidas em cada uma das \n   provas, construa um algoritmo que forne�a:\n   a) o nome e as notas em cada prova do candidato\n   b) a m�dia do candidato\n   c) uma informa��o dizendo se o candidato foi aprovado ou n�o. Considere que um candidato � aprovado se sua m�dia \n      for maior que 7.0 e se n�o apresentou nenhuma nota abaixo de 5.0\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	int candidatos;
	printf("\n Informe o n�mero de candidatos: "); scanf("%i", &candidatos);
	printf("\n");
	char nome[candidatos][50];
	float portugues[candidatos],matematica[candidatos], gerais[candidatos], media[candidatos];
	
	for (controle = 1; controle <= candidatos; controle++) {
		printf("********** DADOS DO(A) %i� CANDIDATO(A) ************\n", controle);
		printf(" Digite seu nome completo: "); scanf (" %[^\n]s", &nome[controle]);
		printf(" Digita sua nota na prova de Portugu�s: "); scanf("%f", &portugues[controle]);
		printf(" Digita sua nota na prova de Matem�tica: "); scanf("%f", &matematica[controle]);
		printf(" Digita sua nota na prova de Conhecimentos Gerais:"); scanf("%f", &gerais[controle]);
		printf("\n");
		media[controle] = (portugues[controle] +  matematica[controle] + gerais[controle]) / 3;	
	}
	
	for (controle = 1; controle <= candidatos; controle++) {
		if (media[controle] >= 7 && portugues[controle] > 5 && matematica[controle] > 5 && gerais[controle] > 5){
			printf("\n");
			printf("\t\nREGISTRO DO(A) %i� CANDIDATO(A)\t", controle);
			printf("\n _____________________________________");
			printf("\n| Nome: %s", nome[controle]);
			printf("\n| M�dia: %g", media[controle]);
			printf("\n| Candidato Aprovado!");
			printf("\n|_____________________________________");
		 }
		 else {
			printf("\n");
			printf("\t\nREGISTRO DO(A) %i� CANDIDATO(A)\t", controle);
			printf("\n _____________________________________");
			printf("\n| Nome: %s", nome[controle]);
			printf("\n| M�dia: %g", media[controle]);
			printf("\n| Candidato Reprovado!");
			printf("\n|_____________________________________");
		}		
	}	
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: { 
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Uma empresa de vendas tem tr�s corretores. A empresa paga ao corretor uma comiss�o calculada de acordo com o valor \n   de suas vendas. Se o valor da venda de um corretor for maior que R$ 50.000.00 a comiss�o ser� de 12 (porcento) do \n   valor vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) a \n   comiss�o ser� de 9.5%%. Em qualquer outro caso, a comiss�o ser� de 7%%. \n\n   =>Escreva um algoritmo que gere um relat�rio contendo nome, valor da venda e comiss�o de cada um dos corretores. \n     O relat�rio deve mostrar tamb�m o total de vendas da empresa.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	char corretores[4][25], valorComis[4][5];
	float vendas[4], comissao[4], total;
	int ele = 3;
	
	for (controle=1; controle<=ele; controle++) {
		printf("\n*Dados do(a) %d corretor(a): ", controle);
		printf("\n\n |Informe o seu nome: "); scanf("%s", &corretores[controle]);
		printf(" |Informe o valor total de suas vendas: "); scanf("%f", &vendas[controle]);
		
		if (vendas[controle] > 50000) {
			strcpy (valorComis[controle], "12%");
			//valorComis[controle] = "12%%";
			comissao[controle] = vendas[controle] + 0.12 * vendas[controle]; // 0.12 == 12%  Sabia que se vc colocar 1.12 voc� n�o precisaria somar a venda a soma j� est� contida na multiplica��o ?
		}																					// Sabia n, insclusive n�o entendi. Como que funciona isso de colocar o "1" no lugar do "0" ?? (1.12 ao �nves de 0.12)
		else if (vendas[controle] >= 30000 && vendas[controle] <= 50000) {
			strcpy (valorComis[controle], "9,5%");
			//valorComis[controle] = "9,5%%";
			comissao[controle] = vendas[controle] + 0.095 * vendas[controle]; // 0.095 == 9,5%
		}
		else {
			strcpy (valorComis[controle], "7%");
			//valorComis[controle] = "7%%";
			comissao[controle] = vendas[controle] + 0.07 * vendas[controle]; // 0.07 == 7%
		}
		total+=comissao[controle];
	}
	for (controle=1; controle<=ele; controle++) {
		printf("\n\n*Informa��es do(a) %d corretor(a): ", controle);
		printf("\n  ________________________________________________");
		printf("\n | Nome: %s.                                      ", corretores[controle]);
		printf("\n | Valor da venda: %g.                            ", vendas[controle]);
		printf("\n | Comiss�o de: %s.                               ", valorComis[controle]);
		printf("\n | Total ganho: %g.                               ", comissao[controle]);
		printf("\n |________________________________________________");
	}
	printf("\n\n->|O total de vendas desta empresa foi de %g reais!!", total);
		
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Escreva um algoritmo que determine o n�mero de dias que uma pessoa j� viveu. Considere que um m�s tenha 30 dias.\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	int idade,dias,meses,opcao;
	printf(" Digite a sua idade:" ); scanf("%i",&idade);
	dias = (idade*12)*30;
	meses = (idade*12);
	printf(" Digite a op��o que deseja ver sua idade em: \n0 - Dias\n1 - Meses. \n"); scanf("%i",&opcao);
	if (opcao)
		printf("\n->| Voc� j� viveu %i meses.",meses);
	else
		printf("\n->| Voc� j� viveu %i dias.",dias);
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia os valores A, B e C. Mostre uma mensagem que informe se a soma de A com B � \n   menor, maior ou igual a C.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	float ABC[4], soma=0;
	for (controle=1; controle<=3; controle++) {
		printf("Digite o %d� valor: ", controle); scanf("%f", &ABC[controle]);
	soma = ABC[1] + ABC[2];
	}
	
	if (soma < ABC[3])
		printf("\n->|A soma de '%g' com '%g' � menor que o terceiro valor informado (%g).", ABC[1], ABC[2], ABC[3]);
	else if (soma > ABC[3])
		printf("\n->|A soma de '%g' com '%g' � maior que o terceiro valor informado (%g).", ABC[1], ABC[2], ABC[3]);
	else
		printf("\n->|A soma de '%g' com '%g' � igual ao terceiro valor informado (%g).", ABC[1], ABC[2], ABC[3]);
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais. Considerando que algu�m est� pagando \n   uma compra, escreva um algoritmo que mostre o n�mero m�nimo de notas que o caixa deve fornecer como troco. \n   Mostre tamb�m: o valor da compra, o valor do troco e a quantidade de cada tipo de nota do troco. \n   Suponha que o sistema monet�rio n�o utilize moedas.\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	int Notas_1, Notas_10, Notas_100, preco, valorPago, troco;
	printf(" Digite o valor do produto: "); scanf("%i", &preco);
	printf(" Digite o valor de pagamento: "); scanf("%i", &valorPago);
	troco = valorPago - preco;
	
	if (valorPago < preco)
		printf("\n->| Valor insuficiente para compra.");
	else if (valorPago == preco)
		printf("\n->| Troco � de R$ 0,00.");
	else {
		Notas_100 = troco/100;
		Notas_10 = troco/10;
		Notas_1 = troco;
		printf("\n->| Troco em notas de 100: %i.", Notas_100);
		printf("\n->| Troco em notas de 10: %i.", Notas_10);
		printf("\n->| Troco em notas de 1: %i.", Notas_1);	
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");
printf("\n%d� Exerc�cio proposto:\n==>Uma empresa produz tr�s tipos de pe�as mec�nicas: parafusos, porcas e arruelas. T�m-se os pre�os unit�rios \n   de cada tipo de pe�a e sabe-se que sobre estes pre�os incidem descontos de 10%% para porcas, \n   20%% para parafusos e 30%% para arruelas. Escreva um algoritmo que calcule o valor total \n   da compra de um cliente. Deve ser mostrado o nome do cliente. O n�mero de cada tipo de pe�a que o mesmo \n   comprou, o total de desconto e o total a pagar pela compra.\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	int qtdClientes, opcao, opcao2;
	float parafusos=0.50, porcas=0.25, arruelas=0.80;
	
	printf(" Digite quantos clientes ser�o atendidos: "); scanf("%d", &qtdClientes);
	char nome[qtdClientes][50];
	
	int qtdParafusos[qtdClientes], qtdPorcas[qtdClientes], qtdArruelas[qtdClientes];
	float SemdesParafuso[qtdClientes], SemdesPorcas[qtdClientes], SemdesArruelas[qtdClientes],TParafusos[qtdClientes], TPorcas[qtdClientes], TArruelas[qtdClientes];
	
	// RECEBER OS DADOS dos clientes.
	for (controle=1; controle<=qtdClientes; controle++) {
		// 3 linhas a seguir servem para LIMPAR o lixo de mem�ria destes vetores. 
		qtdParafusos[controle] = 0;
		qtdPorcas[controle] = 0;
		qtdArruelas[controle] = 0;
		
		printf("\n***************** %d� Cliente *****************\n", controle);
		printf(" Digite o nome do Cliente: "); scanf(" %[^\n]s", &nome[controle]);
		RepeteQ10:
		printf("\n | 1 - Parafusos - Unidade R$ 0,50\n | 2 - Porcas - Unidade R$ 0,25\n | 3 - Arruelas - Unidade R$ 0,80\n");
		printf("\n Digite a op��o desejada: "); scanf("%d", &opcao);
		
				
		if (opcao == 1) {
			printf(" Digite a quantidade de parafusos: "); scanf("%d", &qtdParafusos[controle]);
			TParafusos[controle] = (parafusos * qtdParafusos[controle]) * 0.20;
			TParafusos[controle] = (parafusos * qtdParafusos[controle]) - TParafusos[controle];
	
			printf("\n Deseja acrescentar algo mais ?\n 0 - N�o\n 1 - Sim\n Escolha: "); scanf("%d", &opcao2);	
				if (opcao2) {
					goto RepeteQ10;
				}
		}
		if (opcao == 2) {
			printf(" Digite a quantidade de porcas: "); scanf("%d", &qtdPorcas[controle]);
			TPorcas[controle] = (porcas * qtdPorcas[controle]) * 0.10;
			TPorcas[controle] = (porcas * qtdPorcas[controle]) - TPorcas[controle];
	
			printf("\n Deseja acrescentar algo mais ?\n 0 - N�o\n 1 - Sim\n Escolha: "); scanf("%d", &opcao2);
				if (opcao2) {
					goto RepeteQ10;
				}	
		}
		if (opcao == 3) {
			printf(" Digite a quantidade de arruelas: "); scanf("%d", &qtdArruelas[controle]);
			TArruelas[controle] = (arruelas * qtdArruelas[controle]) * 0.30;
			TArruelas[controle] = (arruelas * qtdArruelas[controle]) - TArruelas[controle];
	
			printf("\n Deseja acrescentar algo mais ?\n 0 - N�o\n 1 - Sim\n Escolha: "); scanf("%d", &opcao2);
				if (opcao2) {
					goto RepeteQ10;
				}
		}
		if (opcao > 3 or opcao < 0){
			printf("\nOp��o inv�lida tente novamente.\n"); Sleep(1500);goto RepeteQ10;
		}
	}
			
	// MOSTRAR OS DADOS dos clientes.
	textColor(WHITE);
	for (controle=1; controle<=qtdClientes; controle++){
		printf("\n ***************** %d� Cliente *****************\n", controle);
		printf("\n ->|Cliente: %s\n", nome[controle]);
		
		if (qtdParafusos[controle] > 0) {
			SemdesParafuso[controle] = (parafusos * qtdParafusos[controle]);
			
			textColor(RED);
			printf("\n ->|Valor dos parafusos sem desconto: R$ %.2f.", SemdesParafuso[controle]);
			
			textColor(GREEN);
			printf("\n ->|Valor dos parafusos com desconto: R$ %.2f.\n", TParafusos[controle]);
		}
		else {
			textColor(YELLOW);
			printf("\n ->|N�o foram escolhidos parafusos\n");
		}
		
		if (qtdPorcas[controle] > 0) {
			SemdesPorcas[controle] = (porcas * qtdPorcas[controle]);
			
			textColor(RED);	
			printf("\n ->|Valor das porcas sem desconto: R$ %.2f.", SemdesPorcas[controle]);
			textColor(GREEN);
			printf("\n ->|Valor das porcas com desconto: R$ %.2f.\n", TPorcas[controle]);			
		}
		else {
			textColor(YELLOW);
			printf("\n ->|N�o foram escolhidos porcas\n");
		}
		
		if (qtdArruelas[controle] > 0) {
			SemdesArruelas[controle] = (arruelas * qtdArruelas[controle]); 
			
			textColor(RED);
			printf("\n ->|Valor das arruelas sem desconto: R$ %.2f.", SemdesArruelas[controle]);
			
			textColor(GREEN);		
			printf("\n ->|Valor das arruelas com desconto: R$ %.2f.\n", TArruelas[controle]);
		}
		else {
			textColor(YELLOW);
			printf("\n ->|N�o foram escolhidos arruelas\n");
		}
		
		textColor(RED);
		printf("\n ->|Total sem desconto: R$ %.2f.", (SemdesParafuso[controle]+SemdesPorcas[controle]+SemdesArruelas[controle]));
		
		textColor(GREEN);
		printf("\n ->|Total de desconto: R$ %.2f.", (SemdesParafuso[controle]+SemdesPorcas[controle]+SemdesArruelas[controle]) - (TParafusos[controle]+TPorcas[controle]+TArruelas[controle]));
		printf("\n ->|Total a pagar com desconto: R$ %.2f.", TParafusos[controle]+TPorcas[controle]+TArruelas[controle]);
		
		textColor(WHITE);
		printf("\n\n **********************************************\n");
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>A revendedora de carros Pica-Pau Ltda. paga aos seus funcion�rios vendedores\n   dois sal�rios m�nimos fixos, mais uma comiss�o fixa de R$ 50,00 por carro\n   vendido e mais 5%% do valor das vendas. Fa�a um algoritmo que determine o\n   sal�rio total de um vendedor.\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	float salarioFixo=2424, salarioTotal;
	int comissao = 50, qtdCarros;
	
	printf(" Digite a quantiade de carros vendidos: "); scanf("%i", &qtdCarros);
	salarioTotal = (qtdCarros*comissao)*1.05 + salarioFixo;
	
	printf("\n->| O sal�rio total do vendedor �: R$ %.2f.", salarioTotal);
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");
printf("\n%d� Exerc�cio proposto:\n==>Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se\n   nome, pre�o e percentual de desconto. Fa�a um algoritmo que imprima nome,\n   pre�o e pre�o com desconto de cada artigo e o total a pagar.\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	printf(" ... Como socilitado no enunciado. Uma pessoa comprou quatro artigos de uma loja\n(n�o foram definidos quais artigos, ent�o eu mesmo os criei. Assim como os pre�os e os descontos).");
	printf("\n\n 1� Artigo: Kit Sobreviv�ncia na Selva - Elite.             \n\tValor: R$181,90 -> Com desconto de 10%% comprando � vista: R$163,71");
	printf("\n\n 2� Artigo: Camiseta Militar Camuflada Ex�rcito Brasileiro. \n\tValor: R$60,90  -> Com desconto de 10%% comprando � vista: R$54,81");
	printf("\n\n 3� Artigo: Coldre Administrativo TS9.                      \n\tValor: R$85,90  -> Com desconto de 10%% comprando � vista: R$77,31");
	printf("\n\n 4� Artigo: Gandola Assault + Cal�a Combat - B�lica.        \n\tValor: R$340,90 -> Com desconto de 10%% comprando � vista: R$306,81");
	
	printf("\n\n Fazendo a compra dos 4 Artigos esta pessoa ir� pagar um total de:\n 1� op��o, � vista: R$602,64. (Economiza R$66,96 reais)\n 2� op��o, parcelado: R$669,60.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Uma empresa ir� dar um aumento de sal�rio aos seus funcion�rios de acordo\n   com a categoria de cada empregado. O aumento seguir� a seguinte regra:\n   ->Funcion�rios das categorias A, C, F, e H ganhar�o 10%% de aumento sobre o sal�rio;\n   ->Funcion�rios das categorias B, D, E, I, J e T ganhar�o 15%% de aumento sobre o sal�rio;\n   ->Funcion�rios das categorias K e R ganhar�o 25%% de aumento sobre o sal�rio;\n   ->Funcion�rios das categorias L, M, N, O, P, Q e S ganhar�o 35%% de aumento sobre o sal�rio;\n   ->Funcion�rios das categorias U, V, X, Y, W e Z ganhar�o 50%% de aumento sobre o sal�rio.\n\n   =>Fa�a um algoritmo que escreva nome, categoria e sal�rio reajustado de cada empregado.\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	int qtdFuncionario;
	float cat10 = 1.1, cat15 = 1.15, cat25 = 1.25, cat35 = 1.35, cat50 = 1.50;
	
	printf("\n Digite a quantidade de funcion�rios da empresa: "); scanf("%i",&qtdFuncionario);
	printf("\n");
	char nomeFuncionario [qtdFuncionario][50];
	char categoria[qtdFuncionario];
	float salarioFinal[qtdFuncionario],salarioBruto[qtdFuncionario];
	
	for (controle=1; controle<=qtdFuncionario; controle++ ){
		printf(" Digite o nome completo do(a) funcion�rio(a): "); scanf(" %[^\n]s",&nomeFuncionario[controle]);
		printf(" Digite sua categoria: "); scanf(" %c",&categoria[controle]);
		printf(" Digite o seu sal�rio bruto: "); scanf("%f",&salarioBruto[controle]);
		printf("\n");
		
		if (categoria[controle] == 'A' or categoria[controle] == 'C' or categoria[controle] == 'F' or categoria[controle] == 'H' or categoria[controle] == 'a' or categoria[controle] == 'c' or categoria[controle] == 'f' or categoria[controle] == 'h') 
			salarioFinal[controle] = salarioBruto[controle]*cat10;
		
		if (categoria[controle] == 'B' or categoria[controle] == 'D' or categoria[controle] == 'E' or categoria[controle] == 'I' or categoria[controle] == 'J' or categoria[controle] == 'T' or categoria[controle] == 'b' or categoria[controle] == 'd' or categoria[controle] == 'e' or categoria[controle] == 'i' or categoria[controle] == 'j' or categoria[controle] == 't')
			salarioFinal[controle] = salarioBruto[controle]*cat15;
	
		if (categoria[controle] == 'K' or categoria[controle] == 'R' or categoria[controle] == 'k' or categoria[controle] == 'r')	
			salarioFinal[controle] = salarioBruto[controle]*cat25;
			
		if (categoria[controle] == 'L' or categoria[controle] == 'M' or categoria[controle] == 'N' or categoria[controle] == 'O' or categoria[controle] == 'P' or categoria[controle] == 'Q' or categoria[controle] == 'S' or categoria[controle] == 'l' or categoria[controle] == 'm' or categoria[controle] == 'n' or categoria[controle] == 'o' or categoria[controle] == 'p' or categoria[controle] == 'q' or categoria[controle] == 's')
			salarioFinal[controle] = salarioBruto[controle]*cat35;
			
		if (categoria[controle] == 'U' or categoria[controle] == 'V' or categoria[controle] == 'X' or categoria[controle] == 'Y' or categoria[controle] == 'W' or categoria[controle] == 'Z' or categoria[controle] == 'u' or categoria[controle] == 'v' or categoria[controle] == 'x' or categoria[controle] == 'y' or categoria[controle] == 'w' or categoria[controle] == 'z')
			salarioFinal[controle] = salarioBruto[controle]*cat50;
	}
		
	for (controle=1; controle<=qtdFuncionario; controle++ ){
		printf("\n ______________________________________");
		printf("\n| Nome: %s. ", nomeFuncionario[controle]);
		printf("\n| Categoria: %c", categoria[controle]);
		printf("\n| Sal�rio Reajustado: R$ %.2f ", salarioFinal[controle]);
		printf("\n|______________________________________");
	}
		
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Uma sorveteria vende tr�s tipos de picol�s. Sabendo-se que o picol� do tipo 1 �\n   vendido por R$ 0.50, o do tipo 2 por R$ 0.60 e o do tipo 3 por R$ 0.75, fa�a um\n   algoritmo que, para cada tipo de picol�, mostre a quantidade vendida e o total\n   arrecadado\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	float arrecadacao;
	int qtdPicole, tipo1=0, tipo2=0, tipo3=0, tipo;
	printf(" Digite a quantidades de picol�s: "); scanf("%i", &qtdPicole);
	
	for (controle=1; controle<=qtdPicole; controle++) {
		printf(" Digite qual tipo de picol� deseja: "); scanf("%i",&tipo);
		
		if (tipo == 1)
			tipo1++;
	 	else if ( tipo == 2)
			tipo2++;
		else
			tipo3++;
	}
	
	arrecadacao = (tipo1*0.5) + (tipo2*0.6) + (tipo3*0.75);
	
	printf("\n ________________ TOTAL DE PICOL�S _________________");
	printf("\n->| Total de picol�s tipo 1: %i. Valor: R$ %.2f.",tipo1,tipo1*0.5);
	printf("\n->| Total de picol�s tipo 2: %i. Valor: R$ %.2f.",tipo2,tipo2*0.6);
	printf("\n->| Total de picol�s tipo 3: %i. Valor: R$ %.2f.",tipo3, tipo3*0.75);
	printf("\n->| Total de picol�s:  %i. Valor: R$ %.2f.",tipo1+tipo2+tipo3, arrecadacao);
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Escreva um algoritmo que, para uma conta banc�ria, leia o seu n�mero, o saldo,\n   o tipo de opera��o a ser realizada (dep�sito ou retirada) e o valor da opera��o.\n   Ap�s, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser\n   mostrada, tamb�m, a mensagem �conta estourada�.\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	int operacao;
	float saldo,valorOperacao,novoSaldo;
	char conta[8];
	
	printf(" Digite a sua conta banc�ria: "); scanf("%s",&conta);
	printf(" Digite o saldo da conta: "); scanf("%f",&saldo);
	printf("\n OPERA��ES NESSE CAIXA");
	printf("\n |0 - Dep�sito\n |1 - Retirada");
	printf("\n");
	printf(" \n Digite o valor da opera��o: "); scanf("%i",&operacao);
	
	if (operacao){
		printf("\n Digite quanto deseja retirar: "); scanf ("%f",&valorOperacao);
		novoSaldo = saldo - valorOperacao;	
		if (valorOperacao > saldo){
			printf("\n->| Saldo insuficiente para retirada.");
		}else
			printf("\n->| Seu novo saldo �: R$ %.2f.",novoSaldo);
	}else{
		printf("\n Digite quanto deseja depositar: "); scanf("%f",&valorOperacao);
		novoSaldo = saldo + valorOperacao;
		printf("\n->| Seu novo saldo �: R$ %.2f.",novoSaldo);
	}
		
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Um hotel cobra R$ 60.00 a di�ria e mais uma taxa de servi�os. A taxa de servi�os � de:\n   ->R$ 5.50 por di�ria, se o n�mero de di�rias for maior que 15;\n   ->R$ 6.00 por di�ria, se o n�mero de di�rias for igual a 15;\n   ->R$ 8.00 por di�ria, se o n�mero de di�rias for menor que 15.\n\n   =>Construa um algoritmo que mostre o nome e o total da conta de um cliente.\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	int qtdClientes, dias[qtdClientes];
	char nome[qtdClientes][50];
	float diaria = 60, conta[qtdClientes], maior15 = 5.5 , igual15 = 6, menor15 = 8;
	
	printf(" Digite a quantidade de hospedes: "); scanf("%i", &qtdClientes);
	
	for (controle = 1; controle <= qtdClientes; controle++){
		printf("\n Hospede %i\nDigite o seu nome completo: ",controle); scanf(" %[^\n]s",&nome[controle]);
		printf(" Digite quantos dias ir� se hospedar: "); scanf("%i",&dias[controle]);
		
		if (dias[controle] > 15)
			conta[controle] = (dias[controle] * maior15) + (diaria*dias[controle]);
		else if (dias[controle] == 15)
			conta[controle] = (dias[controle] * igual15) + (diaria*dias[controle]);
		else 
			conta[controle] = (dias[controle] * menor15) + (diaria*dias[controle]);
	}
	
	for (controle = 1; controle <= qtdClientes; controle++){
		printf(" \n\n   ________________ HOSPEDE %i ________________ ",controle);
		printf("\n->| Nome do hospede: %s",nome[controle]);
		
		if (dias[controle] > 15)
			printf("\n->| Valor da taxa de servi�o: %.2f",maior15);
		else if (dias[controle] == 15)
			printf("\n->| Valor da taxa de servi�o: %.2f",igual15);
		else 
			printf("\n->| Valor da taxa de servi�o: %.2f",menor15);
	 	printf("\n->| Valor da di�ria: %.2f",diaria);
		printf("\n->| Total a pagar: R$ %.2f.",conta[controle]);
		printf("\n  |__________________________________________");
	}

	printf("\n\n");
	system ("pause");
break;
}


case 17: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Construir um algoritmo que tome como entradas tr�s valores distintos e os\n   apresente (imprima) em ordem decrescente (maior para o menor).\n", consulta);
printf("\n========================================\n=================  17  =================\n========================================\n");
	
	Repete2:
	float valor[4];
	for (controle = 1; controle<=3; controle++) {
		printf("\n Digite o %i� valor: ", controle); scanf("%f", &valor[controle]);
	}

	if  (valor[1] > valor[2] and valor[1] > valor[3])
		if (valor[2] > valor[3])
			printf("\n->| %g, %g, %g.", valor[1], valor[2], valor[3]);
		else
			printf("\n->| %g, %g, %g.", valor[1], valor[3], valor[2]);
			
	if  (valor[2] > valor[1] and valor[2] > valor[3])
		if (valor[1] > valor[3])
			printf("\n->| %g, %g, %g.", valor[2], valor[1], valor[3]);
		else
			printf("\n->| %g, %g, %g.", valor[2], valor[3], valor[1]);
	
	if  (valor[3] > valor[1] and valor[3] > valor[2])
		if (valor[2] > valor[1])
			printf("\n->| %g, %g, %g.", valor[3], valor[2], valor[1]);
		else
			printf("\n->| %g, %g, %g.", valor[3], valor[1], valor[2]);
	
	if (valor[1] == valor[2, 3] and valor[2] == valor[1, 3] and valor[3] == valor[1, 2]) {
		printf("\n->| Os valores informados s�o iguais. Que tal testar com n�meros distintos ??"); Sleep(1500); goto Repete2;
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 18: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia 3 n�meros inteiros distintos e escreva o menor deles. \n", consulta);
printf("\n========================================\n=================  18  =================\n========================================\n");
	
	Repete3:
	int valor[4];
	for (controle = 1; controle<=3; controle++) {
		printf("\n Digite o %i� valor: ", controle); scanf("%i", &valor[controle]);
	}

	if  (valor[1] > valor[2] and valor[1] > valor[3])
			printf("\n->| O maior n�mero �: %i.", valor[1]);
	else{
		if  (valor[2] > valor[1] and valor[2] > valor[3])
			printf("\n->| O maior n�mero �: %i.", valor[2]);
		else{
			if 	(valor[3] > valor[1] and valor[3] > valor[2])
				printf("\n->| O maior n�mero �: %i.", valor[3]);
			else{
				if (valor[1] == valor[2, 3] and valor[2] == valor[1, 3] and valor[3] == valor[1, 2]) { 
					printf("\n->| Os valores informados s�o iguais. Que tal testar com n�meros distintos ??"); Sleep(1500); goto Repete3;
				}
			}
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 19: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos\n   lados de um tri�ngulo, e se forem, verificar se � um tri�ngulo equil�tero, is�scele\n   ou escaleno. Se eles n�o formarem um tri�ngulo, escrever uma mensagem.\n   Antes da elabora��o do algoritmo, torna-se necess�rio a revis�o de algumas propriedades e defini��es.\n\n   Propriedade � o comprimento de cada lado de um tri�ngulo � menor do que a soma dos comprimentos dos \n                 outros dois lados.\n   Defini��o 1 - chama-se de tri�ngulo equil�tero o que tem os comprimentos dos tr�s lados iguais;\n   Defini��o 2 - chama-se de tri�ngulo is�scele o tri�ngulo que tem os comprimentos de dois lados iguais;\n   Defini��o 3 - chama-se tri�ngulo escaleno o tri�ngulo que tem os comprimentos dos tr�s lados diferentes.\n", consulta);
printf("\n========================================\n=================  19  =================\n========================================\n");
	
	Repete4:
	float X[4];
	for (controle=1; controle<=3; controle++) {
		printf(" Digite o %i� lado do tri�ngulo: ",controle); scanf("%f",&X[controle]);
	}
	
	if (X[1] > X[2]+X[3] or X[2] > X[1]+X[3] or X[3] > X[1]+X[2]) {
		printf("\n->| As medidas fornecidas n�o formam um tri�ngulo. Tente novamente...\n\n"); Sleep(1500); goto Repete4;
	}
	else {
		if (X[1] == X[2] and X[1] == X[3])
			printf("\n->| Tri�ngulo Equil�tero.");
		else if (X[1] == X[2] or X[1] == X[3] or X[2] == X[3])
			printf("\n->| Tri�ngulo Is�sceles.");
		else 
			printf("\n->| Tri�ngulo Escaleno.");
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 20: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Suponha que o conceito de um aluno seja determinado em fun��o da sua nota.\n   Suponha, tamb�m, que esta nota seja um valor inteiro na faixa de 0 a 100,\n   conforme a seguinte faixa:\n    Nota \tConceito\n    0 a 49 \tInsuficiente\n    50 a 64 \tRegular\n    65 a 84 \tBom\n    85 a 100 \t�timo\n\n   =>Crie um algoritmo que apresente o conceito e a nota do aluno.\n", consulta);
printf("\n========================================\n=================  20  =================\n========================================\n");
	
	int qtdAlunos;
	printf("Digite a quantidade de alunos: "); scanf("%i",&qtdAlunos);
	int nota[qtdAlunos];
	for (controle = 1; controle <=qtdAlunos; controle++ ){
		Repete5:
		printf("\nDigite a nota do %i� aluno: ",controle); scanf("%i",&nota[controle]);
		
		if (nota[controle] < 0 or nota[controle] > 100){
			printf("\nNota inv�lida tente novamente...\n"); Sleep (1500); goto Repete5;
		}
	}	
	
	for (controle = 1; controle <=qtdAlunos; controle++ ){
		if (nota[controle] >= 0 and nota[controle] <=49)
			printf("\n->| %i aluno nota: INSUFICIENTE.",controle);
			
		else if (nota[controle] >= 50 and nota[controle] <= 64)
			printf("\n->| %i aluno nota: REGULAR.",controle);
			
		else if (nota[controle] >= 65 and nota[controle] <= 84)
			printf("\n->| %i aluno nota: BOM.",controle);
			
		else if (nota[controle] >= 85 and nota[controle] <= 100)
			printf("\n->| %i aluno nota: �TIMO.",controle);
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 21: { 
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois n�meros e mostre qual o maior dos dois.\n", consulta);
printf("\n========================================\n=================  21  =================\n========================================\n");
	
	Repete6:
	float num[3];
		for (controle=1; controle<=2; controle++){
			printf(" Digite o %i� n�mero: ", controle); scanf("%f", &num[controle]);
		}
		
		if (num[1] > num[2])
			printf("\n->| %g � o maior n�mero digitado.", num[1]);
		else if (num[2] > num[1])
			printf("\n->| %g � o maior n�mero digitado.", num[2]);
		else{
			printf("\n->| Os n�meros s�o iguais. Que tal tentar com n�meros distintos?\n\n"); Sleep (1500); goto Repete6;
		}
		
	printf("\n\n");
	system ("pause");
break;
}


case 22: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois n�meros e indique se s�o iguais ou se s�o\n   diferentes. Mostre o maior e o menor (nesta sequ�ncia).\n", consulta);
printf("\n========================================\n=================  22  =================\n========================================\n");
	
	float num[3];
		for (controle=1; controle <=2;controle++){
			printf(" Digite o %i� n�mero: ",controle); scanf("%f",&num[controle]);
		}
		
		if (num[1] > num[2])
			printf("\n->| %g � o maior e %g � o menor n�mero digitado",num[1],num[2]);
		else if (num[2] > num[1])
			printf("\n->| %g � o maior e %g � o menor n�mero digitado.",num[2],num[2]);
		else{
			printf("\n->| Os n�meros s�o iguais."); 
		}
	
	printf("\n\n");
	system ("pause");
break;
}


case 23: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia tr�s n�meros e mostre-os em ordem decrescente.\n", consulta);
printf("\n========================================\n=================  23  =================\n========================================\n");
	
	Repete7:
	float valor[4];
	for (controle = 1; controle<=3; controle++) {
		printf("\n Digite o %i� valor: ", controle); scanf("%f", &valor[controle]);
	}

	if  (valor[1] > valor[2] and valor[1] > valor[3])
		if (valor[2] > valor[3])
			printf("\n->| %g, %g, %g.", valor[1], valor[2], valor[3]);
		else
			printf("\n->| %g, %g, %g.", valor[1], valor[3], valor[2]);
			
	if  (valor[2] > valor[1] and valor[2] > valor[3])
		if (valor[1] > valor[3])
			printf("\n->| %g, %g, %g.", valor[2], valor[1], valor[3]);
		else
			printf("\n->| %g, %g, %g.", valor[2], valor[3], valor[1]);
	
	if  (valor[3] > valor[1] and valor[3] > valor[2])
		if (valor[2] > valor[1])
			printf("\n->| %g, %g, %g.", valor[3], valor[2], valor[1]);
		else
			printf("\n->| %g, %g, %g.", valor[3], valor[1], valor[2]);
	
	if (valor[1] == valor[2, 3] and valor[2] == valor[1, 3] and valor[3] == valor[1, 2]) {
		printf("\n->| Os valores informados s�o iguais. Que tal testar com n�meros distintos ??"); Sleep(1500); goto Repete7;
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 24: {


system("cls || clear");
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia quatro n�meros (Op��o , Num1 , Num2 e Num3) e\n   mostre o valor de Num1 se Op��o for igual a 2; o valor de Num2 se Op��o for\n   igual a 3; e o valor de Num3 se Op��o for igual a 4. Os �nicos valores poss�veis\n   para a vari�vel Op��o s�o 2, 3 e 4.\n", consulta);
printf("\n========================================\n=================  24  =================\n========================================\n");
	
	int opcao;
	float num1[4];
	printf("\n Digite a op��o desejada: "); scanf("%i", &opcao);
	printf("\n");
	for (controle=1; controle<=3; controle++){
		printf(" Digite o %i� n�mero: ", controle); scanf("%f", &num1[controle]);
	}
	
	Repete8:
	if (opcao == 2)
		printf("\n->| Voc� escolheu o 1� n�mero que �: %g.", num1[1]);
	else if (opcao == 3)
		printf("\n->| Voc� escolheu o 2� n�mero que �: %g.", num1[2]);
	if (opcao == 4)
		printf("\n->| Voc� escolheu o 3� n�mero que �: %g.", num1[3]);
	if (opcao != 2 and opcao != 3 and opcao != 4 ) {
		printf("\n->| Op��o inv�lida! Que tal tentar de novo...\n"); 
		printf("\n Digite a op��o desejada: "); scanf("%i", &opcao); Sleep(1500); goto Repete8;
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 25: {
system("cls || clear");
printf("\n%d� Exerc�cio proposto:\n==>Calcule a m�dia aritm�tica das tr�s notas de um aluno e mostre, al�m do valor da m�dia, \n   uma mensagem de 'Aprovado', caso a m�dia seja igual ou superior a 7;\n   a mensagem 'em prova final' caso a m�dia seja menor que 7 e maior ou igual a 4;\n   e 'reprovado', caso contr�rio.\n", consulta);
printf("\n========================================\n=================  25  =================\n========================================\n");
	
	float notas[4], somaNotas=0, mediaArit=0;
	for (controle=1; controle<=3; controle++) {
		printf(" Digite a %d� nota: ", controle); scanf("%f", &notas[controle]);
		
		// As 3 pr�ximas linhas usando somente 1 vari�vel ou a 4� e 6� linha usando 2 vari�veis.
		mediaArit = mediaArit + notas[controle];
		if (controle == 3)
			mediaArit = mediaArit/3;
		//somaNotas = somaNotas + notas[controle];
	}
	//mediaArit = somaNotas/3;
	
	if (mediaArit >= 7)
		printf(" \n->|Aluno(a) Aprovado(a). Obeteve uma m�dia de %.2f", mediaArit);
	else if (mediaArit < 7 and mediaArit >= 4)
		printf(" \n->|Aluno(a) foi para a prova final (recupera��o). Obeteve uma m�dia de %.2f", mediaArit);
	else
		printf(" \n->|Aluno(a) Reprovado(a). Obeteve uma m�dia de %.2f", mediaArit);
	
	printf("\n\n");
	system ("pause");
break;
}


case 26: {
system("cls || clear");
printf("\n%d� Exerc�cio proposto:\n==>Elaborar um algoritmo que l� tr�s valores a, b, c e os escreve. A seguir, encontre\n   o maior dos tr�s valores e o escreva com a mensagem : '� o maior'.\n", consulta);
printf("\n========================================\n=================  26  =================\n========================================\n");
	
	float valores[4];
	for (controle=1; controle<=3; controle++) {
		printf(" Digite o %d� valor: ", controle); scanf("%f", &valores[controle]);
	}
	
	if (valores[1] > valores[2, 3])
		printf(" ->|%g � o maior.", valores[1]);
	else if (valores[2] > valores[1, 3])
		printf(" ->|%g � o maior.", valores[2]);
	else
		printf(" ->|%g � o maior.", valores[3]);
	
	printf("\n\n");
	system ("pause");
break;
}


case 27: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elaborar um algoritmo que l� dois valores a e b e os escreve com a mensagem:\n   'S�o m�ltiplos' ou 'N�o s�o m�ltiplos'.\n", consulta);
printf("\n========================================\n=================  27  =================\n========================================\n");
	
	printf(" N�o ficou '�bvio' qual deveria ser o m�ltiplo, ent�o decidi verificar se o 1� n�mero � m�ltiplo do 2� n�mero.\n\n");
	
	int multiplos[3];
	for (controle=1; controle<=2; controle++) {
		printf(" Digite o %d� n�mero: ", controle); scanf("%d", &multiplos[controle]);
	}
	if (multiplos[1] % multiplos[2] == 0)
		printf(" ->|S�o m�ltiplos.");
	else
		printf(" ->|N�o s�o m�ltiplos.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 28: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Escreva um algoritmo que leia o c�digo de um aluno e suas tr�s notas. Calcule a\n   m�dia ponderada do aluno, considerando que o peso para a maior nota seja 4 e\n   para as duas restantes, 3. Mostre o c�digo do aluno, suas tr�s notas, a m�dia\n   calculada e uma mensagem: 'APROVADO' se a m�dia for maior ou igual a 5 e\n   'REPROVADO' se a m�dia for menor que 5.\n", consulta);
printf("\n========================================\n=================  28  =================\n========================================\n");
	
	double codigo;
	float notas[3], mediaPond=0;
	printf(" Digite o seu c�digo/matricula: "); scanf("%lf", &codigo);
	
	for (controle=1; controle<=3; controle++) {
		printf(" Digite a %d� nota: ", controle); scanf("%f", &notas[controle]);
	}
	
	if (notas[1] > notas[2] and notas[1] > notas[3])
		mediaPond = (notas[1] * 4 + notas[2] * 3 + notas[3] * 3) / 10;
	else if (notas[2] > notas[1] and notas[2] > notas[3])
		mediaPond = (notas[2] * 4 + notas[1] * 3 + notas[3] * 3) / 10;
	else if (notas[3] > notas[2] and notas[3] > notas[2])
		mediaPond = (notas[3] * 4 + notas[1] * 3 + notas[2] * 3) / 10;
	
	printf("\n  C�digo do(a) aluno(a): %.15g", codigo);
	if (mediaPond >= 5)
		printf("\n ->|Aluno(a) Aprovado(a). Suas notas foram %g, %g e %g.\n ->|Obeteve uma m�dia de %g.", notas[1], notas[2], notas[3], mediaPond);
	else
		printf("\n ->|Aluno(a) Aprovado(a). Suas notas foram %g, %g e %g.\n ->|Obeteve uma m�dia de %g.", notas[1], notas[2], notas[3], mediaPond);
	
	printf("\n\n");
	system ("pause");
break;
}


case 29: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem\n   indicando se este n�mero � par ou �mpar e se � positivo ou negativo.\n", consulta);
printf("\n========================================\n=================  29  =================\n========================================\n");
	
	int numero;
	printf(" Digite um n�mero para fazer a verifica��o: "); scanf("%d", &numero);
	
	if (numero % 2 == 0)
		if (numero > 0)
			printf("\n ->|Este n�mero � par e positivo.");
		else
			printf("\n ->|Este n�mero � par e negativo.");	
	else if (numero % 2 != 0)
		if (numero > 0)
			printf("\n ->|Este n�mero � �mpar e positivo.");
		else
			printf("\n ->|Este n�mero � �mpar e negativo.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 30: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>O card�pio de uma lanchonete � o seguinte:\n\n    C�digo \tEspecifica��o \t\tPre�o unit�rio\n    100 \tCachorro quente \t1,10\n    101 \tBauru simples \t\t1,30\n    102 \tBauru c/ovo \t\t1,50\n    103 \tHamburger \t\t1,10\n    104 \tCheeseburger \t\t1,30\n    105 \tRefrigerante \t\t1,00\n\n   =>Escrever um algoritmo que leia o c�digo do item pedido, a quantidade e calcule\n     o valor a ser pago por aquele lanche. Considere que a cada execu��o somente\n     ser� calculado um item.\n", consulta);
printf("\n========================================\n=================  30  =================\n========================================\n");
	
	printf("Obs: O carc�pio n�o foi adicionado pois no enunciado o mesmo j� est� inscluso de forma leg�vel!");
	
	int codigo, qtd;
	float pagar;	
	printf("\n\n Por favor digite o c�digo do item: "); scanf("%d", &codigo);
	printf(" Agora digite a quantidade desejada: "); scanf("%d", &qtd);
	
	// Daria para fazer de outra maneira, sem usar a vari�vel "pagar", por�m acho mais organizado desta maneira.
	if (codigo == 100 or codigo == 103)
		pagar = 1.10 * qtd;
	else if (codigo == 101 or codigo == 104)
		pagar = 1.30 * qtd;
	else if (codigo == 102)
		pagar = 1.50 * qtd;
	else if (codigo == 105)
		pagar = 1.00 * qtd;

	printf(" ->|O valor a ser pago pela quantidade escolhida do item � R$%g", pagar);
	
	printf("\n\n");
	system ("pause");
break;
}


case 31: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Um usu�rio deseja um algoritmo pelo qual possa escolher que tipo de m�dia\n   deseja calcular a partir de tr�s notas. Fa�a um algoritmo que leia as notas, a\n   op��o escolhida pelo usu�rio e calcule a m�dia:\n   1- aritm�tica\n   2- ponderada (pesos 3, 3, 4)\n", consulta);
printf("\n========================================\n=================  31  =================\n========================================\n");
	
	int escolha;
	float notas[4];	
	for (controle=1; controle<=3; controle++) {
		printf("\n\n Digite a %d� nota: ", controle); scanf("%f", &notas[controle]);
	}
	printf("\n Qual tipo de m�dia deseja calcular ?? \n1. Aritm�tica. \n2. Ponderada (pesos 3, 3, 4)."); scanf("%d", &escolha);
	 
	switch(escolha) {
		case 1: {
			for (controle=1; controle<=3; controle++) {
				notas[0] = notas[0] + notas[controle];
			}
			printf("\n ->|A m�dia aritm�tica das tr�s notas � %g", notas[0] / 3);
		break;
		}
		case 2: {
			printf("\n ->|A m�dia ponderada das tr�s notas � %g", (notas[1] * 3 + notas[2] * 3 + notas[3] * 4) / 10);
		break;
		}	
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 32: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo\n   m�dio no �ltimo ano. Fa�a um algoritmo que leia o saldo m�dio de um cliente e\n   calcule o valor do cr�dito de acordo com a tabela abaixo. Mostre uma mensagem\n   informando o saldo m�dio e o valor do cr�dito.\n\n   Saldo m�dio \t\tPercentual\n   de 0 a 200 \t\tnenhum cr�dito\n   de 201 a 400 \t20%% do valor do saldo m�dio\n   de 401 a 600 \t30%% do valor do saldo m�dio\n   acima de 601 \t40%% do valor do saldo m�dio\n", consulta);
printf("\n========================================\n=================  32  =================\n========================================\n");
	
	printf("Obs: O Saldo m�dio e o Percentual n�o foi adicionado pois no enunciado o mesmo j� est� inscluso de forma leg�vel!");
	
	Repete9:
	float saldoMedio, credito;
	printf("\n\n Qual o seu saldo m�dio: "); scanf("%f", &saldoMedio);
	
	if (saldoMedio >= 0 and saldoMedio <= 200)
		printf("\n ->|Nenhum cr�dito foi ganho. Se esforce mais para ganhar cr�ditos!!");
	else if (saldoMedio >= 201 and saldoMedio <=  400) {
		credito = 0.2 * saldoMedio;
		printf("\n ->|Foi ganho 20%% do valor do saldo m�dio.\n   |Seu saldo: R$%g.   |Valor ganho em cr�dito: R$%g", saldoMedio, credito);
	}
	else if (saldoMedio >= 401 and saldoMedio <= 600) {
		credito = 0.3 * saldoMedio;
		printf("\n ->|Foi ganho 30%% do valor do saldo m�dio.\n   |Seu saldo: R$%g.   |Valor ganho em cr�dito: R$%g", saldoMedio, credito);
	}
	else if (saldoMedio > 601) {
		credito = 0.4 * saldoMedio;
		printf("\n ->|Foi ganho 40%% do valor do saldo m�dio.\n   |Seu saldo: R$%g.   |Valor ganho em cr�dito: R$%g", saldoMedio, credito);
	}
	else {
		printf("\n ->|N�o aceitamos saldo negativo. Entre com um saldo m�dio v�lido!"); goto Repete9;
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 33: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Um vendedor necessita de um algoritmo que calcule o pre�o total devido por um\n   cliente. O algoritmo deve receber o c�digo de um produto e a quantidade\n   comprada e calcular o pre�o total, usando a tabela abaixo:\n   C�digo do produto \tPre�o unit�rio\n    1001 \t\t5,32\n    1324 \t\t6,45\n    6548 \t\t2,37\n    0987 \t\t5,32\n    7623 \t\t6,45\n", consulta);
printf("\n========================================\n=================  33  =================\n========================================\n");
	
	printf("Obs: A tabela n�o foi adicionado pois no enunciado o mesmo j� est� inscluso de forma leg�vel!");
	
	int codigo, qtd;
	float pagar;
	printf("\n Digite o c�digo do produto: "); scanf("%d", &codigo);
	printf(" Informe a quantidade comprada: "); scanf("%d", &qtd);
	
	if (codigo == 1001 or codigo == 987)
		pagar = 5.32 * qtd;
	else if (codigo == 1324 or codigo == 7623)
		pagar = 6.45 * qtd;
	else if (codigo == 6548)
		pagar = 2.37 * qtd;
	
	printf("\n ->|O pre�o total a ser pago pelo cliente � de R$%g reais.", pagar);
	
	printf("\n\n");
	system ("pause");
break;
}


case 34: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Um vendedor precisa de um algoritmo que calcule o pre�o total devido por um\n   cliente. O algoritmo deve receber o c�digo de um produto e a quantidade\n   comprada e calcular o pre�o total, usando a tabela abaixo. Mostre uma\n   mensagem no caso de c�digo inv�lido.\n    C�digo \tPre�o Unit�rio\n    'ABCD' \tR$ 5,30\n    'XYPK' \tR$ 6,00\n    'KLMP' \tR$ 3,20\n    'QRST' \tR$ 2,50\n", consulta);
printf("\n========================================\n=================  34  =================\n========================================\n");
	
	printf("Obs: A tabela n�o foi adicionado pois no enunciado o mesmo j� est� inscluso de forma leg�vel!");
	
	char codigo[4];
	int qtd;
	float pagar;
	Repete10:
	printf("\n Digite o c�digo do produto: "); scanf("%s",  &codigo);
	printf(" Informe a quantidade comprada: "); scanf("%d", &qtd);

	if (strcmp(codigo, "ABCD") == 0 or strcmp(codigo, "abcd") == 0)
		pagar = 5.30 * qtd;
	else if (strcmp(codigo, "XYPK") == 0 or strcmp(codigo, "xypk") == 0)
		pagar = 6.00 * qtd;
	else if (strcmp(codigo, "KLMP") == 0 or strcmp(codigo, "klmp") == 0)
		pagar = 3.20 * qtd;
	else if (strcmp(codigo, "QRST") == 0 or strcmp(codigo, "qrst") == 0)
		pagar = 2.50 * qtd;
	else {
		printf("\n ->|C�digo inv�lido. Digite um c�digo v�lido.\n"); goto Repete10;
	}
	
	printf("\n ->|O pre�o total a ser pago pelo cliente � de R$%g reais.", pagar);
	
	printf("\n\n");
	system ("pause");
break;
}


case 35: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo em que o aluno digita duas notas bimestrais e informa se o aluno \n   foi aprovado ou n�o. Nota: Considere aprovado se a nota for maior que 5.0.\n", consulta);
printf("\n========================================\n=================  35  =================\n========================================\n");
	
	float nota1, nota2, notas;
	printf(" Digite 1� nota: "); scanf("%f", &nota1);
	printf(" Digite 2� nota: "); scanf("%f", &nota2);
	notas = (nota1 + nota2) / 2;
	
	if (notas > 5)
		printf("\n ->|Aprovado.");
	else
		printf("\n ->|Reprovado.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 36: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Escreva um algoritmo que leia dois n�meros inteiros e determine qual � o menor\n   e qual � o maior tamb�m.\n", consulta);
printf("\n========================================\n=================  36  =================\n========================================\n");
	
	int num1, num2;
	printf(" Digite o 1� n�mero: "); scanf("%d", &num1);
	printf(" Digite o 2� n�mero: "); scanf("%d", &num2);
	
	if (num1 > num2)
		printf("\n ->|O 1� n�mero � o maior.");
	else
		printf("\n ->|O 2� n�mero � o maior.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 37: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado.\n   Por padr�o, o aumento ser� de 15%%. Entretanto, deve ser aplicada uma regra\n   diferente para cada faixa salarial. Regras:\n   a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12%%\n   b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10%%\n   c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7%%\n   d) se salarioAtual acima de 3.000,00: aumento igual a 5%%.\n", consulta);
printf("\n========================================\n=================  37  =================\n========================================\n");
	
	float salarioAtual, aumento15p, aumento12p, aumento10p, aumento7p, aumento5p;
	printf(" Digite o sal�rio atual de um empregado: "); scanf("%f", &salarioAtual);
	
	if (salarioAtual < 1499) {
		aumento15p = 0.15 * salarioAtual;
		printf("\n ->|O aumento salarial deste(a) empregado(a) foi de R$%.2f.", aumento15p);
	}
	if (1500 <= salarioAtual and salarioAtual < 1750) {
		aumento12p = 0.12 * salarioAtual;
		printf("\n ->|O aumento salarial deste(a) empregado(a) foi de R$%.2f.", aumento12p);
	}
	if (1750 <= salarioAtual and salarioAtual < 2000) {
		aumento10p = 0.10 * salarioAtual;
		printf("\n ->|O aumento salarial deste(a) empregado(a) foi de R$%.2f.", aumento10p);
	}
	if (2000 <= salarioAtual and salarioAtual < 3000) {
		aumento7p  = 0.07 * salarioAtual;
		printf("\n ->|O aumento salarial deste(a) empregado(a) foi de R$%.2f.", aumento7p);
	}
	if (salarioAtual > 3000) {
		aumento5p  = 0.05 * salarioAtual;
		printf("\n ->|O aumento salarial deste(a) empregado(a) foi de R$%.2f.", aumento5p);
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 38: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo que calcula o desconto previdenci�rio de um funcion�rio. Dado\n   um sal�rio, o programa deve retornar o valor do desconto proporcional ao\n   mesmo. O c�lculo segue a regra: o desconto � de 11%% do valor do sal�rio,\n   entretanto, o valor m�ximo de desconto � 318,20. Sendo assim, ou o algoritmo\n   retorna o valor equivalente a 11%% sobre o sal�rio ou 318,20.\n", consulta);
printf("\n========================================\n=================  38  =================\n========================================\n");
	
	float salario, desSalario;
	
	printf(" Digite o valor do sal�rio: "); scanf("%f",&salario);
	desSalario =  (salario*0.11);
	
	if ( desSalario <= 318.20 ){
		printf("O desconto no valor do sal�rio �: R$ %.2f.", desSalario);
	}
	else 
		printf("O desconto no valor do sal�rio �: R$ 318,20.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 39: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo chamado Zodiaco. Este algoritmo deve ler a data do seu\n   anivers�rio e atribuir um valor para a vari�vel inteira chamada signo, conforme\n   lista abaixo:\n   a) 1� signo do zod�aco: Aqu�rio (21/jan a 19/fev)\n   b) 2� signo do zod�aco: Peixes (20/fev a 20/mar)\n   c) 3� signo do zod�aco: �ries (21/mar a 20/abr)\n   d) 4� signo do zod�aco: Touro (21/abr a 20/mai)\n   e) 5� signo do zod�aco: G�meos (21/mai a 20/jun)\n   f) 6� signo do zod�aco: C�ncer (21/jun a 21/jul)\n   g) 7� signo do zod�aco: Le�o (22/jul a 22/ago)\n   h) 8� signo do zod�aco: Virgem (23/ago a 22/set)\n   i) 9� signo do zod�aco: Libra (23/set a 22/out)\n   j) 10� signo do zod�aco: Escorpi�o (23/out a 21/nov)\n   k) 11� signo do zod�aco: Sagit�rio (22/nov a 21/dez)\n   l) 12� signo do zod�aco: Capric�rnio (22/dez a 20/jan)\n\n   =>O algoritmo deve imprimir uma mensagem, como o exemplo: 'Voc� � do seguinte\n     signo do zod�aco: Libra'\n", consulta);
printf("\n========================================\n=================  39  =================\n========================================\n");
	
	int dia, mes;
	printf(" Digite a data do seu anivers�rio\n Informe o dia: "); scanf("%d", &dia);
	printf(" Informe o m�s: "); scanf("%d", &mes);
	
	if (dia < 19 and mes == 2)
		printf("\n->| Aqu�rio.\n");
	else if ( dia >= 21 and mes == 1)
		printf("\n->| Aqu�rio.\n");
	else	
		if (dia >= 20 and mes == 2)
			printf("\n->| Peixes.\n");
		else if (dia <= 20 and mes == 3)
			printf("\n ->| Peixes.\n");
		else	
			if(dia >= 21 and mes == 3)
				printf("\n->| �ries.\n");
			else if (dia <=20 and mes == 4 )
				printf("\n->| �ries.\n");
			else
				if (dia >= 21 and mes == 4)
					printf("\n->| Touro.\n");
				else if (dia <= 20 and mes == 5)
					printf("\n->| Touro.\n");
				else
					if (dia >= 21 and mes == 5)
						printf("\n->| G�meos.\n");
					else if (dia <= 20 and mes == 6)
						printf("\n->| G�meos.\n");
					else
						if (dia >= 21 and mes == 6)
							printf("\n->| C�ncer.\n");
						else if (dia <= 21 and mes == 7)
							printf("\n->| C�ncer.\n");			
						else
							if (dia >= 22 and mes == 7)
								printf("\n->| Le�o.\n");
							else if (dia <= 22 and mes == 8)
								printf("\n->| Le�o.\n");
							else
								if (dia >= 23 and mes == 8)
									printf("\n->| Virgem.\n");
								else if (dia <= 22 and mes == 9)
									printf("\n->| Virgem.\n");
								else
									if (dia >= 23 and mes == 9)
										printf("\n->| Libra.\n");
									else if (dia <= 22 and mes == 10)
										printf("\n->| Libra.\n");
									else
										if (dia >= 23 and mes == 10)
											printf("\n->| Escorpi�o.\n");
										else if (dia <= 21 and mes == 11)
											printf("\n->| Escorpi�o.\n");
										else
											if (dia >= 22 and mes == 11)
												printf("\n->| Sagit�rio.\n");
											else if (dia <= 21 and mes == 12)
												printf("\n->| Sagit�rio.\n");
											else
												if (dia >= 22 and mes == 12)
													printf("\n->| Capric�rnio.\n");
												else if (dia <= 20 and mes == 1)
													printf("\n->| Capric�rnio.\n");
														
								
	printf("\n\n");
	system ("pause");
break;
}


case 40: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo que retorne verdadeiro quando um n�mero fornecido for par.\n", consulta);
printf("\n========================================\n=================  40  =================\n========================================\n");
	
	int retorno;
	printf(" Digite um n�mero: "); scanf("%d", &retorno);
	
	if (retorno % 2 == 0)
		printf("\n ->|Verdadeiro.");
	else
		printf("Esta mensagem nem deveria exisitir rsrs.");
	
	printf("\n\n");
	system ("pause");
break;
}


case 41: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo que pe�a o nome, a altura e o peso de duas pessoas e\n   apresente o nome da mais pesada e o nome da mais alta.\n", consulta);
printf("\n========================================\n=================  41  =================\n========================================\n");
	
	char nome[3][25];
	float altura[3], peso[3];
	for (controle=1; controle<=2; controle++) {
		printf("\n ->||Dados da %d� pessoa", controle);
		printf("\n\n |Digite o 1� nome de uma pessoa: "); scanf("%s", &nome[controle]);
		printf(" |Digite a altura desta pessoa (Utilize v�rgula): "); scanf("%f", &altura[controle]);
		printf(" |Digite o peso desta pessoa: "); scanf("%f", &peso[controle]);
	}
	
	if (peso[1] > peso[2])
		printf("\n ->|O nome da pessoa mais pesada � %s", nome[1]);
	else
		printf("\n ->|O nome da pessoa mais pesada � %s", nome[2]);
	if (altura[1] > altura[2])
		printf("\n ->|A pessoa mais alta � %s", nome[1]);
	else
		printf("\n ->|A pessoa mais alta � %s", nome[2]);
	
	printf("\n\n");
	system ("pause");
break;
}


}

if (consulta > 41) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER N�O ?? S� at� o 41, G�NIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);

}
