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
	
	int consulta = 0;
	
	Inicio:
do {
	system("cls || clear");	
	printf("\n *Obs: Esta lista obtém apenas 24 questões! (LÓGICA)\n *Obs²: Caso queira finalizar o programa, por favor digite 0 (zero)!");
	printf("\n\n Digite qual número da lista deseja consultar: ");
	scanf("%d", &consulta);
	

switch (consulta) {
	// Pela lista original a numeração começa em 7. Então caso se perca, basta somar +6 ao case desejado.
	// EX.: case 7 + 6 = 13. (VERIFICAR O .PDF)

case 1: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo para calcular a área de uma circunferência, considerando a fórmula ÁREA = PI * RAIO². \n   Utilize as variáveis AREA e RAIO, a constante PI (PI = 3,14159) e os operadores aritméticos de multiplicação.\n", consulta);
printf("\n========================================\n=================  01  =================\n========================================\n");
	
	float areaCircun=0, raio=0;
	printf("Digite o raio: "); scanf("%f", &raio);
	areaCircun = M_PI * pow(raio, 2);
	printf("\n->|A área dessa circunferência é: %g", areaCircun);
	
	printf("\n\n");
	system ("pause");
break;
}


case 2: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula ÁREA = (BASE . ALTURA) / 2. \n   Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão.\n", consulta);
printf("\n========================================\n=================  02  =================\n========================================\n");
	
	float areaTrian=0, base=0, altura=0;
	printf("Digite a base: "); scanf("%f", &base);
	printf("Digite a altura: "); scanf("%f", &altura);
	areaTrian = (base*altura) / 2;
	printf("\n->|A área desse triângulo é: %g", areaTrian);
	
	printf("\n\n");
	system ("pause");
break;
}


case 3: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que:\n   a) Leia o nome;\n   b) Leia o sobrenome;\n   c) Concatene o nome com o sobrenome;\n   d) Apresente o nome completo.\n", consulta);
printf("\n========================================\n=================  03  =================\n========================================\n");
	
	char nome[25], sobrenome[25], nomeCompleto[50];
	printf("Digite o nome: "); scanf("%s", &nome);
	printf("Digite o sobrenome: "); scanf("%s", &sobrenome);
	
	/* SEM ESPAÇO:
	strcat (nome, sobrenome);
	*/
	
	/* COM ESPAÇO:
	strcpy (nomeCompleto, nome);
	strcat (nomeCompleto, " ");
	strcat (nomeCompleto, sobrenome);
	printf("Seu nome completo é: %s", nomeCompleto);
	*/
	
	// COM sprintf
	sprintf(nomeCompleto, "Seu nome é %s %s", nome, sobrenome);
	printf("\n%s", nomeCompleto);
	
	
	printf("\n\n");
	system ("pause");
break;
}


case 4: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que:\n   a) Leia um número inteiro;\n   b) Leia um segundo número inteiro;\n   c) Efetue a adição dos dois valores;\n   d) Apresente o valor calculado.\n", consulta);
printf("\n========================================\n=================  04  =================\n========================================\n");
	
	int num1=0, num2=0, soma=0;
	printf("Informe o 1º número: "); scanf("%d", &num1);
	printf("Informe o 2º número: "); scanf("%d", &num2);
	soma = num1 + num2;
	printf("A soma dos números é: %d", soma);
	
	printf("\n\n");
	system ("pause");
break;
}


case 5: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que:\n   a) Obtenha o valor para a variável HT (horas trabalhadas no mês);\n   b) Obtenha o valor para a variável VH (valor hora trabalhada);\n   c) Obtenha o valor para a variável PD (percentual de desconto);\n   d)Calcule o salário bruto => SB = HT * VH;\n   e) Calcule o total de desconto => TD = (PD/100) * SB;\n   f) Calcule o salário líquido => SL = SB - TD;\n   g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Líquido.\n", consulta);
printf("\n========================================\n=================  05  =================\n========================================\n");
	
	float HT=0, VH=0, PD=0, SB=0, TD=0, SL=0;
	printf("\nInforme a quantidade de horas trabalhadas no mês: "); scanf("%f", &HT);
	printf("\nInforme o valor hora trabalhada: "); scanf("%f", &VH);
	printf("\nInforme o percentual de desconto: "); scanf("%f", &PD);
	SB = HT * VH; TD = (PD/100)*SB; SL = SB - TD;
	printf("\n->|%g horas trabalhadas.\n->|Salário bruto de: %g.\n->|Desconto de: %g%%.\n->|Salário Liquido de: %g.", HT, SB, PD, SL);
	
	printf("\n\n");
	system ("pause");
