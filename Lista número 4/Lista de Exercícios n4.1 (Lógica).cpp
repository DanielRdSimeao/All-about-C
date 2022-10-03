#include <locale.h>
#include <math.h>
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
	
	int consulta = 0;
	
	Inicio:
do {
	system("cls || clear");	
	printf("\n *Obs: Esta lista obt�m apenas 24 quest�es! (L�GICA)\n *Obs�: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\n Digite qual n�mero da lista deseja consultar: ");
	scanf("%d", &consulta);
	

switch (consulta) {
	// Pela lista original a numera��o come�a em 7. Ent�o caso se perca, basta somar +6 ao case desejado.
	// EX.: case 7 + 6 = 13. (VERIFICAR O .PDF)

case 1: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo para calcular a �rea de uma circunfer�ncia, considerando a f�rmula �REA = PI * RAIO�. \n   Utilize as vari�veis AREA e RAIO, a constante PI (PI = 3,14159) e os operadores aritm�ticos de multiplica��o.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	float areaCircun=0, raio=0;
	printf("Digite o raio: "); scanf("%f", &raio);
	areaCircun = M_PI * pow(raio, 2);
	printf("\n->|A �rea dessa circunfer�ncia �: %g", areaCircun);
	
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que calcule a �rea de um tri�ngulo, considerando a f�rmula �REA = (BASE . ALTURA) / 2. \n   Utilize as vari�veis AREA, BASE e ALTURA e os operadores aritm�ticos de multiplica��o e divis�o.\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	float areaTrian=0, base=0, altura=0;
	printf("Digite a base: "); scanf("%f", &base);
	printf("Digite a altura: "); scanf("%f", &altura);
	areaTrian = (base*altura) / 2;
	printf("\n->|A �rea desse tri�ngulo �: %g", areaTrian);
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que:\n   a) Leia o nome;\n   b) Leia o sobrenome;\n   c) Concatene o nome com o sobrenome;\n   d) Apresente o nome completo.\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	char nome[25], sobrenome[25], nomeCompleto[50];
	printf("Digite o nome: "); scanf("%s", &nome);
	printf("Digite o sobrenome: "); scanf("%s", &sobrenome);
	
	/* SEM ESPA�O:
	strcat (nome, sobrenome);
	*/
	
	/* COM ESPA�O:
	strcpy (nomeCompleto, nome);
	strcat (nomeCompleto, " ");
	strcat (nomeCompleto, sobrenome);
	printf("Seu nome completo �: %s", nomeCompleto);
	*/
	
	// COM sprintf
	sprintf(nomeCompleto, "Seu nome � %s %s", nome, sobrenome);
	printf("\n%s", nomeCompleto);
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que:\n   a) Leia um n�mero inteiro;\n   b) Leia um segundo n�mero inteiro;\n   c) Efetue a adi��o dos dois valores;\n   d) Apresente o valor calculado.\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	int num1=0, num2=0, soma=0;
	printf("Informe o 1� n�mero: "); scanf("%d", &num1);
	printf("Informe o 2� n�mero: "); scanf("%d", &num2);
	soma = num1 + num2;
	printf("A soma dos n�meros �: %d", soma);
	
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que:\n   a) Obtenha o valor para a vari�vel HT (horas trabalhadas no m�s);\n   b) Obtenha o valor para a vari�vel VH (valor hora trabalhada);\n   c) Obtenha o valor para a vari�vel PD (percentual de desconto);\n   d)Calcule o sal�rio bruto => SB = HT * VH;\n   e) Calcule o total de desconto => TD = (PD/100) * SB;\n   f) Calcule o sal�rio l�quido => SL = SB - TD;\n   g) Apresente os valores de: Horas trabalhadas, Sal�rio Bruto, Desconto, Sal�rio L�quido.\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	float HT=0, VH=0, PD=0, SB=0, TD=0, SL=0;
	printf("\nInforme a quantidade de horas trabalhadas no m�s: "); scanf("%f", &HT);
	printf("\nInforme o valor hora trabalhada: "); scanf("%f", &VH);
	printf("\nInforme o percentual de desconto: "); scanf("%f", &PD);
	SB = HT * VH; TD = (PD/100)*SB; SL = SB - TD;
	printf("\n->|%g horas trabalhadas.\n->|Sal�rio bruto de: %g.\n->|Desconto de: %g%%.\n->|Sal�rio Liquido de: %g.", HT, SB, PD, SL);
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahreinheit. \n   A f�rmula de convers�o �: F = (9 * C + 160) / 5, na qual F � a temperatura em Fahrenheit e C � a temperatura \n   em Celsius.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	float C=0, F=0;
	printf("Informe uma temperatura em graus Celsius: "); scanf("%f", &C);
	F = (9*C + 160) / 5;
	printf("%g graus Celsius equivalem � %g graus Fahrenheit.", C, F);
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia uma temperatura em Fahrenheit e a apresente convertida em graus Celcius. \n   A f�rmula de convers�o � 'C = (F - 32) * (5 / 9', na qual F � a temperatura em Fahrenheit e C � a temperatura em \n   Celcius.\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	float F=0, C=0;
	printf("Informe uma temperatura em graus Fahrenheit: "); scanf("%f", &F);
	
	// C = (F-32) * (5/9) N�O FUNCIONA.
	
	C  = (F-32) * 5/9; 
	printf("%g graus Fahrenheit equivalem � %g graus Celsius.", F, C);
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que calcule e apresente o valor do volume de uma lata de �leo, utilizando a f�rmula \n   'VOLUME = 3,14159 * RAIO� * ALTURA'.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	float volume=0, raio=0, altura=0;
	printf("Informe o raio da lata de �leo: "); scanf("%f", &raio);
	printf("Informe a altura da lata de �leo: "); scanf("%f", &altura);
	volume = M_PI * pow(raio, 2) * altura;
	printf("\n->|O volume da lata de �leo �: %g", volume);
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que calcule a quantidade de litros de combust�vel gasta emuma viagem, utilizando um \n   autom�vel que faz 12Km por litro. Para obter oc�lculo, o usu�rio deve fornecer o tempo gasto na viagem\n   e a velocidade m�dia durante ela. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula \n   'DISTANCIA = TEMPO * VELOCIDADE'. Tendo o valor da dist�ncia, basta calcular a quantidade de litros de \n   combust�vel utilizada na viagem com a f�rmula: 'LITROS_USADOS = DISTANCIA / 12'. \n   ==>O programa deve apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida \n      e quantidade de litros utilizada na viagem. \n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	float tempo=0, velocidade=0, distancia=0, litrosUsados=0;
	printf("Informe o tempo gasto na viagem: "); scanf("%f", &tempo);
	printf("Informe a velociade m�dia da viagem: "); scanf("%f", &velocidade);
	distancia = tempo * velocidade; litrosUsados = distancia / 12;
	printf("\n->|Velocidade m�dia: %g\n->|Tempo gasto na viagem: %g hora(s)\n->|Dist�ncia percorrida: %g Km/h\n->|Litros utilizados: %g l", velocidade, tempo, distancia, litrosUsados);
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois valores para as vari�veis A e B e efetue a troca dos valores de forma que \n   a vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. \n   ==>Apresente os valores trocados.\n", consulta);
printf("\n========================================\n=================  10  =================\n========================================\n");
	
	float A=0, B=0, aux=0;
	printf("Digite o valor de 'A': "); scanf("%f", &A);
	printf("Digite o valor de 'B': "); scanf("%f", &B);
	aux = A; A = B; B = aux;
	printf("'A' agora vale: %g e 'B' agora vale: %g", A, B);
	
	printf("\n\n");
	system ("pause");
