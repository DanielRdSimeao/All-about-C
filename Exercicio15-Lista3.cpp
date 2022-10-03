#include <locale>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"portuguese");

	int contador = 0, controle = 0;
	int j, k; //Ambos servem para alguma coisa... praq ?? Num sei...
	float num15real[1000], aux;
	
	do {
		//o "contador" abaixo serve para contar quantos números foram digitados.
		contador++; //ou contador+=1; ou contador = contador + 1;
		printf("Digite um número real: ");
		scanf("%f", &num15real[contador]);
	} while (num15real[contador] !=41);
	
	//Até o final do "for" a seguir, se trata dos números não ordernados!
	printf("\n->|(%d) Números não ordenados, são eles: ", contador-1); //"-1" para que seja ignorado o 0 (zero).
	for (controle=1; controle<contador; controle++) {
		printf("%g ", num15real[controle]);
	}
	
	//A partir dq se trata dos números ordenados!!
	for (controle=1; controle<contador-1; controle++) { //"-1" para que seja ignorado o 0 (zero).
		for (j=1; j<contador-1; j++) { //"-1" para que seja ignorado o 0 (zero).
			if (num15real[j] > num15real[j+1]) {
				aux = num15real[j];
				num15real[j] = num15real[j+1];
				num15real[j+1] = aux;
			}
		}
	}
	printf("\n->|Os números anteriores so que ordenados: ");
	for (k=1; k<contador; k++) {
		printf("%g ", num15real[k]);
	}
}