break;
}


case 6: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahreinheit. \n   A fórmula de conversão é: F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura \n   em Celsius.\n", consulta);
printf("\n========================================\n=================  06  =================\n========================================\n");
	
	float C=0, F=0;
	printf("Informe uma temperatura em graus Celsius: "); scanf("%f", &C);
	F = (9*C + 160) / 5;
	printf("%g graus Celsius equivalem à %g graus Fahrenheit.", C, F);
	
	printf("\n\n");
	system ("pause");
break;
}


case 7: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia uma temperatura em Fahrenheit e a apresente convertida em graus Celcius. \n   A fórmula de conversão é 'C = (F - 32) * (5 / 9', na qual F é a temperatura em Fahrenheit e C é a temperatura em \n   Celcius.\n", consulta);
printf("\n========================================\n=================  07  =================\n========================================\n");
	
	float F=0, C=0;
	printf("Informe uma temperatura em graus Fahrenheit: "); scanf("%f", &F);
	
	// C = (F-32) * (5/9) NÃO FUNCIONA.
	
	C  = (F-32) * 5/9; 
	printf("%g graus Fahrenheit equivalem à %g graus Celsius.", F, C);
	
	printf("\n\n");
	system ("pause");
break;
}


case 8: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, utilizando a fórmula \n   'VOLUME = 3,14159 * RAIO² * ALTURA'.\n", consulta);
printf("\n========================================\n=================  08  =================\n========================================\n");
	
	float volume=0, raio=0, altura=0;
	printf("Informe o raio da lata de óleo: "); scanf("%f", &raio);
	printf("Informe a altura da lata de óleo: "); scanf("%f", &altura);
	volume = M_PI * pow(raio, 2) * altura;
	printf("\n->|O volume da lata de óleo é: %g", volume);
	
	printf("\n\n");
	system ("pause");
break;
}


case 9: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que calcule a quantidade de litros de combustível gasta emuma viagem, utilizando um \n   automóvel que faz 12Km por litro. Para obter ocálculo, o usuário deve fornecer o tempo gasto na viagem\n   e a velocidade média durante ela. Desta forma, será possível obter a distância percorrida com a fórmula \n   'DISTANCIA = TEMPO * VELOCIDADE'. Tendo o valor da distância, basta calcular a quantidade de litros de \n   combustível utilizada na viagem com a fórmula: 'LITROS_USADOS = DISTANCIA / 12'. \n   ==>O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida \n      e quantidade de litros utilizada na viagem. \n", consulta);
printf("\n========================================\n=================  09  =================\n========================================\n");
	
	float tempo=0, velocidade=0, distancia=0, litrosUsados=0;
	printf("Informe o tempo gasto na viagem: "); scanf("%f", &tempo);
	printf("Informe a velociade média da viagem: "); scanf("%f", &velocidade);
	distancia = tempo * velocidade; litrosUsados = distancia / 12;
	printf("\n->|Velocidade média: %g\n->|Tempo gasto na viagem: %g hora(s)\n->|Distância percorrida: %g Km/h\n->|Litros utilizados: %g l", velocidade, tempo, distancia, litrosUsados);
	
	printf("\n\n");
	system ("pause");
break;
}