break;
}


case 11: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==> Fa�a um algoritmo que leia quatro n�meros e apresente os resultados de adi��oe multiplica��o dos valores \n   entre si, baseando-se na utiliza��o da propriedadedistributiva, ou seja, se forem lidas as vari�veis A, B, \n   C e D, devem ser somadase multiplicadas A com B, A com C e A com D; B com C, B com D e por �ltimo C com D.\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	float A=0, B=0, C=0, D=0;
	printf("\nInforme o valor de 'A' n�mero: ", A); scanf("%f", &A);
	printf("\nInforme o valor de 'B' n�mero: ", B); scanf("%f", &B);
	printf("\nInforme o valor de 'C' n�mero: ", C); scanf("%f", &C);
	printf("\nInforme o valor de 'D' n�mero: ", D); scanf("%f", &D);
	printf("\n->|A soma de A com B �: %g ", A+B);
	printf("\n->|A multiplica��o de A com B �: %g ", A*B);
	printf("\n->|A soma de A com C �: %g ", A+C);
	printf("\n->|A multiplica��o de A com C �: %g ", A*C);
	printf("\n->|A soma de A com D �: %g ", A+D);
	printf("\n->|A multiplica��o de A com D �: %g ", A*D);
	
	printf("\n\n->|A soma de B com C �: %g ", B+C);
	printf("\n->|A multiplica��o de B com C �: %g ", B*C);
	printf("\n->|A soma de B com D �: %g ", B+D);
	printf("\n->|A multiplica��o de B com D �: %g ", B*D);
	
	printf("\n\n->|A soma de C com D �: %g ", C+D);
	printf("\n->|A multiplica��o de C com D �: %g ", C*D);
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia os valores de COMPRIMENTO, LARGURA e ALTURA e apresente o valor do volume \n   de uma caixa retangular. Utilize para o c�lculo a f�rmula 'VOLUME = COMPRIMENTO * LARGURA * ALTURA.'\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	float comprimento=0, largura=0, altura=0, volume=0;
	printf("\nInforme o comprimento de uma caixa retangular: "); scanf("%f", &comprimento);
	printf("\nInforme a largura: "); scanf("%f", &largura);
	printf("\nInforme a altura: "); scanf("%f", &altura);
	volume = comprimento * largura * altura;
	printf("\n->|O volume desta caixa retangular � de: %g", volume);
	
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor \n   lido.\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	int num=0, quad=0, cubo=0;
	printf("Informe um n�mero: "); scanf("%d", &num);
	quad = pow(num, 2); cubo = pow(num, 3);
	printf("->|O quadrado deste n�mero �: %d.\n->|O cubo deste n�mero �: %d.", quad, cubo);
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado do quadrado da soma \n   dos valores lidos.\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	int A=0, B=0, C=0, soma=0, quad=0;
	printf("\nInforme o valor de 'A': "); scanf("%d", &A);
	printf("\nInforme o valor de 'B': "); scanf("%d", &B);
	quad = pow(A+B, 2);
	printf("\n->|O quadrado da soma dos dois valores �: %d", quad);
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado da soma do quadrado \n   de cada valor lido.\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	int A=0, B=0, quadA=0, quadB=0, somaQuad_AB=0;
	printf("\nInforme o valor de 'A': "); scanf("%d", &A);
	printf("\nInforme o valor de 'B': "); scanf("%d", &B);
	quadA = pow(A, 2); quadB = pow(B, 2);
	somaQuad_AB = quadA + quadB;
	printf("\n->|A soma do quadrado de cada valor apresentado �: %d", somaQuad_AB);
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois n�meros nas vari�veis Val1 e Val2, calcule sua m�dia na vari�vel Media \n   e imprima seu valor\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	float Val1=0, Val2=0, media=0;
	printf("\nInforme o 1� valor: "); scanf("%f", &Val1);
	printf("\nInforme o 2� valor: "); scanf("%f", &Val2);
	printf("\n->|A m�dia dos valores informados �: %g", (Val1 + Val2) / 2);
	
	printf("\n\n");
	system ("pause");
