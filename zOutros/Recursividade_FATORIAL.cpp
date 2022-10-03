#include <stdio.h>

int fatorial (int valor) {
	if(valor==0 || valor==1) 
		return 1;
	else
		return (valor * fatorial(valor-1));
}

int main () {
	int valor;
	
	printf (" Digite o valor a ser fatorado: ");
	scanf("%i", &valor);
	
	printf (" %d fatorado equivale ah: %i", valor, fatorial(valor));
}
