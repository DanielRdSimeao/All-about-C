// Escreva um algoritmo que solicite ao usuario um numero inteiro positivo e ao final 
// apresente a soma de todos os seus antecessores a partir de 0 (zero) Ex.: 5 -> 5+4+3+2+1 = 15
// Parte 2: Criar uma função para essa operação que recebera dois parametros na assinatura
// Parâmetro 1: Valor inteiro	Parâmetro 2: Se quer a impressão dos números	Parâmetro 3: 
// Função <=> interface <=> subtortina <=> metodo <=> subprograma <=> modulo <=> rotina

#include <stdio.h>
#include <locale.h>

int SomaTodosSEMRecursividade (int valor, bool imprimir) {
	int soma = 0;
	if (imprimir)
		printf("\n 0");
	for (int controle=1; controle<=valor; controle++) {
		soma+=controle;
		if (imprimir)
			printf(" + %d", controle);
	}
	if (imprimir)
		printf(" = %d", soma);
	return (soma);
}



int main () {
	setlocale (LC_ALL, "portuguese");
	
	int num, i;

	printf(" Digite um número inteiro positivo: ");
	scanf("%d", &num);	
	printf("\n Deseja imprimir todo o calculo do resultado ?? [0-Não / 1-Sim]: ");
	scanf("%d", &i);
	
	if (i)
		SomaTodosSEMRecursividade(num, i);
	else
		printf("\n Total: %d", SomaTodosSEMRecursividade (num, i));
	/*
	if (i)
		SomaTodosCOMRecursividade(num, i);
	else
		printf("\n Total: %d", SomaTodosCOMRecursividade (num, i));
	*/
}