case 10: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que \n   a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. \n   ==>Apresente os valores trocados.\n", consulta);
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
printf("\n%dº Exercício proposto:\n==> Faça um algoritmo que leia quatro números e apresente os resultados de adiçãoe multiplicação dos valores \n   entre si, baseando-se na utilização da propriedadedistributiva, ou seja, se forem lidas as variáveis A, B, \n   C e D, devem ser somadase multiplicadas A com B, A com C e A com D; B com C, B com D e por último C com D.\n", consulta);
printf("\n========================================\n=================  11  =================\n========================================\n");
	
	float A=0, B=0, C=0, D=0;
	printf("\nInforme o valor de 'A' número: ", A); scanf("%f", &A);
	printf("\nInforme o valor de 'B' número: ", B); scanf("%f", &B);
	printf("\nInforme o valor de 'C' número: ", C); scanf("%f", &C);
	printf("\nInforme o valor de 'D' número: ", D); scanf("%f", &D);
	printf("\n->|A soma de A com B é: %g ", A+B);
	printf("\n->|A multiplicação de A com B é: %g ", A*B);
	printf("\n->|A soma de A com C é: %g ", A+C);
	printf("\n->|A multiplicação de A com C é: %g ", A*C);
	printf("\n->|A soma de A com D é: %g ", A+D);
	printf("\n->|A multiplicação de A com D é: %g ", A*D);
	
	printf("\n\n->|A soma de B com C é: %g ", B+C);
	printf("\n->|A multiplicação de B com C é: %g ", B*C);
	printf("\n->|A soma de B com D é: %g ", B+D);
	printf("\n->|A multiplicação de B com D é: %g ", B*D);
	
	printf("\n\n->|A soma de C com D é: %g ", C+D);
	printf("\n->|A multiplicação de C com D é: %g ", C*D);
	
	printf("\n\n");
	system ("pause");
break;
}


case 12: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e ALTURA e apresente o valor do volume \n   de uma caixa retangular. Utilize para o cálculo a fórmula 'VOLUME = COMPRIMENTO * LARGURA * ALTURA.'\n", consulta);
printf("\n========================================\n=================  12  =================\n========================================\n");
	
	float comprimento=0, largura=0, altura=0, volume=0;
	printf("\nInforme o comprimento de uma caixa retangular: "); scanf("%f", &comprimento);
	printf("\nInforme a largura: "); scanf("%f", &largura);
	printf("\nInforme a altura: "); scanf("%f", &altura);
	volume = comprimento * largura * altura;
	printf("\n->|O volume desta caixa retangular é de: %g", volume);
	
	printf("\n\n");
	system ("pause");
break;
}


case 13: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor \n   lido.\n", consulta);
printf("\n========================================\n=================  13  =================\n========================================\n");
	
	int num=0, quad=0, cubo=0;
	printf("Informe um número: "); scanf("%d", &num);
	quad = pow(num, 2); cubo = pow(num, 3);
	printf("->|O quadrado deste número é: %d.\n->|O cubo deste número é: %d.", quad, cubo);
	
	printf("\n\n");
	system ("pause");
break;
}


case 14: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado do quadrado da soma \n   dos valores lidos.\n", consulta);
printf("\n========================================\n=================  14  =================\n========================================\n");
	
	int A=0, B=0, C=0, soma=0, quad=0;
	printf("\nInforme o valor de 'A': "); scanf("%d", &A);
	printf("\nInforme o valor de 'B': "); scanf("%d", &B);
	quad = pow(A+B, 2);
	printf("\n->|O quadrado da soma dos dois valores é: %d", quad);
	
	printf("\n\n");
	system ("pause");
break;
}


case 15: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado da soma do quadrado \n   de cada valor lido.\n", consulta);
printf("\n========================================\n=================  15  =================\n========================================\n");
	
	int A=0, B=0, quadA=0, quadB=0, somaQuad_AB=0;
	printf("\nInforme o valor de 'A': "); scanf("%d", &A);
	printf("\nInforme o valor de 'B': "); scanf("%d", &B);
	quadA = pow(A, 2); quadB = pow(B, 2);
	somaQuad_AB = quadA + quadB;
	printf("\n->|A soma do quadrado de cada valor apresentado é: %d", somaQuad_AB);
	
	printf("\n\n");
	system ("pause");
break;
}