break;
}


case 17: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois n�meros nas vari�veis NumA e NumB, nessa ordem, e imprima em ordem \n   inversa, isto �, se os dados lidos forem 5 e 9, por exemplo, devem ser impressos na ordem 9 e 5.\n", consulta);
printf("\n========================================\n=================  17  =================\n========================================\n");
	
	float NumA=0, NumB=0;
	printf("\nInforme o 1� valor: "); scanf("%f", &NumA);
	printf("\nInforme o 2� valor: "); scanf("%f", &NumB);
	printf("\n->|Os valores informados na ordem inversa fica: %g e %g.", NumB, NumA);
	
	printf("\n\n");
	system ("pause");
break;
}


case 18: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia a velocidade de um ve�culo em km/h e calcule e imprima a \n   velocidade em m/s (metros por segundo).\n", consulta);
printf("\n========================================\n=================  18  =================\n========================================\n");
	
	float km_h=0;
	printf("\nInforme uma velocidade em Km/h: "); scanf("%f", &km_h);
	printf("\n->|A velocidade informada em m/s equivale �: %g", km_h/3.6);
	
	printf("\n\n");
	system ("pause");
break;
}


case 19: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Fa�a um algoritmo que leia dois n�meros inteiros (Int1 e Int2) e imprima o quociente e o \n   resto da divis�o inteira de Int1 por Int2.\n", consulta);
printf("\n========================================\n=================  19  =================\n========================================\n");
	
	int int1=0, int2=0;
	printf("\nInforme o 1� valor: "); scanf("%d", &int1);
	printf("\nInforme o 2� valor: "); scanf("%d", &int2);
	printf("\n->|O quociente de %d por %d � %d.\n->|O resto da divis�o de %d por %d � %d.", int1, int2, int1/int2, int1, int2, int1%int2);
	
	printf("\n\n");
	system ("pause");
