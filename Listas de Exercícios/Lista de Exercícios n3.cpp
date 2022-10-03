#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

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
do {
	system("cls || clear");	
	printf("\n*Obs: Esta lista obt�m apenas 16 quest�es!");
	printf("\n\nDigite qual n�mero da lista deseja consultar: ");
	scanf("%d", &consulta);


switch(consulta) {	
case 1: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima na tela lado a lado o texto 'Hello World!' 10 vezes.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	for (controle=1; controle<=10; controle++) {
		if (controle < 10)
			printf("Hello World / ", controle);
		else
			printf("Hello World.", controle);
	}
	
	printf("\n\n");
	system ("pause");
break;
}	


case 2: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima na tela o texto 'Hello World!' 10 vezes, um por linha.\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	for (controle=1; controle<=10; controle++)
		printf("->|%d. Hello World!\n", controle);
	
	printf("\n\n");
	system ("pause");
break;
}	


case 3: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima todos os n�meros inteiros de 1 at� 100 inclusive.\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	for (controle=1; controle<=100; controle++) {
		if (controle < 100)
			printf("%d - ", controle);
		else
			printf("%d.", controle);
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima 100 vezes o texto '1- Hello World!' com o n�mero.\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	for (controle=1; controle<=100; controle++) {
		printf("->|%d- Hello World!\n", controle);
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima todos os n�meros decrescentes de 100 at� 0 inclusive.\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	for (controle=100; controle>=0; controle--)
		if (controle > 0)
			printf("%d - ", controle);
		else
			printf("%d.", controle);
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima todos os n�meros pares inteiros de 1 at� 1000.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	for (controle=1; controle<=1000; controle++)
		if (controle % 2 == 0)
			if (controle < 1000)
				printf("%d - ", controle);
			else
				printf("%d.", controle);	
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima todos os n�meros �mpares de 1000 at� 0.\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	for (controle=1000; controle>=1; controle--)
		if (controle % 2 == 1)
			if (controle > 1)
				printf("%d - ", controle);
			else
				printf("%d.", controle);	
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que imprima a soma dos 100 primeiros n�meros inteiros positivos.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	int soma100Primeiros;
	
	for (controle=0; controle<=100; controle++)
		soma100Primeiros = soma100Primeiros + controle;
	printf("->|A soma dos 100 primeiros n�meros �: %d.", soma100Primeiros);
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que solicite ao usu�rio um n�mero inteiro que indicar� a quantidade de vezes que o texto \n'Hello World!' ser� impresso na tela, um em cada linha.\n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	int seq9int;
	
	printf("Digite um n�mero inteiro que indicar� uma sequ�ncia: ");
	scanf("%d", &seq9int);
	
	for (controle=1; controle<=seq9int; controle++)
		printf("->|%d. Hello World!\n", controle);
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que solicite ao usu�rio uma palavra e um n�mero inteiro que indicar� a quantidade de vezes \nque a palavra digitada ser� impressa na tela, um em cada linha.\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	char palavra[25];
	int num10int;
	
	printf("Digite uma palavra e seguido da tecla 'enter', um n�mero que indicar� uma sequ�ncia: \n");
	scanf("%s %d", &palavra, &num10int);
	
	for (controle=1; controle<=num10int; controle++)
		printf("->|%d. %s\n", controle, palavra);
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de n�meros a serem lidos. Em seguida, \nleia n n�meros (conforme o valor informado anteriormente) e imprima a soma e a m�dia aritm�tica dos n�meros informados.\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	int num11Entrada;
	float soma11Vetor, media11Arit;
	
	printf("Digite um n�mero de entrada que indicar� uma sequ�ncia: ");
	scanf("%d", &num11Entrada);
	
	for (controle=1; controle<=num11Entrada; controle++) {
		float vetor[num11Entrada];
		printf("Digite o %d. n�mero: ", controle);
		scanf("%f", &vetor[controle]);
			soma11Vetor = soma11Vetor + vetor[controle];
			media11Arit = soma11Vetor / num11Entrada;
	}
	printf("->|A soma dos valores informados �: %g\n->|A m�dia aritm�tica dos valores informados �: %g", soma11Vetor, media11Arit);
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de registros a serem lidos (N). \nEm seguida algoritmo deve solicitar o nome e idade de N pessoas e ao final apresentar o nome da pessoa mais velha.\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	///* -> COM vetor e string
	int int12Qtd, maiorIdade12 = 0, idade12vet[int12Qtd];
	char nome12vet[int12Qtd][25], nomeVelho12vet[25];
	printf("Informe quantas pessoas ser�o pesquisadas: ");
	scanf("%d", &int12Qtd);
	
	for (controle=1; controle<=int12Qtd; controle++) {
		printf("Digite o %d. nome e %d. idade seguidos da tecla 'enter': \n", controle, controle);
		scanf("%s %d", &nome12vet[controle], &idade12vet[controle]);
		
		if (idade12vet[controle] > maiorIdade12) {
			maiorIdade12 = idade12vet[controle];
			strcpy (nomeVelho12vet, nome12vet[controle]);
		}
	}
	printf("\n->|A pessoa mais velha � %s com %i anos.", nomeVelho12vet, maiorIdade12);
	//*/
	
	/* -> SEM vetor e string!!!
	int int12Qtd, maiorIdade12 = 0, idade12vet;
	char nome12vet[25], nomeVelho12vet[25];
	printf("Informe quantas pessoas ser�o pesquisadas: ");
	scanf("%d", &int12Qtd);
	
	for (controle=1; controle<=int12Qtd; controle++) {
		printf("Digite o %d. nome e %d. idade seguidos da tecla 'enter': \n", controle, controle);
		scanf("%s %d", &nome12vet, &idade12vet);
	
		if (idade12vet > maiorIdade12) {
			maiorIdade12 = idade12vet;
				for (int j=0; j<=25; j++)
					nomeVelho12vet[j] = nome12vet[j];
		}
	}
	printf("\n->|A pessoa mais velha � %s com %i anos.", nomeVelho12vet, maiorIdade12);
	*/
	
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de registros a serem lidos (N). \nEm seguida algoritmo deve solicitar o sexo (M/F) e idade de N pessoas e ao final apresentar a m�dia de idade de \nambos os g�neros catalogados.\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	int int13Qtd, idade13, qtd13Masc = 0, qtd13Fem = 0, soma13Masc = 0, soma13Fem = 0;
	char sexo13;
	printf("Informe quantas pessoas ser�o pesquisadas: ");
	scanf("%d", &int13Qtd);
	
	for (controle=1; controle<=int13Qtd; controle++) {
		do {
			printf("Digite o %d. sexo [F / M]: ", controle);
			scanf("%s", &sexo13);
		} while (sexo13 != 'M' && sexo13 != 'm' && sexo13 != 'F' && sexo13 != 'f');
		do {
			printf("Digite a %d. idade: ", controle);
			scanf("%d", &idade13);
		} while (idade13 <= 0 || idade13 > 120);
		
		if (sexo13 == 'F' || sexo13 == 'f') {
			soma13Fem  = soma13Fem  + idade13;
			qtd13Fem  += 1;
		}
		if (sexo13 == 'M' || sexo13 == 'm') {
			soma13Masc = soma13Masc + idade13;
			qtd13Masc += 1;
		}
	}
	printf("->|A m�dia de idade do sexo Feminino �: %d\n->|A m�dia de idade do sexo Masculino �: %d", (soma13Fem/qtd13Fem), (soma13Masc/qtd13Masc));

	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que solicite ao usu�rio 10 n�meros reais e ao final apresente o maior e o menor deles.\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	float num14real, numMaior14, numMenor14;
	
	printf("*Digite 10 n�meros reais a seguir!\n");
	numMaior14 = 0; //Diz que "numMaior14" inicia com 0(zero).
	numMenor14 = 0; //Diz que "numMenor14" inicia com 0(zero).
	
	for (controle=1; controle<=10; controle++) {
		printf("Digite o %d. n�mero: ", controle);
		scanf("%f", &num14real);
			if (controle == 1) {
				numMaior14 = num14real;
				numMenor14 = num14real;
			}
			
			if (num14real > numMaior14)
				numMaior14 = num14real;
			if (num14real < numMenor14)
				numMenor14 = num14real;
	}
	printf("->|O maior n�mero informado foi: %.2f\n->|O menor n�mero informado foi: %.2f", numMaior14, numMenor14);
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Elabore um algoritmo que solicite N n�meros reais e quando o usu�rio informar o valor nulo 0 (zero) o programa \nordene e mostre todos os n�meros informados de forma crescente.\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	int contador = 0, controle = 0;
	int j, k; //Ambos servem para alguma coisa... praq ?? Num sei...
	float num15real[1000], aux;
	
	do {
		//o "contador" abaixo serve para contar quantos n�meros foram digitados.
		contador++; //ou contador+=1; ou contador = contador + 1;
		printf("Digite um n�mero real: ");
		scanf("%f", &num15real[contador]);
	} while (num15real[contador] != 0);
	
	//At� o final do "for" a seguir, se trata dos n�meros n�o ordernados!
	printf("\n->|(%d) N�meros n�o ordenados, s�o eles: ", contador-1); //"-1" para que seja ignorado o 0 (zero).
	for (controle=1; controle<contador; controle++) {
		printf("%g ", num15real[controle]);
	}
	
	//A partir dq se trata dos n�meros ordenados!!
	for (controle=1; controle<contador-1; controle++) { //"-1" para que seja ignorado o 0 (zero).
		for (j=1; j<contador-1; j++) { //"-1" para que seja ignorado o 0 (zero).
			if (num15real[j] > num15real[j+1]) {
				aux = num15real[j];
				num15real[j] = num15real[j+1];
				num15real[j+1] = aux;
			}
		}
	}
	printf("\n->|Os n�meros anteriores so que ordenados: ");
	for (k=1; k<contador; k++) {
		printf("%g ", num15real[k]);
	}
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Escreva um programa que v� solicitando as idades dos alunos da sala at� que todos sejam informados (perguntar ao \nusu�rio se deseja informar a idade do pr�ximo aluno). Ao final apresentar a idade do mais novo, a idade do mais \nvelho, Quantos alunos t�m mais de 18 anos, quantos alunos t�m at� 18 anos, a m�dia aritm�tica e a mediana.\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	int idade16[100], totalAlunos16 = 0, maiorIdade16 = 0, menorIdade16 = 0, mais18anos_16 = 0, ate18anos_16 = 0, somaIdades16 = 0;
	int aux, md = 0, medAri16 = 0, mediana16 = 0;
	char s_n16;
	
	do {
		totalAlunos16++;
		
		printf("Digite a idade de um aluno: ");
		scanf("%d", &idade16[totalAlunos16]);
		somaIdades16 = somaIdades16 + idade16[totalAlunos16];
		
		printf("Deseja digitar outra idade [S/N]: ");
		scanf("%s", &s_n16);
		
		if (totalAlunos16 == 1)
			printf("->|(%d) Idade coletada at� agora.\n\n", totalAlunos16);			
		else
			printf("->|(%d) Idades coletadas at� agora.\n\n", totalAlunos16);			
			
		if (totalAlunos16 == 1) {
			maiorIdade16 = idade16[totalAlunos16];
			menorIdade16 = idade16[totalAlunos16];
		}
		
		if (idade16[totalAlunos16] > maiorIdade16)
			maiorIdade16 = idade16[totalAlunos16];
		if (idade16[totalAlunos16] < menorIdade16)
			menorIdade16 = idade16[totalAlunos16];
		
		if (idade16[totalAlunos16] > 18)
			mais18anos_16++;
		if (idade16[totalAlunos16] <= 18)
			ate18anos_16++;
		
	} while (s_n16 == 'S' || s_n16 == 's');
	
	medAri16 = somaIdades16 / totalAlunos16;
	
	for (controle=1; controle<=totalAlunos16; controle++)
		for (int j=1; j<totalAlunos16; j++)
			if (idade16[j] > idade16[j+1]) {
				aux = idade16[j];
				idade16[j] = idade16[j+1];
				idade16[j+1] = aux;
			}
	printf("\n->|(%d) idades ordenadas: ", totalAlunos16);
	for (controle=1; controle<=totalAlunos16; controle++) {
		printf("%d ", idade16[controle]);
		if (controle%2 == 0) {
			md = controle / 2;
			mediana16 = (idade16[md] + idade16[md+1]) / 2; 
		}
		else {
			md = (controle + 1) / 2;
			mediana16 = idade16[md];
		}
	}
	printf("\n");
	printf("->|A idade do mais novo �:  %d\n", menorIdade16);
	printf("->|A idade do mais velho �: %d\n", maiorIdade16);
	printf("->|%d alunos tem mais de 18 anos.\n", mais18anos_16);
	printf("->|%d alunos tem at� 18 anos.\n", ate18anos_16);
	printf("->|A m�dia aritm�tica das idades �: %d\n", medAri16);
	printf("->|A mediana das idades �: %d\n", mediana16);
	
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