case 16: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua média na variável Media \n   e imprima seu valor\n", consulta);
printf("\n========================================\n=================  16  =================\n========================================\n");
	
	float Val1=0, Val2=0, media=0;
	printf("\nInforme o 1º valor: "); scanf("%f", &Val1);
	printf("\nInforme o 2º valor: "); scanf("%f", &Val2);
	printf("\n->|A média dos valores informados é: %g", (Val1 + Val2) / 2);
	
	printf("\n\n");
	system ("pause");
break;
}


case 17: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa ordem, e imprima em ordem \n   inversa, isto é, se os dados lidos forem 5 e 9, por exemplo, devem ser impressos na ordem 9 e 5.\n", consulta);
printf("\n========================================\n=================  17  =================\n========================================\n");
	
	float NumA=0, NumB=0;
	printf("\nInforme o 1º valor: "); scanf("%f", &NumA);
	printf("\nInforme o 2º valor: "); scanf("%f", &NumB);
	printf("\n->|Os valores informados na ordem inversa fica: %g e %g.", NumB, NumA);
	
	printf("\n\n");
	system ("pause");
break;
}


case 18: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e imprima a \n   velocidade em m/s (metros por segundo).\n", consulta);
printf("\n========================================\n=================  18  =================\n========================================\n");
	
	float km_h=0;
	printf("\nInforme uma velocidade em Km/h: "); scanf("%f", &km_h);
	printf("\n->|A velocidade informada em m/s equivale à: %g", km_h/3.6);
	
	printf("\n\n");
	system ("pause");
break;
}


case 19: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o quociente e o \n   resto da divisão inteira de Int1 por Int2.\n", consulta);
printf("\n========================================\n=================  19  =================\n========================================\n");
	
	int int1=0, int2=0;
	printf("\nInforme o 1º valor: "); scanf("%d", &int1);
	printf("\nInforme o 2º valor: "); scanf("%d", &int2);
	printf("\n->|O quociente de %d por %d é %d.\n->|O resto da divisão de %d por %d é %d.", int1, int2, int1/int2, int1, int2, int1%int2);
	
	printf("\n\n");
	system ("pause");
break;
}


case 20: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do trabalhador como contribuição \n   à previdência social. Após esse desconto, há um outro desconto de 5%% sobre o valor restante do \n   salário bruto, a título de um determinado imposto. \n   ==>Faça um algoritmo que leia o salário bruto de um cidadão e imprima o seu salário líquido.\n", consulta);
printf("\n========================================\n=================  20  =================\n========================================\n");
	
	float salarioB=0, desconto1=0, desconto2=0, salarioLi=0;
	printf("\nInforme o seu salário bruto: "); scanf("%f", &salarioB);
	
	// NÃO QUER FUNCIONAR... ???
	//desconto1 = salarioB - ((10/100) * salarioB); desconto2 = desconto1 - ((5/100) * salarioB);
	
	desconto1 = salarioB - (0.1*salarioB); desconto2 = desconto1 - (0.05*desconto1);
	printf("\n->|Com os devidos ajustes no salário, o seu salário líquido é de: %g reais.", desconto2);
	
	printf("\n\n");
	system ("pause");
break;
}


// DICA: Para a solução dos exercícios abaixo utilize 
//       os operadores de divisão inteira e de módulo.

case 21: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Leia um código de cinco algarismos (variável Codigo) e gere o digito verificador(DigitoV) módulo 7 para o mesmo.\n   Supondo que os cinco algarismos do código são ABCDE, uma forma de calcular o digito desejado, com módulo 7 é:\n\n   DigitoV = resto da divisão de S por 7, onde \n   S = 6*A + 5*B + 4*C + 3*D + 2*E\n", consulta);
printf("\n========================================\n=================  21  =================\n========================================\n");
	
	int A=0, B=0, C=0, D=0, E=0, S=0, DigitoV=0;
	printf("\nInforme o 1º número: "); scanf("%d", &A);
	printf("Informe o 2º número: "); scanf("%d", &B);
	printf("Informe o 3º número: "); scanf("%d", &C);
	printf("Informe o 4º número: "); scanf("%d", &D);
	printf("Informe o 5º número: "); scanf("%d", &E);
	S = 6*A + 5*B + 4*C + 3*D + 2*E;
	DigitoV = S % 7;
	printf("\n->|O digito verificador módulo 7 é: %d", DigitoV);
	
	printf("\n\n");
	system ("pause");
