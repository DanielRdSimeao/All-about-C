#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, tam, *vet;
	
	printf(" Digite o tamanho do vetor: ");
	scanf ("%d", &tam);
	srand (time(NULL));
	
	// EM ".c"    (Usando malloc):
	//		vet = malloc (tam * sizeof(int));
	
	// EM ".cpp"  (Usando new/delete):
			vet = new int [tam];
		
	if (vet) {
		printf(" Memoria alocada com sucesso!\n");
		
		for (i=0; i<tam; i++)
			*(vet + i) = rand()%100;
			
		for (i=0; i<tam; i++)
			printf(" %d ", *(vet + i));
		
		printf("\n");
	}
	else
		printf(" *Erro ao alocar memoria!\n");
}
