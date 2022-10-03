// Programa que recebe um inteiro n e calcula os
// n primeiros termos da sequencia de Fibonacci
// (usando funcao recursiva). (n == num)

#include <stdio.h>

// Funcao recursiva que recebe um inteiro n >= 1
// devolve o N-esimo termo da sequencia de Fibonacci.

int fibonacci(int num) {
	if (num == 1 or num == 2) 
        return (1);
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

// Funcao principal.
int main() {
    int num, i;
  
    do {
		printf(" Digite o numero de termos da sequencia: ");
		scanf("%d", &num);
		if (num <= 0)
			printf(" Numero incorreto!\n\n");
	} while (num <= 0);
  
  // Para cada i (de 1 a n), calcula e imprime o
  // i-esimo termo da sequencia de Fibonacci.
  
	for (i = 1; i <= num; i++) {
		printf(" %d ", fibonacci(i));
	}
	printf("\n");
	return(0);
}