break;
}


case 22: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Dado um número de três algarismos N = CDU (onde C é o algarismo das centenas, D é o algarismo das dezenas e U o \n   algarismo das unidades), considere o número M constituído pelos algarismos de N em ordem inversa, isto é, M = UDC. \n   Gerar M a partir de N (p.ex.: N = 123 -> M = 321).\n", consulta);
printf("\n========================================\n=================  22  =================\n========================================\n");
	
	int CDU=0, UDC=0;
	printf("\nInforme um número de três algarismos: "); scanf("%d", &CDU);
	while (CDU > 0) {
		UDC = 10 * UDC + CDU % 10;
		CDU /= 10;
	}
	printf("\n->|A inversão do número é: %d", UDC);
	
	printf("\n\n");
	system ("pause");
break;
}


case 23: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não em uma variável do tipo data, \n   crie um algoritmo que leia uma data no formato DDMMAA e imprima essa data no formato AAMMDD, onde:\n   ->A letra D corresponde a dois algarismos representando o dia;\n   ->A letra M corresponde a dois algarismos representando o mês;\n   ->A letra A corresponde aos dois últimos algarismos representando o ano.\n", consulta);
printf("\n========================================\n=================  23  =================\n========================================\n");
	
	int d=0, m=0, a=0;
	printf("\nInforme o dia: "); scanf("%d", &d);
	printf("Informe o mês: "); scanf("%d", &m);
	printf("Informe o ano: "); scanf("%d", &a);
	printf("\n->|1º formato: (%d/%d/%d).\n->|2º formato: (%d/%d/%d).", d, m, a, a, m, d);
	
	printf("\n\n");
	system ("pause");
break;
}


case 24: {
system("cls || clear");	
printf("\n%dº Exercício proposto:\n==>Suponha que uma escola utilize, como código de matrícula, um número inteiro no formato AASDDD, onde:\n   ->Os dois primeiros dígitos, representados pela letra A, são os dois últimos algarismos do ano da \n     matrícula;\n   ->O terceiro dígito, representado pela letra S, vale 1 ou 2, conforme o aluno tenha se matriculado \n     no 1º ou 2º semestre;\n   ->Os quatro últimos dígitos, representados pela letra D, correspondem à ordem da matrícula do aluno, \n     no semestre e no ano em questão.\n\n   ==>Crie um algoritmo que leia o número de matrícula de um aluno e imprima o ano e o semestre em que \n     ele foi matriculado.\n", consulta);
printf("\n========================================\n=================  24  =================\n========================================\n");
	
	/* JEITO FEIO
	int matricula=0, ano=0, semestre=0;
	printf("\nInforme a Matricula AASDDDD: "); scanf("%d", &matricula);
	ano = matricula / 100000;
	semestre = (matricula - ano * 100000) / 10000;
	printf("\n->|O ano e Semestre são: %d e %d.", ano, semestre);
	*/
	
	// JEITO OR-GA-NI-ZA-DO!!
	int mat, ano, semestre;
    printf("Digite a matrícula do aluno: ");
    scanf("%i", &mat);

    ano = mat/100000;
    semestre = (mat - ano * 100000) / 10000;
    if (ano >= 0 && ano <= 23 )
        printf("\nO aluno foi matrículado no %iº Semestre de 20%i.\n", semestre, ano);
    if (ano <= 99 && ano > 23 )
        printf("\nO aluno foi matrículado no %iº Semestre de 19%i.", semestre, ano);
	
	printf("\n\n");
	system ("pause");
break;
}


}

if (consulta > 24) {
	system ("cls");
	printf("O SEU(SUA) IDIOTA, SABE LER NÃO ?? Só até o 24, GÊNIO!..."); Sleep(3000);
}

} while (consulta);

if (consulta == 0)
	exit(1);
	
}
