#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[50], email[50];
    int dia, mes, ano, ddd, numero;
}Contato;

// -------- imprimir contato por cadastro ------------------------------
void imprimirCad(Contato **c, int quant){
	setlocale(LC_ALL,"Portuguese");
	system("cls");	
	
    int i;

    printf("\n\t\tLista de Contatos:\n");
    printf("\t--------------------------------\n");
    for(i = 0; i < quant; i++){
        printf("\t%d = %2d/%2d/%4d\t\t- %s\n", i+1, c[i]->dia, c[i]->mes, c[i]->ano, c[i]->nome);
        printf("\t    (%d) %d\t- %s\n", c[i]->ddd, c[i]->numero, c[i]->email);
    }
    printf("\t--------------------------------\n");
}

// -------- Imprimir contatos ordenados (funciona só com os nomes apenas...) --------------------------------
void Ordena(Contato **c, int quant){
	int i, y, r;
	char nome_ordenado[50][50], aux[80];
	
	for (i = 0; i < quant; i++) {
		strcpy(nome_ordenado[i], c[i]->nome);
		printf("\t%s\n", c[3]->nome);
	}
	
	for (i = 0; i <= quant-1; i++) {
		for (y = i+1; y <= quant-1; y++) {
			if (strcmp(nome_ordenado[i], nome_ordenado[y]) > 0) {
				strcpy(aux, nome_ordenado[i]);
				strcpy(nome_ordenado[i], nome_ordenado[y]);
				strcpy(nome_ordenado[y], aux);
			}
		}
	}
	//system ("cls");
	
	
    printf("\n\t\tLista de Contatos Ordenados:\n");
    printf("\t--------------------------------\n");
    for(i = 0; i < quant; i++){
//        printf("\t%d = %2d/%2d/%4d\t\t- %s\n", i+1, c[i]->dia, c[i]->mes, c[i]->ano, nome_ordenado[i]);
//        printf("\t    (%d) %d\t- %s\n", c[i]->ddd, c[i]->numero, c[i]->email);
		printf("\t%d = %s\n", i+1, nome_ordenado[i]);
    }
    printf("\t--------------------------------\n");
	
/* [PARTE QUE ESTAVA EM TESTE (não solicitada pelo trabalho)]
	int nomeDigitado;
//	char nomeDigitado[50];
	
	printf("\n\tDigite o nome do contato: ");
	fflush(stdin);
//	scanf(" %[^n]s", nomeDigitado);
	scanf(" %d", &nomeDigitado);
	nomeDigitado--;
	
	if (nomeDigitado <= quant) {
//	if (nomeDigitado == nome_ordenado) {
        printf("%s | E-Mail: %s | (%d)%d | %d/%d/%d |\n", c[nomeDigitado]->nome, c[nomeDigitado]->email, c[nomeDigitado]->ddd, c[nomeDigitado]->numero, c[nomeDigitado]->dia , c[nomeDigitado]->mes , c[nomeDigitado]->ano);
	}
*/ 
}

// -------- cadastrar contato ------------------------------------------
int cadastrar_contato(Contato **c, int quant, int tam){
	setlocale(LC_ALL,"Portuguese");
	system ("cls");
	
    if(quant < tam){
        Contato *novo = malloc(sizeof(Contato));

        printf("\n\tDigite o nome do contato: ");
        scanf(" %50[^\n]", novo->nome);

        printf("\tDigite a data de nascimento. Ex.: 12 12 2002: ");
        scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
        
        printf("\tDigite um telefone. Ex.: 61 987654321: ");
        scanf("%d %d", &novo->ddd, &novo->numero);
        
        printf("\tDigite um e-mail: ");
		scanf(" %50[^\n]", novo->email);
		
        c[quant] = novo;
        system ("cls");
    	printf("\t>>Cadastro feito com sucesso!<<\n");
        return 1;
    }
    else{
        printf("\n\tImpossivel novo cadastro. Vetor cheio!\n");
        return 0;
    }
}

