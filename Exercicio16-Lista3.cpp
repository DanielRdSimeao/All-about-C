#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int controle = 0;
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
			printf("->|(%d) Idade coletada até agora.\n\n", totalAlunos16);			
		else
			printf("->|(%d) Idades coletadas até agora.\n\n", totalAlunos16);			
			
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
	printf("->|A idade do mais novo é:  %d\n", menorIdade16);
	printf("->|A idade do mais velho é: %d\n", maiorIdade16);
	printf("->|%d alunos tem mais de 18 anos.\n", mais18anos_16);
	printf("->|%d alunos tem até 18 anos.\n", ate18anos_16);
	printf("->|A média aritmética das idades é: %d\n", medAri16);
	printf("->|A mediana das idades é: %d\n", mediana16);	
				
}
