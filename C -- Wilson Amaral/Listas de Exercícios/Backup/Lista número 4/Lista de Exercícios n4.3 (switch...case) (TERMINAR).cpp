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
	srand(time(NULL));
	
	int consulta = 0;
	
	Inicio:
do {
	system("cls || clear");	
	printf("\n*Obs: Esta lista obt�m apenas 16 quest�es! (SWITCH...CASE)\n*Obs�: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\nDigite qual n�mero da lista deseja consultar: ");
	scanf("%d", &consulta);
	
	
switch (consulta) {
	// Pela lista original a numera��o come�a em 72. Ent�o caso se perca, basta somar +71 ao case desejado.
	// EX.: case 7 + 71 = 78. (VERIFICAR O .PDF)
	
case 1: { // KKKKKKKKKKK N�O SEI FAZER =>> Eu fiz assim o que acha?
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Um determinado clube de futebol pretende classificar seus atletas em categorias\n   e para isto ele contratou um programador para criar um programa que\n   executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa\n   et�ria do atleta e sua categoria. A tabela est� demonstrada abaixo:\n\n   IDADE \tCATEGORIA\n   De 05 a 10 \tInfantil\n   De 11 a 15 \tJuvenil\n   De 16 a 20 \tJunior\n   De 21 a 25 \tProfissional\n\n   =>Construa um programa que solicite o nome e a idade de um atleta e imprima a sua categoria.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	int qtdAtl;
	printf(" *Informe a quantidade de atletas a serem classificados: "); scanf("%d", &qtdAtl);
	char nomes[qtdAtl][50];
	int idades[qtdAtl];
	
	for (controle=1; controle <= qtdAtl; controle++) {
		printf("\n ************ Dados do(a) %d�(�) Atleta ************\n", controle);
		printf(" *Informe o nome: "); scanf(" %[^\n]s", &nomes[controle]);
		printf(" *Informe tamb�m a idade: "); scanf("%d", &idades[controle]);
		printf(" **************************************************\n");
	}
	printf("\n\n");
	for (controle=1; controle <= qtdAtl; controle++) {
		switch((idades[controle])) {
			// Infantil
			case 5:
			case 6:
			case 7:	
			case 8:
			case 9:	
			case 10:{
				printf("\n ************ Dados do(a) %d�(�) Atleta ************", controle);
				printf("\n * Nome: %s.", nomes[controle]);
				printf("\n * Idade: %i.", idades[controle]);
				printf("\n * Categoria: Infantil. ");
				printf("\n **************************************************\n");
			break;
			}
			// Juvenil
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:{
				printf("\n ************ Dados do(a) %d�(�) Atleta ************", controle);
				printf("\n * Nome: %s.", nomes[controle]);
				printf("\n * Idade: %i.",idades[controle]);
				printf("\n * Categoria: Juvenil. ");
				printf("\n **************************************************\n");
			break;
			}
			// Junior
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:{
				printf("\n ************ Dados do(a) %d�(�) Atleta ************", controle);
				printf("\n * Nome: %s.", nomes[controle]);
				printf("\n * Idade: %i.",idades[controle]);
				printf("\n * Categoria: Junior. ");
				printf("\n **************************************************\n");
			break;
			}
			// Profissional
			case 21:
			case 22:
			case 23:
			case 24:
			case 25:{
				printf("\n ************ Dados do(a) %d�(�) Atleta ************", controle);
				printf("\n * Nome: %s.", nomes[controle]);
				printf("\n * Idade: %i.",idades[controle]);
				printf("\n * Categoria: Profissional. ");
				printf("\n **************************************************\n");
			break;
			}
		}	
		
	}
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um programa, utilizando estrutura de condi��o, que receba um n�mero\n   real, digitado pelo usu�rio e mostre o menu para selecionar o tipo de c�lculo que\n   deve ser realizado:\n\n   101-Raiz quadrada\n   102-A metade\n   103-10%% do n�mero\n   104-O dobro\n   Escolha a op��o:\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	float numero;
	int opcao;
	printf(" Digite um n�mero real: "); scanf("%f", &numero);
	
	Repete2:
	printf(" Do menu mostrado a baixo, escolha uma op��o \n   101 - Raiz quadrada\n   102 - A metade\n   103 - 10%% do n�mero\n   104 - O dobro\n Escolha a op��o: "); scanf("%d", &opcao);
	switch(opcao) {
		case 101: {
			printf("\n ->|A raiz quadrada do n�mero informado � %g", numero*numero);
		break;
		}
		
		case 102: {
			printf("\n ->|A metade do n�mero informado � %g", numero/2);
		break;
		}
		
		case 103: {
			printf("\n ->|10%% do n�mero informado � %g", numero*0.10);
		break;
		}
		
		case 104: {
			printf("\n ->|O dobro do n�mero informado � %g", numero*2);
		break;
		}
		
		default: {
			printf(" *OP��O INV�LIDA!! Selecione uma op��o v�lida.\n\n"); goto Repete2;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>O programa de uma loja de m�veis mostra o seguinte menu na tela de vendas:\n\n   1-Venda a Vista\n   2-Venda a Prazo 30 dias\n   3-Venda a Prazo 60 dias\n   4-Venda a Prazo com 90 dias\n   5-Venda com cart�o de d�bito\n   6-Venda com cart�o de cr�dito\n   Escolha a op��o:\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	goto case4;
	
	printf("\n\n");
	system ("pause");
break;
}

case4:
case 4: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um programa que receba o valor da venda, escolha a condi��o de\n   pagamento no menu e mostre o total da venda final conforme condi��es a seguir:\n\n   1 - Venda a Vista -> desconto de 10%%\n   2 - Venda a Prazo 30 dias -> desconto de 5%%\n   3 - Venda a Prazo 60 dias -> mesmo pre�o\n   4 - Venda a Prazo 90 dias -> acr�scimo de 5%%\n   5 - Venda com cart�o de d�bito -> desconto de 8%%\n   6 - Venda com cart�o de cr�dito -> desconto de 7%% \n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	printf(" *Obs: O menu n�o foi adicionado pois o mesmo j� est� incluso no enunciado!\n\n");

	int opcao;
	float venda;
	printf(" Finja ser um vendedor e nos informe qual o valor da venda de um produto: "); scanf("%f", &venda);
	Repete4:
	printf(" Nos informe tamb�m qual foi a forma de pagamento (verificar menu no enunciado): "); scanf("%d", &opcao);
	switch(opcao) {
		case 1: {
			printf("\n ->|Cliente pagou a vista. Desconto de 10%%.\n ->|Valor pago: %.2f", venda-(venda*0.10));
		break;
		}
		
		case 2: {
			printf("\n ->|Cliente pagou a prazo (30 dias). Desconto de 5%%.\n ->|Valor pago: R$%.2f", venda-(venda*0.05));
		break;
		}
		
		case 3: {
			printf("\n ->|Cliente pagou a prazo (60 dias). Sem desconto.\n ->|Valor pago: R$%.2f", venda);
		break;
		}
		
		case 4: {
			printf("\n ->|Cliente pagou a prazo (90 dias). Acr�scimo de 5%%.\n ->|Valor pago: R$%.2f", venda*1.05);
		break;
		}
		
		case 5: {
			printf("\n ->|Cliente pagou com cart�o de d�bito. Desconto de 8%%.\n ->|Valor pago: R$%.2f", venda-(venda*0.08));
		break;
		}
		
		case 6: {
			printf("\n ->|Cliente pagou com cart�o de cr�dito. Desconto de 7%%.\n ->|Valor pago: R$%.2f", venda-(venda*0.07));
		break;
		}
		
		default: {
			printf(" *OP��O INV�LIDA!! Selecione uma op��o v�lida.\n\n"); goto Repete4;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}

case 5: { // Esse aqui andei dando umas pesquisadas, mas est� meio nebuloso ainda 
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que receba uma data no formato DDMMAAAA e escreva qual\n   a esta��o do ano correspondente (Primavera, Ver�o, Outono, Inverno).\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
		/*
		Quando come�a o outono: 20 ou 21 de mar�o.
		Quando acaba o outono: 20 ou 21 de junho.
		
		Quando come�a o inverno: 20 ou 21 de junho.
		Quando acaba o inverno: 22 ou 23 de setembro.
		
		Quando come�a a primavera: 22 ou 23 de setembro.
		Quando acaba a primavera: 21 ou 22 de dezembro.
		
		Quando come�a o ver�o: 21 ou 22 de dezembro.
		Quando acaba o ver�o: 20 ou 21 de mar�o.
		*/
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elaborar um algoritmo para imprimir o n�mero de dias de um dado m�s e ano.\n   Anos bissextos dever�o ser tratados convenientemente.\n Dica: Anos bissextos s�o m�ltiplos de 4 e n�o s�o m�ltiplos de 100, exceto os\n anos m�ltiplos de 400, que tamb�m s�o bissextos.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um programa que l� quatro valores: I, A, B e C, onde I � um n�mero inteiro\n   e positivo e A, B, e C s�o quaisquer valores reais. O programa deve escrever os\n   valores lidos e:\n   ->se I = 1, escrever os tr�s valores A, B e C em ordem crescente;\n   ->se I = 2, escrever os tr�s valores A, B e C em ordem decrescente;\n   ->se I = 3, escrever os tr�s valores A, B, e C de forma que o maior valor fique\n     entre os outros dois;\n   ->se I n�o for um dos tr�s valores acima, dar uma mensagem indicando isto.\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	unsigned int I; //ignorar a parte negativa do inteiro
	float A,B,C;
	
	
	printf(" Digite o valor de A: "); scanf("%f",&A);
	printf(" Digite o valor de B: "); scanf("%f",&B);
	printf(" Digite o valor de C: "); scanf("%f",&C);
	RepeteQ7:
	printf("\n Digite a op��o desejada\n 1 - Ordem Crescente\n 2 - Ordem descrente\n 3 - Maior valor no meio");
	printf("\nEscolha: "); scanf("%i",&I);
	
	switch (I){
		case 1:{
			if (A < B and A < C)
				if (B < C)
					printf("\n->| %g, %g, %g.",A,B,C);
				else
					printf("\n->| %g, %g, %g.",A,C,B);
				if (B < A and B < C)
					if (A < C)
						printf("\n->| %g, %g, %g.",B,A,C);
					else
						printf("\n->| %g, %g, %g.",B,C,A);
				if (C < B and C < A)
					if (B < A)
						printf("\n->| %g, %g, %g.",C,B,A);
					else
						printf("\n->| %g, %g, %g.",C,A,B);
		break;
		}
		case 2: {
			if (A > B and A > C)
				if (B > C)
					printf("\n->| %g, %g, %g.",A,B,C);
				else
					printf("\n->| %g, %g, %g.",A,C,B);
				if (B > A and B > C)
					if (A > C)
						printf("\n->| %g, %g, %g.",B,A,C);
					else
						printf("\n->| %g, %g, %g.",B,C,A);
				if (C > B and C > A)
					if (B > A)
						printf("\n->| %g, %g, %g.",C,B,A);
					else
						printf("\n->| %g, %g, %g.",C,A,B);
			break;
		}
		
		case 3: {
			if (A > B and A > C)
				if (B > C)
					printf("\n->| %g, %g, %g.",C,A,B);
				else
					printf("\n->| %g, %g, %g.",B,A,C);
				if (B > A and B > C)
					if (A > C)
						printf("\n->| %g, %g, %g.",C,B,A);
					else
						printf("\n->| %g, %g, %g.",A,B,C);
				if (C > B and C > A)
					if (B > A)
						printf("\n->| %g, %g, %g.",A,C,B);
					else
						printf("\n->| %g, %g, %g.",B,C,A);
			break;
		}
		default:{
			printf("\n Op��o inv�lida, tente novamente..."); Sleep(1500); goto RepeteQ7;
		break;
		}
	}
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: { // Naquele que vc fez da consoante eu digitei minusculo e ele identificou normal acho que se vc fizer o msm aqui n�o precisaria de dois cases, aparentemente eu estava cero rsrs.
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia a primeira letra do estado civil de uma pessoa e\n   mostre uma mensagem com a sua descri��o (Solteiro, Casado, Vi�vo,\n   Divorciado, Desquitado). Mostre uma mensagem de erro, se necess�rio.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	char opcao;
	printf(" Informe o seu estado civil.\n (S) - Solteiro(a)\n (C) - Casado(a)\n (V) - Vi�vo(a)\n (D) - Divorciado(a)\n (O) - Outros.\n Escolha uma op��o: "); scanf(" %c", &opcao);
	switch(toupper(opcao)) {
//		case 's':
		case 'S': {
			printf("\n ->|Voc� nos informou ser Solteiro(a).");
		break;
		}
		
//		case 'c':
		case 'C': {
			printf("\n ->|Voc� nos informou ser Casado(a).");
		break;
		}
		
//		case 'v':
		case 'V': {
			printf("\n ->|Voc� nos informou ser Vi�vo(a).");
		break;
		}
		
//		case 'd':
		case 'D': {
			printf("\n ->|Voc� nos informou ser Divorciado(a).");
		break;
		}
		
//		case 'o':
		case 'O': {
			printf("\n ->|Voc� nos informou ser Outros(as).");
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Construa um algoritmo que leia um n�mero inteiro de 1 a 7 e informe o dia da\n   semana correspondente, sendo domingo o dia de n�mero 1. Se o n�mero n�o\n   corresponder a um dia da semana, mostre uma mensagem de erro.\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	int dia;
	Repete9:
	printf(" Digite de 1 a 7 para informar o dia da semana.\n Informe o n�mero escolhido: "); scanf("%d", &dia);
	switch(dia) {
		case 1: {
			printf("\n ->|O n�mero %d corresponde a Domingo!", dia);
		break;
		}
		
		case 2: {
			printf("\n ->|O n�mero %d corresponde a Segunda-feira!", dia);
		break;
		}
		
		case 3: {
			printf("\n ->|O n�mero %d corresponde a Ter�a-feira!", dia);
		break;
		}
		
		case 4: {
			printf("\n ->|O n�mero %d corresponde a Quarta-feira!", dia);
		break;
		}
		
		case 5: {
			printf("\n ->|O n�mero %d corresponde a Quinta-feira!", dia);
		break;
		}
		
		case 6: {
			printf("\n ->|O n�mero %d corresponde a Sexta-feira!", dia);
		break;
		}
		
		case 7: {
			printf("\n ->|O n�mero %d corresponde a Sab�do!", dia);
		break;
		}
		
		default: {
			printf(" *ERRO! Informe um dia v�lido.\n\n"); goto Repete9;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se �\n   vogal ou consoante.\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	char alfabeto;
	Repete10:
	printf(" Informe uma letra do alfabeto: "); scanf(" %c", &alfabeto);
	switch(toupper(alfabeto)) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': {
			printf("\n ->|A letra escolhida � uma vogal!");
		break;
		}
		
		case 'B':
		case 'C':
		case 'D':
		case 'F':
		case 'G':
		case 'H':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z': {
			printf("\n ->|A letra escolhida � uma consoante!");
		break;
		}
		
		default: {
			printf("\n *ERRO! Informe apenas letras."); goto Repete10;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Construa um algoritmo que, tendo como dados de entrada o pre�o de um\n   produto e um c�digo de origem, mostre o pre�o junto de sua proced�ncia (ex.\n   500,00 � Sul). Caso o c�digo n�o seja nenhum dos especificados, o produto\n   deve ser encarado como importado.\n    C�digo de origem\n    1 � Sul   \t5 ou 6 � Nordeste\n    2 � Norte \t7 ou 8 ou 9 � Sudeste\n    3 � Leste \t10 at� 20 � Centro Oeste\n    4 � Oeste \t25 at� 35 � Nordeste\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	int qtdProdutos;
	printf(" Digite a quantidade de produtos que deseja consultar:"); scanf("%i",&qtdProdutos);
	printf("\n");
	int codigo[qtdProdutos];
	float preco[qtdProdutos];
	
	for (controle = 1; controle <= qtdProdutos; controle++){
		printf(" Digite o pre�o do %i� produto: ",controle); scanf("%f",&preco[controle]);
		printf(" Digite o c�digo do %i� produto: ",controle); scanf("%i",&codigo[controle]);
		printf("\n");
	}
	printf("\n");
	
	for (controle = 1; controle <= qtdProdutos; controle++){
		switch (codigo[controle]){
			case 1: {
				printf("\n |-> Pre�o: R$ %.2f - Sul",preco[controle]);
			break;
			}
			case 2:{
				printf("\n |-> Pre�o: R$ %.2f - Norte",preco[controle]);
			break;
			}
			
			case 3:{
				printf("\n |-> Pre�o: R$ %.2f - Leste",preco[controle]);
			break;
			}
			
			case 4:{
				printf("\n |-> Pre�o: R$ %.2f - Oeste",preco[controle]);
			break;
			}
			case 5:
			case 6:{
				printf("\n |-> Pre�o: R$ %.2f - Nordeste",preco[controle]);
			break;
			}
			case 7:
			case 8:
			case 9:{
				printf("\n |-> Pre�o: R$ %.2f - Suldeste",preco[controle]);
			break;
			}
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20: {
				printf("\n |-> Pre�o: R$ %.2f - Centro Oeste",preco[controle]);
			break;
			}
			
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 31:
			case 32:
			case 33:
			case 34:
			case 35:{
				printf("\n |-> Pre�o: R$ %.2f - Nordeste",preco[controle]);
			break;
			}
			
			
			default:{
				printf("\n |-> Pre�o: R$ %.2f - Importado",preco[controle]);
			break;
			}
				
		}
	printf("\n");
	}

	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	//Preciso voltar nessa quest�o o primeiro for d� bixado n�o repete o quanto deveria.
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo para uma calculadora utilizando a instru��o escolha-caso para\n   determinar a opera��o que deve ser executada, conforme o usu�rio escolher no\n   menu de op��es. Conforme a op��o escolhida pelo usu�rio, uma opera��o\n   diferente da calculadora deve ser executada.\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	int qtdOperacao;
	float num[3];
	printf(" Digite quantas opera��es deseja realizar: "); scanf("%i",&qtdOperacao);
	int opcao;
	for (controle = 1; controle <= qtdOperacao; controle++){
		printf("\n CALCULADORA DE OPERA��ES SIMPLES");
		printf("\n 1 - Soma\n 2 - Subtra��o\n 3 - Divis�o\n 4 - Multiplica��o");
		printf("\n Escolha:"); scanf("%i",&opcao);
		printf("\n");
		switch (opcao){
			case 1:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %i� n�mero: ",controle); scanf("%f",&num[controle]);
				}	
				printf("\n->| Soma de %g + %g = %g.\n",num[1],num[2],num[1]+num[2]);
			break;
			}
			case 2:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %i� n�mero: ",controle); scanf("%f",&num[controle]);
				}	
				printf("\n->| Subtra��o de %g - %g = %g.\n",num[1],num[2],num[1]-num[2]);
			break;
			}
			case 3:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %i� n�mero: ",controle); scanf("%f",&num[controle]);
				}
				
					if (num[2] == 0){
						printf(" Divis�o por 0, tente novamente..."); Sleep(1500);
						printf("\n Digite o 2� n�mero: "); scanf("%f",&num[2]);
					}
						
				printf("\n->| Divis�o de %g/%g = %g.\n",num[1],num[2],num[1]/num[2]);
			break;
			}
			case 4:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %i� n�mero: ",controle); scanf("%f",&num[controle]);
				}	
				printf("\n->| Multiplica��o de %g * %g = %g.\n",num[1],num[2],num[1]*num[2]);
			break;
			}
			
		}
	}
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo que execute as funcionalidades da conta-corrente de uma\n   pessoa. Toda a conta tem um n�mero, uma pessoa vinculada e um saldo. O \n   saldo � atualizado conforme o tipo de movimenta��o banc�ria: dep�sito ou\n   retirada. Se for um dep�sito, o dinheiro � creditado ao saldo; se for retirada, o\n   dinheiro � debitado do saldo\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo para o jogo �pedra-papel-tesoura�. O jogo deve imprimir\n   vit�ria, empate ou derrota conforme a op��o que o jogador escolher e a op��o\n   que for sorteada aleatoriamente pelo computador. Obs.: pedra ganha de tesoura;\n   que ganha de papel; que ganha de pedra.\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	int opcao, aleatorio;
	printf(" Jogo 'pedra-papel-tesoura'.\n Escolha uma das op��es abaixo:\n 1 - Pedra\n 2 - Papel\n 3 - Tesoura\n Op��o desejada: "); scanf("%d", &opcao);
	aleatorio = rand()%3+1;
	
	
	printf(" Computador: %d", aleatorio);
	switch (opcao){
		case 1:{
			if(aleatorio > opcao)
				printf("\n -> Derrota.");		
			
			else if (aleatorio < opcao)
				printf("\n -> Vit�ria.");
			else
				printf("\n -> Empate.");
		break;
		}
		
		case 2:{
			if (aleatorio > opcao)
				printf("\n -> Derrota.");
			else if (aleatorio < opcao)
				printf("\n -> Vit�ria.");
			else
				printf("\n -> Empate.");
		break;
		}
		case 3:{
			if (aleatorio > opcao)
				printf("\n -> Derrota.");
			else if (aleatorio < opcao)
				printf("\n -> Vit�ria.");
			else
				printf("\n -> Empate.");
		break;
		}
			
	}
	
	//Bobinho estava no caminho certo kkkk. Quando visualizar fica a vontade para apagar os coment�rioos daqui k
	
	
	/* SOMENTE UM TESTE!!! (Sei fazer assim... Usando Switch-case ?? N�o consigo relacionar as coisas. 
	// Detalhe, funcionou desta maneira, obviamente.
	printf("%d", aleatorio);
	if (aleatorio == opcao) {
		printf("Empate!");
	}
	else
		printf("Diferente");
	
	*/

	
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo chamado Estacoes. Este algoritmo deve ler uma data e\n   armazenar na vari�vel mes um n�mero entre 1 e 12, correspondendo a um dos\n   meses do ano. No final, voc� deve imprimir uma mensagem conforme o exemplo:\n\t'A esta��o do ano correspondente ao m�s 3 � Ver�o'\n\n   Considere a esta��o prevalente para cada m�s:\n\n   a) Janeiro   (1):  Ver�o\n   b) Fevereiro (2):  Ver�o\n   c) Mar�o     (3):  Ver�o\n   d) Abril     (4):  Outono\n   e) Maio      (5):  Outono\n   f) Junho     (6):  Outono\n   g) Julho     (7):  Inverno\n   h) Agosto    (8):  Inverno\n   i) Setembro  (9):  Inverno\n   j) Outubro   (10): Primavera\n   k) Novembro  (11): Primavera\n   l) Dezembro  (12): Primavera\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	int dia, mes, ano;
	Repete15:
	printf(" Informe uma data no seguinte formato: DDMMAAAA\n Informe o dia: "); scanf("%d", &dia);
	printf(" Informe o m�s: "); scanf("%d", &mes);
	printf(" Informe o ano: "); scanf("%d", &ano);
	switch(mes) {
		case 1: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 1 � Ver�o.");
		break;
		}
		
		case 2: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 2 � Ver�o.");
		break;
		}	
				
		case 3: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 3 � Ver�o.");
		break;
		}
		
		case 4: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 4 � Outono.");
		break;
		}
		
		case 5: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 5 � Outono.");
		break;
		}
		
		case 6: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 6 � Outono.");
		break;
		}
		
		case 7: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 7 � Inverno.");
		break;
		}
		
		case 8: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 8 � Inverno.");
		break;
		}
		
		case 9: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 9 � Inverno.");
		break;
		}
		
		case 10: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 10 � Primavera.");
		break;
		}
		
		case 11: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 11 � Primavera.");
		break;
		}
		
		case 12: {
			printf("\n ->|A esta��o do ano correspondente ao m�s 12 � Primavera.");
		break;
		}
		
		default: {
			printf(" *OP��O INV�LIDA!! Selecione uma data v�lida.\n\n"); goto Repete15;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Crie um algoritmo que solicita ao usu�rio para digitar um n�mero e mostra-o por\n   extenso. Este n�mero deve variar entre 1 e 10. Se o usu�rio introduzir um\n   n�mero que n�o est� neste intervalo, mostre: 'N�mero inv�lido'.\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	int num;
	Repete16:
	printf(" Digite um n�mero entre 1 e 10: "); scanf("%d", &num);
	switch(num) {
		case 1: {
			printf("\n ->|1 (Um).");
		break;
		}
		
		case 2: {
			printf("\n ->|2 (Dois).");
		break;
		}
		
		case 3: {
			printf("\n ->|3 (Tr�s).");
		break;
		}
		
		case 4: {
			printf("\n ->|4 (Quatro).");
		break;
		}
		
		case 5: {
			printf("\n ->|5 (Cinco).");
		break;
		}
	
		case 6: {
			printf("\n ->|6 (Seis).");
		break;
		}
			
		case 7: {
			printf("\n ->|7 (Sete).");
		break;
		}
			
		case 8: {
			printf("\n ->|8 (Oito).");
		break;
		}
			
		case 9: {
			printf("\n ->|9 (Nove).");
		break;
		}
			
		case 10: {
			printf("\n ->|10 (Dez).");
		break;
		}
		
		default: {
			printf(" *N�mero inv�lido."); goto Repete16;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


}

if (consulta > 16) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER N�O ?? S� at� o 16, G�NIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);

}