// -------- alterar contato --------------------------------------------
void alterar_contato(Contato **c, int quant){
	setlocale(LC_ALL,"Portuguese");

    int id;

    imprimirCad(c, quant);

    printf("\n\tDigite o codigo do contato que deseja alterar: ");
    scanf("%d", &id);
    getchar();
    id--;

    if(id >= 0 && id < quant){
        Contato *novo = malloc(sizeof(Contato));
        printf("\n\tDigite o nome do contato: ");
        scanf("%50[^\n]", novo->nome);
        
        printf("\n\tDigite a data de nascimento. Ex.: 12 12 2002: ");
        scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
        
        printf("\tDigite um telefone. Ex.: 61 987654321: ");
        scanf("%d %d", &novo->ddd, &novo->numero);
        
        printf("\tDigite um e-mail: ");
		scanf(" %50[^\n]", novo->email);
        
        getchar();
        c[id] = novo;
        system ("cls");
        printf("\n\t>>Contato alterado com sucesso!<<\n");
    }
    else
        printf("\n\tCodigo invalido!\n");
}

// -------- excluir contato --------------------------------------------
int excluir_contato(Contato **c, int quant){
	setlocale(LC_ALL,"Portuguese");

    int id;

    imprimirCad(c, quant);

    printf("\n\tDigite o codigo do contato que deseja excluir: ");
    scanf("%d", &id);
    
    getchar();
    id--;

    if(id >= 0 && id < quant){
        // apagar contato
        free(c[id]);
        if(id < quant - 1)
            c[id] = c[quant - 1];
        system ("cls");
    	printf("\n\t>>Contato deletado com sucesso!<<\n\n");
        return -1; // excluido com sucesso
	}
    else{
        printf("\n\tCodigo invalido!\n");
        return 0; // nenhum contato excluido
    }
}

// -------- salvar arquivo ---------------------------------------------
void salvar(Contato **c, int quant, char arq[]){
	setlocale(LC_ALL,"Portuguese");
	
    FILE *file = fopen(arq, "w");
    int i;

    if(file){
        fprintf(file, "%d\n", quant);
        for(i = 0; i < quant; i++){
            fputs(c[i]->nome, file);
            fputc('\n', file);
            fprintf(file, "%d %d %d\n", c[i]->dia, c[i]->mes, c[i]->ano);
            fprintf(file, "%d %d\n", c[i]->ddd, c[i]->numero);
            fprintf(file, "%s\n", c[i]->email);
        }
        fclose(file);
        system ("cls");
        printf("\n\t>>Arquivo salvo com sucesso!<<\n\n");
    }
    else
        printf("\n\tNAO FOI POSSIVEL ABRIR/CRIAR O ARQUIVO!\n");
}

// -------- ler arquivo ------------------------------------------------
int ler_arquivo(Contato **c, char arq[]){
	setlocale(LC_ALL,"Portuguese");

    FILE *file = fopen(arq, "r");
    int quant = 0, i;
    Contato *novo = malloc(sizeof(Contato));

    if(file){
        fscanf(file, "%d\n", &quant);
        for(i = 0; i < quant; i++){
            //fgets(novo->nome, 50, file);
            fscanf(file, " %50[^\n]", novo->nome);
            fscanf(file, "%d %d %d\n", &novo->dia, &novo->mes, &novo->ano);
            fscanf(file, "%d %d", &novo->ddd, &novo->numero);
            fscanf(file, " %50[^\n]", novo->email);
			c[i] = novo;
            novo = malloc(sizeof(Contato));
        }
        fclose(file);
        system ("cls");
        printf("\n\t>>Arquivo carregado com sucesso!<<\n\n");
    }
    else
        printf("\n\tNAO FOI POSSIVEL ABRIR/CRIAR O ARQUIVO!\n");
    return quant;
}


int main(){
	setlocale(LC_ALL,"Portuguese");

    Contato *agenda[50];
    char arquivo[] = {"agenda.txt"};
    int opcao, tam = 50, quant = 0;

    do{
        printf("\n\t0 - Sair\n\t1 - Cadastrar\n\t2 - Alterar\n\t3 - Imprimir (por cadastro)\n\t4 - Imprimir (por nome)\n\t5 - Salvar\n\t6 - Ler arquivo\n\t7 - Excluir Contato\n");
        printf("\n\tInforme a opção desejada: ");
		scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            quant += cadastrar_contato(agenda, quant, tam);
            break;
        case 2:
            alterar_contato(agenda, quant);
            break;
        case 3:
            imprimirCad(agenda, quant);
            break;
        case 4:
        	Ordena(agenda, quant);
        	break;
        case 5:
            salvar(agenda, quant, arquivo);
            break;
        case 6:
            quant = ler_arquivo(agenda, arquivo);
            break;
        case 7:
            quant += excluir_contato(agenda, quant);
            break;
        default:
            if(opcao != 0)
                printf("\n\tOpção inválida!!!\n");
        }
    }while(opcao != 0);

    return 0;
}
