#include <locale.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <iostream>

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
	srand(time(NULL));
	
	int consulta = 0;
	
	Inicio:
do {
	system("cls || clear");	
	printf("\n *Obs: Esta lista obtém apenas 16 questões! (SWITCH...CASE)\n *Obs²: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\n Digite qual número da lista deseja consultar: ");
	scanf("%d", &consulta);
	
	
switch (consulta) {
	// Pela lista original a numeração começa em 72. Então caso se perca, basta somar +71 ao case desejado.
	// EX.: case 7 + 71 = 78. (VERIFICAR O .PDF)
	
case 1: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Um determinado clube de futebol pretende classificar seus atletas em categorias\n   e para isto ele contratou um programador para criar um programa que\n   executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa\n   etária do atleta e sua categoria. A tabela está demonstrada abaixo:\n\n   IDADE \tCATEGORIA\n   De 05 a 10 \tInfantil\n   De 11 a 15 \tJuvenil\n   De 16 a 20 \tJunior\n   De 21 a 25 \tProfissional\n\n   =>Construa um programa que solicite o nome e a idade de um atleta e imprima a sua categoria.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	int qtdAtl;
	printf(" *Informe a quantidade de atletas a serem classificados: "); scanf("%d", &qtdAtl);
	char nomes[qtdAtl][50];
	int idades[qtdAtl];
	
	for (controle=1; controle <= qtdAtl; controle++) {
		printf("\n ************ Dados do(a) %dº(ª) Atleta ************\n", controle);
		printf(" *Informe o nome: "); scanf(" %[^\n]s", &nomes[controle]);
		printf(" *Informe também a idade: "); scanf("%d", &idades[controle]);
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
				printf("\n ************ Dados do(a) %dº(ª) Atleta ************", controle);
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
				printf("\n ************ Dados do(a) %dº(ª) Atleta ************", controle);
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
				printf("\n ************ Dados do(a) %dº(ª) Atleta ************", controle);
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
				printf("\n ************ Dados do(a) %dº(ª) Atleta ************", controle);
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
printf("\n%dº Exercício proposto:\n==>Faça um programa, utilizando estrutura de condição, que receba um número\n   real, digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que\n   deve ser realizado:\n\n   101-Raiz quadrada\n   102-A metade\n   103-10%% do número\n   104-O dobro\n   Escolha a opção:\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	float numero;
	int opcao;
	printf(" Digite um número real: "); scanf("%f", &numero);
	
	Repete2:
	printf(" Do menu mostrado a baixo, escolha uma opção \n   101 - Raiz quadrada\n   102 - A metade\n   103 - 10%% do número\n   104 - O dobro\n Escolha a opção: "); scanf("%d", &opcao);
	switch(opcao) {
		case 101: {
			printf("\n ->|A raiz quadrada do número informado é %g", numero*numero);
		break;
		}
		
		case 102: {
			printf("\n ->|A metade do número informado é %g", numero/2);
		break;
		}
		
		case 103: {
			printf("\n ->|10%% do número informado é %g", numero*0.10);
		break;
		}
		
		case 104: {
			printf("\n ->|O dobro do número informado é %g", numero*2);
		break;
		}
		
		default: {
			printf(" *OPÇÃO INVÁLIDA!! Selecione uma opção válida.\n\n"); goto Repete2;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>O programa de uma loja de móveis mostra o seguinte menu na tela de vendas:\n\n   1-Venda a Vista\n   2-Venda a Prazo 30 dias\n   3-Venda a Prazo 60 dias\n   4-Venda a Prazo com 90 dias\n   5-Venda com cartão de débito\n   6-Venda com cartão de crédito\n   Escolha a opção:\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	goto case4;
	
	printf("\n\n");
	system ("pause");
break;
}

case4:
case 4: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um programa que receba o valor da venda, escolha a condição de\n   pagamento no menu e mostre o total da venda final conforme condições a seguir:\n\n   1 - Venda a Vista -> desconto de 10%%\n   2 - Venda a Prazo 30 dias -> desconto de 5%%\n   3 - Venda a Prazo 60 dias -> mesmo preço\n   4 - Venda a Prazo 90 dias -> acréscimo de 5%%\n   5 - Venda com cartão de débito -> desconto de 8%%\n   6 - Venda com cartão de crédito -> desconto de 7%% \n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	printf(" *Obs: O menu não foi adicionado pois o mesmo já está incluso no enunciado!\n\n");

	int opcao;
	float venda;
	printf(" Finja ser um vendedor e nos informe qual o valor da venda de um produto: "); scanf("%f", &venda);
	Repete4:
	printf(" Nos informe também qual foi a forma de pagamento (verificar menu no enunciado): "); scanf("%d", &opcao);
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
			printf("\n ->|Cliente pagou a prazo (90 dias). Acréscimo de 5%%.\n ->|Valor pago: R$%.2f", venda*1.05);
		break;
		}
		
		case 5: {
			printf("\n ->|Cliente pagou com cartão de débito. Desconto de 8%%.\n ->|Valor pago: R$%.2f", venda-(venda*0.08));
		break;
		}
		
		case 6: {
			printf("\n ->|Cliente pagou com cartão de crédito. Desconto de 7%%.\n ->|Valor pago: R$%.2f", venda-(venda*0.07));
		break;
		}
		
		default: {
			printf(" *OPÇÃO INVÁLIDA!! Selecione uma opção válida.\n\n"); goto Repete4;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}

case 5: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que receba uma data no formato DDMMAAAA e escreva qual\n   a estação do ano correspondente (Primavera, Verão, Outono, Inverno).\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");

	int dia, mes, ano;
	char barra1, barra2;
	
	printf(" Digite a data no formato DD/MM/AAAA: "); scanf("%i%c%i%c%i",&dia,&barra1,&mes,&barra2,&ano);
	
	int Checklist = 0;
	if (dia > 0 and dia <= 31)      
		Checklist++;
	if (mes > 0 and mes <= 12)     
		Checklist++;
	if (ano > 0)    
		Checklist++;
	if (barra1 == '/' and barra2 == '/')
		Checklist++;
	
	if (Checklist == 4)
		printf("\n->| Data válida.\n");
	else{
		printf("\n->| Data inválida, tente novamente...\n");
	}
	
	switch (mes){
		case 1:{
			if (mes == 1 or mes == 2)
				printf( "\n->| A estação na data %i%c%.2i%c%i é verão.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 2:{
			if (mes == 1 or mes == 2)
				printf( "\n->| A estação na data %i%c%.2i%c%i é verão.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 3:{
			if (dia <= 20 and mes == 3) 
				printf( "\n->| A estação na data %i%c%.2i%c%i é verão.",dia,barra1,mes,barra2,ano);
			
			if ((dia >= 21 and dia <=31) and mes == 3)
				printf( "\n->| A estação na data %i%c%.2i%c%i é outono.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 4:	{
			if (mes == 5 or mes == 4)
				printf( "\n->| A estação na data %i%c%.2i%c%i é outono.",dia,barra1,mes,barra2,ano);	
		break;
		}
		
		case 5:	{
			if (mes == 5 or mes == 4)
				printf( "\n->| A estação na data %i%c%.2i%c%i é outono.",dia,barra1,mes,barra2,ano);	
		break;
		}
		
		case 6:	{
			if ((dia <= 20 and dia <=31) and mes == 6) 
				printf( "\n->| A estação na data %i%c%.2i%c%i é outono.",dia,barra1,mes,barra2,ano);
			
			if ((dia >= 21 and dia <=31) and mes == 6)
				printf( "\n->| A estação na data %i%c%.2i%c%i é inverno.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 7:{
			if (mes == 7 or mes == 8)
				printf( "\n->| A estação na data %i%c%.2i%c%i é inverno.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 8:{
			if (mes == 7 or mes == 8)
				printf( "\n->| A estação na data %i%c%.2i%c%i é inverno.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 9:{
			if ((dia <= 22 and dia <=31) and mes == 9) 
				printf( "\n->| A estação na data %i%c%.2i%c%i é inverno.",dia,barra1,mes,barra2,ano);
			
			if ((dia >= 23 and dia <=31) and mes == 9)
				printf( "\n->| A estação na data %i%c%.2i%c%i é primavera.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 10:{
			if (mes == 10 or mes == 11)
				printf( "\n->| A estação na data %i%c%.2i%c%i é primavera.",dia,barra1,mes,barra2,ano);
		break;
		}
		
		case 11:{
			if (mes == 10 or mes == 11)
				printf( "\n->| A estação na data %i%c%.2i%c%i é primavera.",dia,barra1,mes,barra2,ano);
		break;
		}
			
		case 12:{
			if ((dia <= 21 and dia <=31) and mes == 12) 
				printf( "\n->| A estação na data %i%c%.2i%c%i é primavera.",dia,barra1,mes,barra2,ano);
			
			if ((dia >= 22 and dia <=31) and mes == 12)
				printf( "\n->| A estação na data %i%c%.2i%c%i é verão.",dia,barra1,mes,barra2,ano);
		break;
		}
	}
		
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");
printf("\n%dº Exercício proposto:\n==>Elaborar um algoritmo para imprimir o número de dias de um dado mês e ano.\n   Anos bissextos deverão ser tratados convenientemente.\n Dica: Anos bissextos são múltiplos de 4 e não são múltiplos de 100, exceto os\n anos múltiplos de 400, que também são bissextos.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	unsigned int mes, ano;
	
	printf(" Digite o mês desejado: "); scanf("%i",&mes);
	printf(" Digite o ano desejado: "); scanf("%i",&ano);
	
	switch(mes){
		case 1:{
			printf(" O mês de janeiro têm 31 dias, no ano %i.",ano);
		break;
		}
		case 2:{
			if (ano%4 == 0 and ano%100 != 0 or ano%400 == 0 )
				printf(" O mês de fevereiro têm 29 dias, no ano de %i.",ano);
			else
				printf(" O mês de fevereiro têm 28 dias, no ano de %i.",ano);
		break;
		}
		case 3:{
			printf(" O mês de março têm 31 dias, no ano de %i.",ano);
		break;
		}
		case 4:{
			printf(" O mês de abril têm 30 dias, no ano de %i.",ano);
		break;
		}
		case 5:{
			printf(" O mês de maio têm 31 dias, no ano de %i.",ano);
		break;
		}
		case 6:{
			printf(" O mês de junho têm 30 dias, no ano de %i",ano);
		break;
		}
		case 7:{
			printf(" O mês de julho têm 31 dias, no ano de %i.",ano);
		break;
		}
		case 8:{
			printf(" O mês de agosto têm 31 dias, no ano de %i.",ano);
		break;
		}
		case 9:{
			printf(" O mês de setembro têm 30 dias, no ano de %i.",ano);
		break;
		}
		case 10:{
			printf(" O mês de outubro têm 31 dias, no ano de %i.",ano);
		break;
		}
		case 11:{
			printf(" O mês de novembro têm 30 dias, no ano de %i.",ano);
		break;
		}
		case 12:{
			printf(" O mês de dezembro têm 31 dias, no ano de %i.",ano);
		break;
		}
	}	
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um programa que lê quatro valores: I, A, B e C, onde I é um número inteiro\n   e positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os\n   valores lidos e:\n   ->se I = 1, escrever os três valores A, B e C em ordem crescente;\n   ->se I = 2, escrever os três valores A, B e C em ordem decrescente;\n   ->se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique\n     entre os outros dois;\n   ->se I não for um dos três valores acima, dar uma mensagem indicando isto.\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	unsigned int I; //ignorar a parte negativa do inteiro
	float A,B,C;
	
	printf(" Digite o valor de A: "); scanf("%f",&A);
	printf(" Digite o valor de B: "); scanf("%f",&B);
	printf(" Digite o valor de C: "); scanf("%f",&C);
	RepeteQ7:
	printf("\n Digite a opção desejada\n 1 - Ordem Crescente\n 2 - Ordem descrente\n 3 - Maior valor no meio");
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
			printf("\n Opção inválida, tente novamente..."); Sleep(1500); goto RepeteQ7;
		break;
		}
	}
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e\n   mostre uma mensagem com a sua descrição (Solteiro, Casado, Viúvo,\n   Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	char opcao;
	printf(" Informe o seu estado civil.\n (S) - Solteiro(a)\n (C) - Casado(a)\n (V) - Viúvo(a)\n (D) - Divorciado(a)\n (O) - Outros.\n Escolha uma opção: "); scanf(" %c", &opcao);
	switch(toupper(opcao)) {
		case 'S': {
			printf("\n ->|Você nos informou ser Solteiro(a).");
		break;
		}
		
		case 'C': {
			printf("\n ->|Você nos informou ser Casado(a).");
		break;
		}
		
		case 'V': {
			printf("\n ->|Você nos informou ser Viúvo(a).");
		break;
		}
		
		case 'D': {
			printf("\n ->|Você nos informou ser Divorciado(a).");
		break;
		}
		
		case 'O': {
			printf("\n ->|Você nos informou ser Outros(as).");
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o dia da\n   semana correspondente, sendo domingo o dia de número 1. Se o número não\n   corresponder a um dia da semana, mostre uma mensagem de erro.\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	int dia;
	Repete9:
	printf(" Digite de 1 a 7 para informar o dia da semana.\n Informe o número escolhido: "); scanf("%d", &dia);
	switch(dia) {
		case 1: {
			printf("\n ->|O número %d corresponde a Domingo!", dia);
		break;
		}
		
		case 2: {
			printf("\n ->|O número %d corresponde a Segunda-feira!", dia);
		break;
		}
		
		case 3: {
			printf("\n ->|O número %d corresponde a Terça-feira!", dia);
		break;
		}
		
		case 4: {
			printf("\n ->|O número %d corresponde a Quarta-feira!", dia);
		break;
		}
		
		case 5: {
			printf("\n ->|O número %d corresponde a Quinta-feira!", dia);
		break;
		}
		
		case 6: {
			printf("\n ->|O número %d corresponde a Sexta-feira!", dia);
		break;
		}
		
		case 7: {
			printf("\n ->|O número %d corresponde a Sabádo!", dia);
		break;
		}
		
		default: {
			printf(" *ERRO! Informe um dia válido.\n\n"); goto Repete9;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se é\n   vogal ou consoante.\n", consulta);
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
			printf("\n ->|A letra escolhida é uma vogal!");
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
			printf("\n ->|A letra escolhida é uma consoante!");
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
printf("\n%dº Exercício proposto:\n==>Construa um algoritmo que, tendo como dados de entrada o preço de um\n   produto e um código de origem, mostre o preço junto de sua procedência (ex.\n   500,00 – Sul). Caso o código não seja nenhum dos especificados, o produto\n   deve ser encarado como importado.\n    Código de origem\n    1 – Sul   \t5 ou 6 – Nordeste\n    2 – Norte \t7 ou 8 ou 9 – Sudeste\n    3 – Leste \t10 até 20 – Centro Oeste\n    4 – Oeste \t25 até 35 – Nordeste\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	int qtdProdutos;
	printf(" Digite a quantidade de produtos que deseja consultar:"); scanf("%i",&qtdProdutos);
	printf("\n");
	int codigo[qtdProdutos];
	float preco[qtdProdutos];
	
	for (controle = 1; controle <= qtdProdutos; controle++){
		printf(" Digite o preço do %iº produto: ",controle); scanf("%f",&preco[controle]);
		printf(" Digite o código do %iº produto: ",controle); scanf("%i",&codigo[controle]);
		printf("\n");
	}
	printf("\n");
	
	for (controle = 1; controle <= qtdProdutos; controle++){
		switch (codigo[controle]){
			case 1: {
				printf("\n |-> Preço: R$ %.2f - Sul",preco[controle]);
			break;
			}
			case 2:{
				printf("\n |-> Preço: R$ %.2f - Norte",preco[controle]);
			break;
			}
			
			case 3:{
				printf("\n |-> Preço: R$ %.2f - Leste",preco[controle]);
			break;
			}
			
			case 4:{
				printf("\n |-> Preço: R$ %.2f - Oeste",preco[controle]);
			break;
			}
			case 5:
			case 6:{
				printf("\n |-> Preço: R$ %.2f - Nordeste",preco[controle]);
			break;
			}
			case 7:
			case 8:
			case 9:{
				printf("\n |-> Preço: R$ %.2f - Suldeste",preco[controle]);
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
				printf("\n |-> Preço: R$ %.2f - Centro Oeste",preco[controle]);
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
				printf("\n |-> Preço: R$ %.2f - Nordeste",preco[controle]);
			break;
			}
			
			
			default:{
				printf("\n |-> Preço: R$ %.2f - Importado",preco[controle]);
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
system("cls || clear");
printf("\n%dº Exercício proposto:\n==>Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para\n   determinar a operação que deve ser executada, conforme o usuário escolher no\n   menu de opções. Conforme a opção escolhida pelo usuário, uma operação\n   diferente da calculadora deve ser executada.\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	int qtdOperacao;
	float num[3];
	printf(" Digite quantas operações deseja realizar: "); scanf("%i",&qtdOperacao);
	int opcao,cont=1;
	
	do{
		printf("\n CALCULADORA DE OPERAÇÕES SIMPLES");
		printf("\n 1 - Soma\n 2 - Subtração\n 3 - Divisão\n 4 - Multiplicação");
		printf("\n Escolha:"); scanf("%i",&opcao);
		printf("\n");
		cont++;
	
		switch (opcao){
			case 1:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %iº número: ",controle); scanf("%f",&num[controle]);
				}	
				printf("\n->| Soma de %g + %g = %g.\n",num[1],num[2],num[1]+num[2]);
			break;
			}
			case 2:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %iº número: ",controle); scanf("%f",&num[controle]);
				}	
				printf("\n->| Subtração de %g - %g = %g.\n",num[1],num[2],num[1]-num[2]);
			break;
			}
			case 3:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %iº número: ",controle); scanf("%f",&num[controle]);
				}
				
				if (num[2] == 0){
					printf(" Divisão por 0, tente novamente..."); Sleep(1500);
					printf("\n Digite o 2º número: "); scanf("%f",&num[2]);
				}
						
				printf("\n->| Divisão de %g/%g = %g.\n",num[1],num[2],num[1]/num[2]);
			break;
			}
			case 4:{
				for (controle = 1; controle <= 2; controle++){
					printf(" Digite o %iº número: ",controle); scanf("%f",&num[controle]);
				}	
				printf("\n->| Multiplicação de %g * %g = %g.\n",num[1],num[2],num[1]*num[2]);
			break;	
			}	
		}
	} while (cont <= qtdOperacao);
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Crie um algoritmo que execute as funcionalidades da conta-corrente de uma\n   pessoa. Toda a conta tem um número, uma pessoa vinculada e um saldo. O \n   saldo é atualizado conforme o tipo de movimentação bancária: depósito ou\n   retirada. Se for um depósito, o dinheiro é creditado ao saldo; se for retirada, o\n   dinheiro é debitado do saldo\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	unsigned short int operacao;
	float saldo,valorOperacao,novoSaldo;
	char conta[8];
	
	printf(" Digite a sua conta bancária: "); scanf("%s",&conta);
	printf(" Digite o saldo da conta: "); scanf("%f",&saldo);
	printf("\n OPERAÇÕES NESSE CAIXA");
	printf("\n |1 - Depósito\n |2 - Retirada");
	printf("\n");
	printf(" \n Digite o valor da operação: "); scanf("%i",&operacao);
	
	switch(operacao){
		case 1:{
			printf("\n Digite quanto deseja depositar: "); scanf("%f",&valorOperacao);
			novoSaldo = saldo + valorOperacao;
			printf("\n->| Seu novo saldo é: R$ %.2f.",novoSaldo);
		break;
		}
		case 2:{
			printf("\n Digite quanto deseja retirar: "); scanf ("%f",&valorOperacao);
			novoSaldo = saldo - valorOperacao;	
			if (valorOperacao > saldo){
				printf("\n->| Saldo insuficiente para retirada.");
			}else
				printf("\n->| Seu novo saldo é: R$ %.2f.",novoSaldo);
		break;
		}		
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo para o jogo “pedra-papel-tesoura”. O jogo deve imprimir\n   vitória, empate ou derrota conforme a opção que o jogador escolher e a opção\n   que for sorteada aleatoriamente pelo computador. Obs.: pedra ganha de tesoura;\n   que ganha de papel; que ganha de pedra.\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	int opcao, aleatorio;
	printf(" Jogo 'pedra-papel-tesoura'.\n Escolha uma das opções abaixo:\n 1 - Pedra\n 2 - Papel\n 3 - Tesoura\n Opção desejada: "); scanf("%d", &opcao);
	aleatorio = rand()%3+1;
	printf(" Computador: %d\n", aleatorio);
	
	switch (opcao) {
		case 1: {
			if (aleatorio == 2) {
				printf("\n ->|Derrota.");
			}
			else if (aleatorio == 3) {
				printf("\n ->|Vitória!");
			}
			else
				printf("\n ->|Empate.");
		break;
		}
		
		case 2: {
			if (aleatorio == 3) {
				printf("\n ->|Derrota.");
			}
			else if (aleatorio == 1) {
				printf("\n ->|Vitória!");
			}
			else
				printf("\n ->|Empate.");
		break;
		}
		
		case 3: {
			if (aleatorio == 1) {
				printf("\n ->|Derrota.");
			}
			else if (aleatorio == 2) {
				printf("\n ->|Vitória!");
			}
			else
				printf("\n ->|Empate.");
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Crie um algoritmo chamado Estacoes. Este algoritmo deve ler uma data e\n   armazenar na variável mes um número entre 1 e 12, correspondendo a um dos\n   meses do ano. No final, você deve imprimir uma mensagem conforme o exemplo:\n\t'A estação do ano correspondente ao mês 3 é Verão'\n\n   Considere a estação prevalente para cada mês:\n\n   a) Janeiro   (1):  Verão\n   b) Fevereiro (2):  Verão\n   c) Março     (3):  Verão\n   d) Abril     (4):  Outono\n   e) Maio      (5):  Outono\n   f) Junho     (6):  Outono\n   g) Julho     (7):  Inverno\n   h) Agosto    (8):  Inverno\n   i) Setembro  (9):  Inverno\n   j) Outubro   (10): Primavera\n   k) Novembro  (11): Primavera\n   l) Dezembro  (12): Primavera\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	int dia, mes, ano;
	Repete15:
	printf(" Informe uma data no seguinte formato: DDMMAAAA\n Informe o dia: "); scanf("%d", &dia);
	printf(" Informe o mês: "); scanf("%d", &mes);
	printf(" Informe o ano: "); scanf("%d", &ano);
	switch(mes) {
		case 1: {
			printf("\n ->|A estação do ano correspondente ao mês 1 é Verão.");
		break;
		}
		
		case 2: {
			printf("\n ->|A estação do ano correspondente ao mês 2 é Verão.");
		break;
		}	
				
		case 3: {
			printf("\n ->|A estação do ano correspondente ao mês 3 é Verão.");
		break;
		}
		
		case 4: {
			printf("\n ->|A estação do ano correspondente ao mês 4 é Outono.");
		break;
		}
		
		case 5: {
			printf("\n ->|A estação do ano correspondente ao mês 5 é Outono.");
		break;
		}
		
		case 6: {
			printf("\n ->|A estação do ano correspondente ao mês 6 é Outono.");
		break;
		}
		
		case 7: {
			printf("\n ->|A estação do ano correspondente ao mês 7 é Inverno.");
		break;
		}
		
		case 8: {
			printf("\n ->|A estação do ano correspondente ao mês 8 é Inverno.");
		break;
		}
		
		case 9: {
			printf("\n ->|A estação do ano correspondente ao mês 9 é Inverno.");
		break;
		}
		
		case 10: {
			printf("\n ->|A estação do ano correspondente ao mês 10 é Primavera.");
		break;
		}
		
		case 11: {
			printf("\n ->|A estação do ano correspondente ao mês 11 é Primavera.");
		break;
		}
		
		case 12: {
			printf("\n ->|A estação do ano correspondente ao mês 12 é Primavera.");
		break;
		}
		
		default: {
			printf(" *OPÇÃO INVÁLIDA!! Selecione uma data válida.\n\n"); goto Repete15;
		break;
		}
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Crie um algoritmo que solicita ao usuário para digitar um número e mostra-o por\n   extenso. Este número deve variar entre 1 e 10. Se o usuário introduzir um\n   número que não está neste intervalo, mostre: 'Número inválido'.\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	int num;
	Repete16:
	printf(" Digite um número entre 1 e 10: "); scanf("%d", &num);
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
			printf("\n ->|3 (Três).");
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
			printf(" *Número inválido."); goto Repete16;
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
	printf("O SEU(SUA) IDIOTA, SABE LER NÃO ?? Só até o 16, GÊNIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);

}