break;
}


case 20: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Considere a seguinte situa��o: descontam-se inicialmente 10% do sal�rio bruto do trabalhador como contribui��o \n   � previd�ncia social. Ap�s esse desconto, h� um outro desconto de 5%% sobre o valor restante do \n   sal�rio bruto, a t�tulo de um determinado imposto. \n   ==>Fa�a um algoritmo que leia o sal�rio bruto de um cidad�o e imprima o seu sal�rio l�quido.\n", consulta);
printf("\n========================================\n=================  20  =================\n========================================\n");
	
	float salarioB=0, desconto1=0, desconto2=0, salarioLi=0;
	printf("\nInforme o seu sal�rio bruto: "); scanf("%f", &salarioB);
	
	// N�O QUER FUNCIONAR... ???
	//desconto1 = salarioB - ((10/100) * salarioB); desconto2 = desconto1 - ((5/100) * salarioB);
	
	desconto1 = salarioB - (0.1*salarioB); desconto2 = desconto1 - (0.05*desconto1);
	printf("\n->|Com os devidos ajustes no sal�rio, o seu sal�rio l�quido � de: %g reais.", desconto2);
	
	printf("\n\n");
	system ("pause");
break;
}


// DICA: Para a solu��o dos exerc�cios abaixo utilize 
//       os operadores de divis�o inteira e de m�dulo.

case 21: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Leia um c�digo de cinco algarismos (vari�vel Codigo) e gere o digito verificador(DigitoV) m�dulo 7 para o mesmo.\n   Supondo que os cinco algarismos do c�digo s�o ABCDE, uma forma de calcular o digito desejado, com m�dulo 7 �:\n\n   DigitoV = resto da divis�o de S por 7, onde \n   S = 6*A + 5*B + 4*C + 3*D + 2*E\n", consulta);
printf("\n========================================\n=================  21  =================\n========================================\n");
	
	int A=0, B=0, C=0, D=0, E=0, S=0, DigitoV=0;
	printf("\nInforme o 1� n�mero: "); scanf("%d", &A);
	printf("Informe o 2� n�mero: "); scanf("%d", &B);
	printf("Informe o 3� n�mero: "); scanf("%d", &C);
	printf("Informe o 4� n�mero: "); scanf("%d", &D);
	printf("Informe o 5� n�mero: "); scanf("%d", &E);
	S = 6*A + 5*B + 4*C + 3*D + 2*E;
	DigitoV = S % 7;
	printf("\n->|O digito verificador m�dulo 7 �: %d", DigitoV);
	
	printf("\n\n");
	system ("pause");
break;
}


case 22: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Dado um n�mero de tr�s algarismos N = CDU (onde C � o algarismo das centenas, D � o algarismo das dezenas e U o \n   algarismo das unidades), considere o n�mero M constitu�do pelos algarismos de N em ordem inversa, isto �, M = UDC. \n   Gerar M a partir de N (p.ex.: N = 123 -> M = 321).\n", consulta);
printf("\n========================================\n=================  22  =================\n========================================\n");
	
	int CDU=0, UDC=0;
	printf("\nInforme um n�mero de tr�s algarismos: "); scanf("%d", &CDU);
	while (CDU > 0) {
		UDC = 10 * UDC + CDU % 10;
		CDU /= 10;
	}
	printf("\n->|A invers�o do n�mero �: %d", UDC);
	
	printf("\n\n");
	system ("pause");
break;
}


case 23: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Admitindo que uma data � lida pelo algoritmo em uma vari�vel inteira, e n�o em uma vari�vel do tipo data, \n   crie um algoritmo que leia uma data no formato DDMMAA e imprima essa data no formato AAMMDD, onde:\n   ->A letra D corresponde a dois algarismos representando o dia;\n   ->A letra M corresponde a dois algarismos representando o m�s;\n   ->A letra A corresponde aos dois �ltimos algarismos representando o ano.\n", consulta);
printf("\n========================================\n=================  23  =================\n========================================\n");
	
	int d=0, m=0, a=0;
	printf("\nInforme o dia: "); scanf("%d", &d);
	printf("Informe o m�s: "); scanf("%d", &m);
	printf("Informe o ano: "); scanf("%d", &a);
	printf("\n->|1� formato: (%d/%d/%d).\n->|2� formato: (%d/%d/%d).", d, m, a, a, m, d);
	
	printf("\n\n");
	system ("pause");
break;
}


case 24: {
system("cls || clear");	
printf("\n%d� Exerc�cio proposto:\n==>Suponha que uma escola utilize, como c�digo de matr�cula, um n�mero inteiro no formato AASDDD, onde:\n   ->Os dois primeiros d�gitos, representados pela letra A, s�o os dois �ltimos algarismos do ano da \n     matr�cula;\n   ->O terceiro d�gito, representado pela letra S, vale 1 ou 2, conforme o aluno tenha se matriculado \n     no 1� ou 2� semestre;\n   ->Os quatro �ltimos d�gitos, representados pela letra D, correspondem � ordem da matr�cula do aluno, \n     no semestre e no ano em quest�o.\n\n   ==>Crie um algoritmo que leia o n�mero de matr�cula de um aluno e imprima o ano e o semestre em que \n     ele foi matriculado.\n", consulta);
printf("\n========================================\n=================  24  =================\n========================================\n");
	
	/* JEITO FEIO
	int matricula=0, ano=0, semestre=0;
	printf("\nInforme a Matricula AASDDDD: "); scanf("%d", &matricula);
	ano = matricula / 100000;
	semestre = (matricula - ano * 100000) / 10000;
	printf("\n->|O ano e Semestre s�o: %d e %d.", ano, semestre);
	*/
	
	// JEITO OR-GA-NI-ZA-DO!!
	int mat, ano, semestre;
    printf("Digite a matr�cula do aluno: ");
    scanf("%i", &mat);

    ano = mat/100000;
    semestre = (mat - ano * 100000) / 10000;
    if (ano >= 0 && ano <= 23 )
        printf("\nO aluno foi matr�culado no %i� Semestre de 20%i.\n", semestre, ano);
    if (ano <= 99 && ano > 23 )
        printf("\nO aluno foi matr�culado no %i� Semestre de 19%i.", semestre, ano);
	
	printf("\n\n");
	system ("pause");
break;
}


}

if (consulta > 24) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER N�O ?? S� at� o 24, G�NIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);
	
}
