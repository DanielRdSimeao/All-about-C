#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int MenuArmDados() {
	setlocale(LC_ALL, "Portuguese");
	
	int respostaDados;
	printf("\n ************ CONVERSOR ***********");
	printf("\n ***** ARMAZENAMENTO DE DADOS *****");
	printf("\n *  1) Bit                        *");
	printf("\n *  2) Kilobit                    *");
	printf("\n *  3) Kibibit                    *");
	printf("\n *  4) Megabit                    *");
	printf("\n *  5) Mebibit                    *");
	printf("\n *  6) Gigabit                    *");
	printf("\n *  7) Gibibit                    *");
	printf("\n *  8) Terabit                    *");
	printf("\n *  9) Tebibit                    *");
	printf("\n *  10) Petabit                   *");
	printf("\n *  11) Pebibit                   *");
	printf("\n *  12) Byte                      *");
	printf("\n *  13) Kilobyte                  *");
	printf("\n *  14) Kibibyte                  *");
	printf("\n *  15) Megabyte                  *");
	printf("\n *  16) MebiByte                  *");
	printf("\n *  17) Gigabyte                  *");
	printf("\n *  18) Gibibyte                  *");
	printf("\n *  19) Terabyte                  *");
	printf("\n *  20) Tebibyte                  *");
	printf("\n *  21) Petabyte                  *");
	printf("\n *  22) Pebibyte                  *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaDados);
	return respostaDados;
}

// BIT para X
float BITpKilobit (float data) {
	return (data/1000);
}
float BITpKibibit (float data) {
	return (data/1024);
}
float BITpMegabit (float data) {
	return (data/(1e+6));
}
float BITpMebibit (float data) {
	return (data/(1.049e+6));
}
float BITpGigabit (float data) {
	return (data/(1e+9));
}
float BITpGibibit (float data) {
	return (data/(1.074e+9));
}
float BITpTerabit (float data) {
	return (data/(1e+12));
}
float BITpTebibit (float data) {
	return (data/(1.1e+12));
}
float BITpPetabit (float data) {
	return (data/(1e+15));
}
float BITpPebibit (float data) {
	return (data/(1.126e+15));
}
float BITpByte (float data) {
	return (data/(8));
}
float BITpKilobyte (float data) {
	return (data/(8000));
}
float BITpKibibyte (float data) {
	return (data/(8192));
}
float BITpMegabyte (float data) {
	return (data/(8e+6));
}
float BITpMebiByte (float data) {
	return (data/(8.389e+6));
}
float BITpGigabyte (float data) {
	return (data/(8e+9));
}
float BITpGibibyte (float data) {
	return (data/(8.59e+9));
}
float BITpTerabyte (float data) {
	return (data/(8e+12));
}
float BITpTebibyte (float data) {
	return (data/(8.796e+12));
}
float BITpPetabyte (float data) {
	return (data/(8e+15));
}
float BITpPebibyte (float data) {
	return (data/(9.007e+15));
}
int MenuBit() {
	system("cls || clear");
	
	int respostaBit;
	printf("\n ******** CONVERSOR DE BIT ********");
	printf("\n *  1)  Bit   ->   Kilobit        *");
	printf("\n *  2)  Bit   ->   Kibibit        *");
	printf("\n *  3)  Bit   ->   Megabit        *");
	printf("\n *  4)  Bit   ->   Mebibit        *");
	printf("\n *  5)  Bit   ->   Gigabit        *");
	printf("\n *  6)  Bit   ->   Gibibit        *");
	printf("\n *  7)  Bit   ->   Terabit        *");
	printf("\n *  8)  Bit   ->   Tebibit        *");
	printf("\n *  9)  Bit   ->   Petabit        *");
	printf("\n *  10) Bit   ->   Pebibit        *");
	printf("\n *  11) Bit   ->   Byte           *");
	printf("\n *  12) Bit   ->   Kilobyte       *");
	printf("\n *  13) Bit   ->   Kibibyte       *");
	printf("\n *  14) Bit   ->   Megabyte       *");
	printf("\n *  15) Bit   ->   MebiByte       *");
	printf("\n *  16) Bit   ->   Gigabyte       *");
	printf("\n *  17) Bit   ->   Gibibyte       *");
	printf("\n *  18) Bit   ->   Terabyte       *");
	printf("\n *  19) Bit   ->   Tebibyte       *");
	printf("\n *  20) Bit   ->   Petabyte       *");
	printf("\n *  21) Bit   ->   Pebibyte       *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaBit);
	return respostaBit;
}


//KILOBIT para X
float KILOBITpBit (float data) {
	return (data*(1000));
}
float KILOBITpKibibit (float data) {
	return (data/(1.024));
}
float KILOBITpMegabit (float data) {
	return (data/(1000));
}
float KILOBITpMebibit (float data) {
	return (data/(1049));
}
float KILOBITpGigabit (float data) {
	return (data/(1e+6));
}
float KILOBITpGibibit (float data) {
	return (data/(1.074e+6));
}
float KILOBITpTerabit (float data) {
	return (data/(1e+9));
}
float KILOBITpTebibit (float data) {
	return (data/(1.1e+9));
}
float KILOBITpPetabit (float data) {
	return (data/(1e+12));
}
float KILOBITpPebibit (float data) {
	return (data/(1.126e+12));
}
float KILOBITpByte (float data) {
	return (data*(125));
}
float KILOBITpKilobyte (float data) {
	return (data/(8));
}
float KILOBITpKibibyte (float data) {
	return (data/(8.192));
}
float KILOBITpMegabyte (float data) {
	return (data/(8000));
}
float KILOBITpMebiByte (float data) {
	return (data/(8389));
}
float KILOBITpGigabyte (float data) {
	return (data/(8e+6));
}
float KILOBITpGibibyte (float data) {
	return (data/(8.59e+6));
}
float KILOBITpTerabyte (float data) {
	return (data/(8e+9));
}
float KILOBITpTebibyte (float data) {
	return (data/(8.796e+9));
}
float KILOBITpPetabyte (float data) {
	return (data/(8e+12));
}
float KILOBITpPebibyte (float data) {
	return (data/(9.007e+12));
}
int MenuKilobit() {
	system("cls || clear");
	
	int respostaKilobit;
	printf("\n ****** CONVERSOR DE KILOBIT ******");
	printf("\n *  1)  Kilobit   ->   Bit        *");
	printf("\n *  2)  Kilobit   ->   Kibibit    *");
	printf("\n *  3)  Kilobit   ->   Megabit    *");
	printf("\n *  4)  Kilobit   ->   Mebibit    *");
	printf("\n *  5)  Kilobit   ->   Gigabit    *");
	printf("\n *  6)  Kilobit   ->   Gibibit    *");
	printf("\n *  7)  Kilobit   ->   Terabit    *");
	printf("\n *  8)  Kilobit   ->   Tebibit    *");
	printf("\n *  9)  Kilobit   ->   Petabit    *");
	printf("\n *  10) Kilobit   ->   Pebibit    *");
	printf("\n *  11) Kilobit   ->   Byte       *");
	printf("\n *  12) Kilobit   ->   Kilobyte   *");
	printf("\n *  13) Kilobit   ->   Kibibyte   *");
	printf("\n *  14) Kilobit   ->   Megabyte   *");
	printf("\n *  15) Kilobit   ->   MebiByte   *");
	printf("\n *  16) Kilobit   ->   Gigabyte   *");
	printf("\n *  17) Kilobit   ->   Gibibyte   *");
	printf("\n *  18) Kilobit   ->   Terabyte   *");
	printf("\n *  19) Kilobit   ->   Tebibyte   *");
	printf("\n *  20) Kilobit   ->   Petabyte   *");
	printf("\n *  21) Kilobit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaKilobit);
	return respostaKilobit;
}


//KIBIBIT para X
float KIBIBITpBit (float data) {
	return (data*(1024));
}
float KIBIBITpKilobit (float data) {
	return (data*(1.024));
}
float KIBIBITpMegabit (float data) {
	return (data/(977));
}
float KIBIBITpMebibit (float data) {
	return (data/(1024));
}
float KIBIBITpGigabit (float data) {
	return (data/(976562));
}
float KIBIBITpGibibit (float data) {
	return (data/(1.049e+6));
}
float KIBIBITpTerabit (float data) {
	return (data/(9.766e+8));
}
float KIBIBITpTebibit (float data) {
	return (data/(1.074e+9));
}
float KIBIBITpPetabit (float data) {
	return (data/(9.766e+11));
}
float KIBIBITpPebibit (float data) {
	return (data/(1.1e+12));
}
float KIBIBITpByte (float data) {
	return (data*(128));
}
float KIBIBITpKilobyte (float data) {
	return (data/(7.812));
}
float KIBIBITpKibibyte (float data) {
	return (data/(8));
}
float KIBIBITpMegabyte (float data) {
	return (data/(7813));
}
float KIBIBITpMebiByte (float data) {
	return (data/(8192));
}
float KIBIBITpGigabyte (float data) {
	return (data/(7.812e+6));
}
float KIBIBITpGibibyte (float data) {
	return (data/(8.389e+6));
}
float KIBIBITpTerabyte (float data) {
	return (data/(7.812e+9));
}
float KIBIBITpTebibyte (float data) {
	return (data/(8.59e+9));
}
float KIBIBITpPetabyte (float data) {
	return (data/(7.812e+12));
}
float KIBIBITpPebibyte (float data) {
	return (data/(8.796e+12));
}
int MenuKibibit() {
	system("cls || clear");
	
	int respostaKibibit;
	printf("\n ****** CONVERSOR DE KIBIBIT ******");
	printf("\n *  1)  Kibibit   ->   Bit        *");
	printf("\n *  2)  Kibibit   ->   Kilobit    *");
	printf("\n *  3)  Kibibit   ->   Megabit    *");
	printf("\n *  4)  Kibibit   ->   Mebibit    *");
	printf("\n *  5)  Kibibit   ->   Gigabit    *");
	printf("\n *  6)  Kibibit   ->   Gibibit    *");
	printf("\n *  7)  Kibibit   ->   Terabit    *");
	printf("\n *  8)  Kibibit   ->   Tebibit    *");
	printf("\n *  9)  Kibibit   ->   Petabit    *");
	printf("\n *  10) Kibibit   ->   Pebibit    *");
	printf("\n *  11) Kibibit   ->   Byte       *");
	printf("\n *  12) Kibibit   ->   Kilobyte   *");
	printf("\n *  13) Kibibit   ->   Kibibyte   *");
	printf("\n *  14) Kibibit   ->   Megabyte   *");
	printf("\n *  15) Kibibit   ->   MebiByte   *");
	printf("\n *  16) Kibibit   ->   Gigabyte   *");
	printf("\n *  17) Kibibit   ->   Gibibyte   *");
	printf("\n *  18) Kibibit   ->   Terabyte   *");
	printf("\n *  19) Kibibit   ->   Tebibyte   *");
	printf("\n *  20) Kibibit   ->   Petabyte   *");
	printf("\n *  21) Kibibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaKibibit);
	return respostaKibibit;
}


//MEGABIT para X
float MEGABITpBit (float data) {
	return (data*(1e+6));
}
float MEGABITpKilobit (float data) {
	return (data*(1000));
}
float MEGABITpKibibit (float data) {
	return (data*(977));
}
float MEGABITpMebibit (float data) {
	return (data/(1.049));
}
float MEGABITpGigabit (float data) {
	return (data/(1000));
}
float MEGABITpGibibit (float data) {
	return (data/(1074));
}
float MEGABITpTerabit (float data) {
	return (data/(1e+6));
}
float MEGABITpTebibit (float data) {
	return (data/(1.1e+6));
}
float MEGABITpPetabit (float data) {
	return (data/(1e+9));
}
float MEGABITpPebibit (float data) {
	return (data/(1.126e+9));
}
float MEGABITpByte (float data) {
	return (data*(125000));
}
float MEGABITpKilobyte (float data) {
	return (data*(125));
}
float MEGABITpKibibyte (float data) {
	return (data*(122));
}
float MEGABITpMegabyte (float data) {
	return (data/(8));
}
float MEGABITpMebiByte (float data) {
	return (data/(8.389));
}
float MEGABITpGigabyte (float data) {
	return (data/(8000));
}
float MEGABITpGibibyte (float data) {
	return (data/(8590));
}
float MEGABITpTerabyte (float data) {
	return (data/(8e+6));
}
float MEGABITpTebibyte (float data) {
	return (data/(8.796e+6));
}
float MEGABITpPetabyte (float data) {
	return (data/(8e+9));
}
float MEGABITpPebibyte (float data) {
	return (data/(9.007e+9));
}
int MenuMegabit() {
	system("cls || clear");
	
	int respostaMegabit;
	printf("\n ****** CONVERSOR DE MEGABIT ******");
	printf("\n *  1)  Megabit   ->   Bit        *");
	printf("\n *  2)  Megabit   ->   Kilobit    *");
	printf("\n *  3)  Megabit   ->   Kibibit    *");
	printf("\n *  4)  Megabit   ->   Mebibit    *");
	printf("\n *  5)  Megabit   ->   Gigabit    *");
	printf("\n *  6)  Megabit   ->   Gibibit    *");
	printf("\n *  7)  Megabit   ->   Terabit    *");
	printf("\n *  8)  Megabit   ->   Tebibit    *");
	printf("\n *  9)  Megabit   ->   Petabit    *");
	printf("\n *  10) Megabit   ->   Pebibit    *");
	printf("\n *  11) Megabit   ->   Byte       *");
	printf("\n *  12) Megabit   ->   Kilobyte   *");
	printf("\n *  13) Megabit   ->   Kibibyte   *");
	printf("\n *  14) Megabit   ->   Megabyte   *");
	printf("\n *  15) Megabit   ->   MebiByte   *");
	printf("\n *  16) Megabit   ->   Gigabyte   *");
	printf("\n *  17) Megabit   ->   Gibibyte   *");
	printf("\n *  18) Megabit   ->   Terabyte   *");
	printf("\n *  19) Megabit   ->   Tebibyte   *");
	printf("\n *  20) Megabit   ->   Petabyte   *");
	printf("\n *  21) Megabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaMegabit);
	return respostaMegabit;
}


//MEBIBIT para X
float MEBIBITpBit (float data) {
	return (data*(1.049e+6));
}
float MEBIBITpKilobit (float data) {
	return (data*(1049));
}
float MEBIBITpKibibit (float data) {
	return (data*(1024));
}
float MEBIBITpMegabit (float data) {
	return (data*(1.049));
}
float MEBIBITpGigabit (float data) {
	return (data/(954));
}
float MEBIBITpGibibit (float data) {
	return (data/(1024));
}
float MEBIBITpTerabit (float data) {
	return (data/(953674));
}
float MEBIBITpTebibit (float data) {
	return (data/(1.049e+6));
}
float MEBIBITpPetabit (float data) {
	return (data/(9.537e+8));
}
float MEBIBITpPebibit (float data) {
	return (data/(1.074e+9));
}
float MEBIBITpByte (float data) {
	return (data*(131072));
}
float MEBIBITpKilobyte (float data) {
	return (data*(131));
}
float MEBIBITpKibibyte (float data) {
	return (data*(128));
}
float MEBIBITpMegabyte (float data) {
	return (data/(7.629));
}
float MEBIBITpMebiByte (float data) {
	return (data/(8));
}
float MEBIBITpGigabyte (float data) {
	return (data/(7629));
}
float MEBIBITpGibibyte (float data) {
	return (data/(8192));
}
float MEBIBITpTerabyte (float data) {
	return (data/(7.629e+6));
}
float MEBIBITpTebibyte (float data) {
	return (data/(8.389e+6));
}
float MEBIBITpPetabyte (float data) {
	return (data/(7.629e+9));
}
float MEBIBITpPebibyte (float data) {
	return (data/(8.59e+9));
}
int MenuMebibit() {
	system("cls || clear");
	
	int respostaMebibit;
	printf("\n ****** CONVERSOR DE MEBIBIT ******");
	printf("\n *  1)  Mebibit   ->   Bit        *");
	printf("\n *  2)  Mebibit   ->   Kilobit    *");
	printf("\n *  3)  Mebibit   ->   Kibibit    *");
	printf("\n *  4)  Mebibit   ->   Megabit    *");
	printf("\n *  5)  Mebibit   ->   Gigabit    *");
	printf("\n *  6)  Mebibit   ->   Gibibit    *");
	printf("\n *  7)  Mebibit   ->   Terabit    *");
	printf("\n *  8)  Mebibit   ->   Tebibit    *");
	printf("\n *  9)  Mebibit   ->   Petabit    *");
	printf("\n *  10) Mebibit   ->   Pebibit    *");
	printf("\n *  11) Mebibit   ->   Byte       *");
	printf("\n *  12) Mebibit   ->   Kilobyte   *");
	printf("\n *  13) Mebibit   ->   Kibibyte   *");
	printf("\n *  14) Mebibit   ->   Megabyte   *");
	printf("\n *  15) Mebibit   ->   MebiByte   *");
	printf("\n *  16) Mebibit   ->   Gigabyte   *");
	printf("\n *  17) Mebibit   ->   Gibibyte   *");
	printf("\n *  18) Mebibit   ->   Terabyte   *");
	printf("\n *  19) Mebibit   ->   Tebibyte   *");
	printf("\n *  20) Mebibit   ->   Petabyte   *");
	printf("\n *  21) Mebibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaMebibit);
	return respostaMebibit;
}


//GIGABIT para X
float GIGABITpBit (float data) {
	return (data*(1e+9));
}
float GIGABITpKilobit (float data) {
	return (data*(1e+6));
}
float GIGABITpKibibit (float data) {
	return (data*(976563));
}
float GIGABITpMegabit (float data) {
	return (data*(1000));
}
float GIGABITpMebibit (float data) {
	return (data/(954));
}
float GIGABITpGibibit (float data) {
	return (data/(1074));
}
float GIGABITpTerabit (float data) {
	return (data/(1e+6));
}
float GIGABITpTebibit (float data) {
	return (data/(1.1e+6));
}
float GIGABITpPetabit (float data) {
	return (data/(1e+9));
}
float GIGABITpPebibit (float data) {
	return (data/(1.126e+9));
}
float GIGABITpByte (float data) {
	return (data*(125000));
}
float GIGABITpKilobyte (float data) {
	return (data*(125));
}
float GIGABITpKibibyte (float data) {
	return (data*(122));
}
float GIGABITpMegabyte (float data) {
	return (data/(8));
}
float GIGABITpMebiByte (float data) {
	return (data/(8.389));
}
float GIGABITpGigabyte (float data) {
	return (data/(8000));
}
float GIGABITpGibibyte (float data) {
	return (data/(8590));
}
float GIGABITpTerabyte (float data) {
	return (data/(8e+6));
}
float GIGABITpTebibyte (float data) {
	return (data/(8.796e+6));
}
float GIGABITpPetabyte (float data) {
	return (data/(8e+9));
}
float GIGABITpPebibyte (float data) {
	return (data/(9.007e+9));
}
int MenuGigabit() {
	system("cls || clear");
	
	int respostaGigabit;
	printf("\n ****** CONVERSOR DE GIGABIT ******");
	printf("\n *  1)  Gigabit   ->   Bit        *");
	printf("\n *  2)  Gigabit   ->   Kilobit    *");
	printf("\n *  3)  Gigabit   ->   Kibibit    *");
	printf("\n *  4)  Gigabit   ->   Megabit    *");
	printf("\n *  5)  Gigabit   ->   Mebibit    *");
	printf("\n *  6)  Gigabit   ->   Gibibit    *");
	printf("\n *  7)  Gigabit   ->   Terabit    *");
	printf("\n *  8)  Gigabit   ->   Tebibit    *");
	printf("\n *  9)  Gigabit   ->   Petabit    *");
	printf("\n *  10) Gigabit   ->   Pebibit    *");
	printf("\n *  11) Gigabit   ->   Byte       *");
	printf("\n *  12) Gigabit   ->   Kilobyte   *");
	printf("\n *  13) Gigabit   ->   Kibibyte   *");
	printf("\n *  14) Gigabit   ->   Megabyte   *");
	printf("\n *  15) Gigabit   ->   MebiByte   *");
	printf("\n *  16) Gigabit   ->   Gigabyte   *");
	printf("\n *  17) Gigabit   ->   Gibibyte   *");
	printf("\n *  18) Gigabit   ->   Terabyte   *");
	printf("\n *  19) Gigabit   ->   Tebibyte   *");
	printf("\n *  20) Gigabit   ->   Petabyte   *");
	printf("\n *  21) Gigabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaGigabit);
	return respostaGigabit;
}


//GIBIBIT para X
float GIBIBITpBit (float data) {
	return (data*(1.074e+9));
}
float GIBIBITpKilobit (float data) {
	return (data*(1.074e+6));
}
float GIBIBITpKibibit (float data) {
	return (data*(1.049e+6));
}
float GIBIBITpMegabit (float data) {
	return (data*(1074));
}
float GIBIBITpMebibit (float data) {
	return (data*(1024));
}
float GIBIBITpGigabit (float data) {
	return (data*(1.074));
}
float GIBIBITpTerabit (float data) {
	return (data/(931));
}
float GIBIBITpTebibit (float data) {
	return (data/(1024));
}
float GIBIBITpPetabit (float data) {
	return (data/(931323));
}
float GIBIBITpPebibit (float data) {
	return (data/(1.049e+6));
}
float GIBIBITpByte (float data) {
	return (data*(1.342e+8));
}
float GIBIBITpKilobyte (float data) {
	return (data*(134218));
}
float GIBIBITpKibibyte (float data) {
	return (data*(131072));
}
float GIBIBITpMegabyte (float data) {
	return (data*(134));
}
float GIBIBITpMebiByte (float data) {
	return (data*(128));
}
float GIBIBITpGigabyte (float data) {
	return (data/(7.451));
}
float GIBIBITpGibibyte (float data) {
	return (data/(8));
}
float GIBIBITpTerabyte (float data) {
	return (data/(7451));
}
float GIBIBITpTebibyte (float data) {
	return (data/(8192));
}
float GIBIBITpPetabyte (float data) {
	return (data/(7.451e+6));
}
float GIBIBITpPebibyte (float data) {
	return (data/(8.389e+6));
}
int MenuGibibit() {
	system("cls || clear");
	
	int respostaGibibit;
	printf("\n ****** CONVERSOR DE GIBIBIT ******");
	printf("\n *  1)  Gibibit   ->   Bit        *");
	printf("\n *  2)  Gibibit   ->   Kilobit    *");
	printf("\n *  3)  Gibibit   ->   Kibibit    *");
	printf("\n *  4)  Gibibit   ->   Megabit    *");
	printf("\n *  5)  Gibibit   ->   Mebibit    *");
	printf("\n *  6)  Gibibit   ->   Gigabit    *");
	printf("\n *  7)  Gibibit   ->   Terabit    *");
	printf("\n *  8)  Gibibit   ->   Tebibit    *");
	printf("\n *  9)  Gibibit   ->   Petabit    *");
	printf("\n *  10) Gibibit   ->   Pebibit    *");
	printf("\n *  11) Gibibit   ->   Byte       *");
	printf("\n *  12) Gibibit   ->   Kilobyte   *");
	printf("\n *  13) Gibibit   ->   Kibibyte   *");
	printf("\n *  14) Gibibit   ->   Megabyte   *");
	printf("\n *  15) Gibibit   ->   MebiByte   *");
	printf("\n *  16) Gibibit   ->   Gigabyte   *");
	printf("\n *  17) Gibibit   ->   Gibibyte   *");
	printf("\n *  18) Gibibit   ->   Terabyte   *");
	printf("\n *  19) Gibibit   ->   Tebibyte   *");
	printf("\n *  20) Gibibit   ->   Petabyte   *");
	printf("\n *  21) Gibibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaGibibit);
	return respostaGibibit;
}


//TERABIT para X
float TERABITpBit (float data) {
	return (data*(1e+12));
}
float TERABITpKilobit (float data) {
	return (data*(1e+9));
}
float TERABITpKibibit (float data) {
	return (data*(9.766e+8));
}
float TERABITpMegabit (float data) {
	return (data*(1e+6));
}
float TERABITpMebibit (float data) {
	return (data*(953674));
}
float TERABITpGigabit (float data) {
	return (data/(1000));
}
float TERABITpGibibit (float data) {
	return (data/(931));
}
float TERABITpTebibit (float data) {
	return (data/(1.1));
}
float TERABITpPetabit (float data) {
	return (data/(1000));
}
float TERABITpPebibit (float data) {
	return (data/(1126));
}
float TERABITpByte (float data) {
	return (data*(1.25e+11));
}
float TERABITpKilobyte (float data) {
	return (data*(1.25e+8));
}
float TERABITpKibibyte (float data) {
	return (data*(1.221e+8));
}
float TERABITpMegabyte (float data) {
	return (data*(125000));
}
float TERABITpMebiByte (float data) {
	return (data*(119209));
}
float TERABITpGigabyte (float data) {
	return (data*(125));
}
float TERABITpGibibyte (float data) {
	return (data*(116));
}
float TERABITpTerabyte (float data) {
	return (data/(8));
}
float TERABITpTebibyte (float data) {
	return (data/(8.796));
}
float TERABITpPetabyte (float data) {
	return (data/(8000));
}
float TERABITpPebibyte (float data) {
	return (data/(9007));
}
int MenuTerabit() {
	system("cls || clear");
	
	int respostaTerabit;
	printf("\n ****** CONVERSOR DE TERABIT ******");
	printf("\n *  1)  Terabit   ->   Bit        *");
	printf("\n *  2)  Terabit   ->   Kilobit    *");
	printf("\n *  3)  Terabit   ->   Kibibit    *");
	printf("\n *  4)  Terabit   ->   Megabit    *");
	printf("\n *  5)  Terabit   ->   Mebibit    *");
	printf("\n *  6)  Terabit   ->   Gigabit    *");
	printf("\n *  7)  Terabit   ->   Gibibit    *");
	printf("\n *  8)  Terabit   ->   Tebibit    *");
	printf("\n *  9)  Terabit   ->   Petabit    *");
	printf("\n *  10) Terabit   ->   Pebibit    *");
	printf("\n *  11) Terabit   ->   Byte       *");
	printf("\n *  12) Terabit   ->   Kilobyte   *");
	printf("\n *  13) Terabit   ->   Kibibyte   *");
	printf("\n *  14) Terabit   ->   Megabyte   *");
	printf("\n *  15) Terabit   ->   MebiByte   *");
	printf("\n *  16) Terabit   ->   Gigabyte   *");
	printf("\n *  17) Terabit   ->   Gibibyte   *");
	printf("\n *  18) Terabit   ->   Terabyte   *");
	printf("\n *  19) Terabit   ->   Tebibyte   *");
	printf("\n *  20) Terabit   ->   Petabyte   *");
	printf("\n *  21) Terabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaTerabit);
	return respostaTerabit;
}


//TEBIBIT para X
float TEBIBITpBit (float data) {
	return (data*(1.1e+12));
}
float TEBIBITpKilobit (float data) {
	return (data*(1.1e+9));
}
float TEBIBITpKibibit (float data) {
	return (data*(1.074e+9));
}
float TEBIBITpMegabit (float data) {
	return (data*(1.1e+6));
}
float TEBIBITpMebibit (float data) {
	return (data*(1.049e+6));
}
float TEBIBITpGigabit (float data) {
	return (data*(1100));
}
float TEBIBITpGibibit (float data) {
	return (data*(1024));
}
float TEBIBITpTerabit (float data) {
	return (data*(1.1));
}
float TEBIBITpPetabit (float data) {
	return (data/(909));
}
float TEBIBITpPebibit (float data) {
	return (data/(1024));
}
float TEBIBITpByte (float data) {
	return (data*(1.374e+11));
}
float TEBIBITpKilobyte (float data) {
	return (data*(1.374e+8));
}
float TEBIBITpKibibyte (float data) {
	return (data*(1.342e+8));
}
float TEBIBITpMegabyte (float data) {
	return (data*(137439));
}
float TEBIBITpMebiByte (float data) {
	return (data*(131072));
}
float TEBIBITpGigabyte (float data) {
	return (data*(137));
}
float TEBIBITpGibibyte (float data) {
	return (data*(128));
}
float TEBIBITpTerabyte (float data) {
	return (data/(7.276));
}
float TEBIBITpTebibyte (float data) {
	return (data/(8));
}
float TEBIBITpPetabyte (float data) {
	return (data/(7276));
}
float TEBIBITpPebibyte (float data) {
	return (data/(8192));
}
int MenuTebibit() {
	system("cls || clear");
	
	int respostaTebibit;
	printf("\n ****** CONVERSOR DE TEBIBIT ******");
	printf("\n *  1)  Tebibit   ->   Bit        *");
	printf("\n *  2)  Tebibit   ->   Kilobit    *");
	printf("\n *  3)  Tebibit   ->   Kibibit    *");
	printf("\n *  4)  Tebibit   ->   Megabit    *");
	printf("\n *  5)  Tebibit   ->   Mebibit    *");
	printf("\n *  6)  Tebibit   ->   Gigabit    *");
	printf("\n *  7)  Tebibit   ->   Gibibit    *");
	printf("\n *  8)  Tebibit   ->   Terabit    *");
	printf("\n *  9)  Tebibit   ->   Petabit    *");
	printf("\n *  10) Tebibit   ->   Pebibit    *");
	printf("\n *  11) Tebibit   ->   Byte       *");
	printf("\n *  12) Tebibit   ->   Kilobyte   *");
	printf("\n *  13) Tebibit   ->   Kibibyte   *");
	printf("\n *  14) Tebibit   ->   Megabyte   *");
	printf("\n *  15) Tebibit   ->   MebiByte   *");
	printf("\n *  16) Tebibit   ->   Gigabyte   *");
	printf("\n *  17) Tebibit   ->   Gibibyte   *");
	printf("\n *  18) Tebibit   ->   Terabyte   *");
	printf("\n *  19) Tebibit   ->   Tebibyte   *");
	printf("\n *  20) Tebibit   ->   Petabyte   *");
	printf("\n *  21) Tebibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaTebibit);
	return respostaTebibit;
}


//PETABIT para X
float PETABITpBit (float data) {
	return (data*(1e+15));
}
float PETABITpKilobit (float data) {
	return (data*(1e+12));
}
float PETABITpKibibit (float data) {
	return (data*(9.766e+11));
}
float PETABITpMegabit (float data) {
	return (data*(1e+9));
}
float PETABITpMebibit (float data) {
	return (data*(9.537e+8));
}
float PETABITpGigabit (float data) {
	return (data*(1e+6));
}
float PETABITpGibibit (float data) {
	return (data*(931323));
}
float PETABITpTerabit (float data) {
	return (data*(1000));
}
float PETABITpTebibit (float data) {
	return (data*(909));
}
float PETABITpPebibit (float data) {
	return (data/(1.126));
}
float PETABITpByte (float data) {
	return (data*(1.25e+14));
}
float PETABITpKilobyte (float data) {
	return (data*(1.25e+11));
}
float PETABITpKibibyte (float data) {
	return (data*(1.221e+11));
}
float PETABITpMegabyte (float data) {
	return (data*(1.25e+8));
}
float PETABITpMebiByte (float data) {
	return (data*(1.192e+8));
}
float PETABITpGigabyte (float data) {
	return (data*(125000));
}
float PETABITpGibibyte (float data) {
	return (data*(116415));
}
float PETABITpTerabyte (float data) {
	return (data*(125));
}
float PETABITpTebibyte (float data) {
	return (data*(114));
}
float PETABITpPetabyte (float data) {
	return (data/(8));
}
float PETABITpPebibyte (float data) {
	return (data/(9.007));
}
int MenuPetabit() {
	system("cls || clear");
	
	int respostaPetabit;
	printf("\n ****** CONVERSOR DE PETABIT ******");
	printf("\n *  1)  Petabit   ->   Bit        *");
	printf("\n *  2)  Petabit   ->   Kilobit    *");
	printf("\n *  3)  Petabit   ->   Kibibit    *");
	printf("\n *  4)  Petabit   ->   Megabit    *");
	printf("\n *  5)  Petabit   ->   Mebibit    *");
	printf("\n *  6)  Petabit   ->   Gigabit    *");
	printf("\n *  7)  Petabit   ->   Gibibit    *");
	printf("\n *  8)  Petabit   ->   Terabit    *");
	printf("\n *  9)  Petabit   ->   Tebibit    *");
	printf("\n *  10) Petabit   ->   Pebibit    *");
	printf("\n *  11) Petabit   ->   Byte       *");
	printf("\n *  12) Petabit   ->   Kilobyte   *");
	printf("\n *  13) Petabit   ->   Kibibyte   *");
	printf("\n *  14) Petabit   ->   Megabyte   *");
	printf("\n *  15) Petabit   ->   MebiByte   *");
	printf("\n *  16) Petabit   ->   Gigabyte   *");
	printf("\n *  17) Petabit   ->   Gibibyte   *");
	printf("\n *  18) Petabit   ->   Terabyte   *");
	printf("\n *  19) Petabit   ->   Tebibyte   *");
	printf("\n *  20) Petabit   ->   Petabyte   *");
	printf("\n *  21) Petabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaPetabit);
	return respostaPetabit;
}


//PEBIBIT para X
float PEBIBITpBit (float data) {
	return (data*(1.126e+15));
}
float PEBIBITpKilobit (float data) {
	return (data*(1.126e+12));
}
float PEBIBITpKibibit (float data) {
	return (data*(1.1e+12));
}
float PEBIBITpMegabit (float data) {
	return (data*(1.126e+9));
}
float PEBIBITpMebibit (float data) {
	return (data*(1.074e+9));
}
float PEBIBITpGigabit (float data) {
	return (data*(1.126e+6));
}
float PEBIBITpGibibit (float data) {
	return (data*(1.049e+6));
}
float PEBIBITpTerabit (float data) {
	return (data*(1126));
}
float PEBIBITpTebibit (float data) {
	return (data*(1024));
}
float PEBIBITpPetabit (float data) {
	return (data*(1.126));
}
float PEBIBITpByte (float data) {
	return (data*(1.407e+14));
}
float PEBIBITpKilobyte (float data) {
	return (data*(1.407e+11));
}
float PEBIBITpKibibyte (float data) {
	return (data*(1.374e+11));
}
float PEBIBITpMegabyte (float data) {
	return (data*(1.407e+8));
}
float PEBIBITpMebiByte (float data) {
	return (data*(1.342e+8));
}
float PEBIBITpGigabyte (float data) {
	return (data*(140737));
}
float PEBIBITpGibibyte (float data) {
	return (data*(131072));
}
float PEBIBITpTerabyte (float data) {
	return (data*(141));
}
float PEBIBITpTebibyte (float data) {
	return (data*(128));
}
float PEBIBITpPetabyte (float data) {
	return (data/(7.105));
}
float PEBIBITpPebibyte (float data) {
	return (data/(8));
}
int MenuPebibit() {
	system("cls || clear");
	
	int respostaPebibit;
	printf("\n ************ CONVERSOR DE PEBIBIT ************");
	printf("\n *  1)  Pebibit   ->   Bit                    *");
	printf("\n *  2)  Pebibit   ->   Kilobit                *");
	printf("\n *  3)  Pebibit   ->   Kibibit                *");
	printf("\n *  4)  Pebibit   ->   Megabit                *");
	printf("\n *  5)  Pebibit   ->   Mebibit                *");
	printf("\n *  6)  Pebibit   ->   Gigabit                *");
	printf("\n *  7)  Pebibit   ->   Gibibit                *");
	printf("\n *  8)  Pebibit   ->   Terabit                *");
	printf("\n *  9)  Pebibit   ->   Tebibit                *");
	printf("\n *  10) Pebibit   ->   Petabit                *");
	printf("\n *  11) Pebibit   ->   Byte                   *");
	printf("\n *  12) Pebibit   ->   Kilobyte               *");
	printf("\n *  13) Pebibit   ->   Kibibyte               *");
	printf("\n *  14) Pebibit   ->   Megabyte               *");
	printf("\n *  15) Pebibit   ->   MebiByte               *");
	printf("\n *  16) Pebibit   ->   Gigabyte               *");
	printf("\n *  17) Pebibit   ->   Gibibyte               *");
	printf("\n *  18) Pebibit   ->   Terabyte               *");
	printf("\n *  19) Pebibit   ->   Tebibyte               *");
	printf("\n *  20) Pebibit   ->   Petabyte               *");
	printf("\n *  21) Pebibit   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaPebibit);
	return respostaPebibit;
}


//BYTE para X
float BYTEpBit (float data) {
	return (data*(8));
}
float BYTEpKilobit (float data) {
	return (data/(125));
}
float BYTEpKibibit (float data) {
	return (data/(128));
}
float BYTEpMegabit (float data) {
	return (data/(125000));
}
float BYTEpMebibit (float data) {
	return (data/(131072));
}
float BYTEpGigabit (float data) {
	return (data/(1.25e+8));
}
float BYTEpGibibit (float data) {
	return (data/(1.342e+8));
}
float BYTEpTerabit (float data) {
	return (data/(1.25e+11));
}
float BYTEpTebibit (float data) {
	return (data/(1.374e+11));
}
float BYTEpPetabit (float data) {
	return (data/(1.25e+14));
}
float BYTEpPebibit (float data) {
	return (data/(1.407e+14));
}
float BYTEpKilobyte (float data) {
	return (data/(1000));
}
float BYTEpKibibyte (float data) {
	return (data/(1024));
}
float BYTEpMegabyte (float data) {
	return (data/(1e+6));
}
float BYTEpMebiByte (float data) {
	return (data/(1.049e+6));
}
float BYTEpGigabyte (float data) {
	return (data/(1e+9));
}
float BYTEpGibibyte (float data) {
	return (data/(1.074e+9));
}
float BYTEpTerabyte (float data) {
	return (data/(1e+12));
}
float BYTEpTebibyte (float data) {
	return (data/(1.1e+12));
}
float BYTEpPetabyte (float data) {
	return (data/(1e+15));
}
float BYTEpPebibyte (float data) {
	return (data/(1.126e+15));
}
int MenuByte() {
	system("cls || clear");
	
	int respostaByte;
	printf("\n ************ CONVERSOR DE BYTE ************");
	printf("\n *  1)  Byte   ->   Bit                    *");
	printf("\n *  2)  Byte   ->   Kilobit                *");
	printf("\n *  3)  Byte   ->   Kibibit                *");
	printf("\n *  4)  Byte   ->   Megabit                *");
	printf("\n *  5)  Byte   ->   Mebibit                *");
	printf("\n *  6)  Byte   ->   Gigabit                *");
	printf("\n *  7)  Byte   ->   Gibibit                *");
	printf("\n *  8)  Byte   ->   Terabit                *");
	printf("\n *  9)  Byte   ->   Tebibit                *");
	printf("\n *  10) Byte   ->   Petabit                *");
	printf("\n *  11) Byte   ->   Pebibit                *");
	printf("\n *  12) Byte   ->   Kilobyte               *");
	printf("\n *  13) Byte   ->   Kibibyte               *");
	printf("\n *  14) Byte   ->   Megabyte               *");
	printf("\n *  15) Byte   ->   MebiByte               *");
	printf("\n *  16) Byte   ->   Gigabyte               *");
	printf("\n *  17) Byte   ->   Gibibyte               *");
	printf("\n *  18) Byte   ->   Terabyte               *");
	printf("\n *  19) Byte   ->   Tebibyte               *");
	printf("\n *  20) Byte   ->   Petabyte               *");
	printf("\n *  21) Byte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaByte);
	return respostaByte;
}


//KILOBYTE para X
float KILOBYTEpBit (float data) {
	return (data*(8000));
}
float KILOBYTEpKilobit (float data) {
	return (data*(8));
}
float KILOBYTEpKibibit (float data) {
	return (data*(7.812));
}
float KILOBYTEpMegabit (float data) {
	return (data/(125));
}
float KILOBYTEpMebibit (float data) {
	return (data/(131));
}
float KILOBYTEpGigabit (float data) {
	return (data/(125000));
}
float KILOBYTEpGibibit (float data) {
	return (data/(134218));
}
float KILOBYTEpTerabit (float data) {
	return (data/(1.25e+8));
}
float KILOBYTEpTebibit (float data) {
	return (data/(1.374e+8));
}
float KILOBYTEpPetabit (float data) {
	return (data/(1.25e+11));
}
float KILOBYTEpPebibit (float data) {
	return (data/(1.407e+11));
}
float KILOBYTEpByte (float data) {
	return (data*(1000));
}
float KILOBYTEpKibibyte (float data) {
	return (data/(1.024));
}
float KILOBYTEpMegabyte (float data) {
	return (data/(1000));
}
float KILOBYTEpMebiByte (float data) {
	return (data/(1049));
}
float KILOBYTEpGigabyte (float data) {
	return (data/(1e+6));
}
float KILOBYTEpGibibyte (float data) {
	return (data/(1.074e+6));
}
float KILOBYTEpTerabyte (float data) {
	return (data/(1e+9));
}
float KILOBYTEpTebibyte (float data) {
	return (data/(1.1e+9));
}
float KILOBYTEpPetabyte (float data) {
	return (data/(1e+12));
}
float KILOBYTEpPebibyte (float data) {
	return (data/(1.126e+12));
}
int MenuKilobyte() {
	system("cls || clear");
	
	int respostaKilobyte;
	printf("\n ************ CONVERSOR DE KILOBYTE ************");
	printf("\n *  1)  Kilobyte   ->   Bit                    *");
	printf("\n *  2)  Kilobyte   ->   Kilobit                *");
	printf("\n *  3)  Kilobyte   ->   Kibibit                *");
	printf("\n *  4)  Kilobyte   ->   Megabit                *");
	printf("\n *  5)  Kilobyte   ->   Mebibit                *");
	printf("\n *  6)  Kilobyte   ->   Gigabit                *");
	printf("\n *  7)  Kilobyte   ->   Gibibit                *");
	printf("\n *  8)  Kilobyte   ->   Terabit                *");
	printf("\n *  9)  Kilobyte   ->   Tebibit                *");
	printf("\n *  10) Kilobyte   ->   Petabit                *");
	printf("\n *  11) Kilobyte   ->   Pebibit                *");
	printf("\n *  12) Kilobyte   ->   Byte                   *");
	printf("\n *  13) Kilobyte   ->   Kibibyte               *");
	printf("\n *  14) Kilobyte   ->   Megabyte               *");
	printf("\n *  15) Kilobyte   ->   MebiByte               *");
	printf("\n *  16) Kilobyte   ->   Gigabyte               *");
	printf("\n *  17) Kilobyte   ->   Gibibyte               *");
	printf("\n *  18) Kilobyte   ->   Terabyte               *");
	printf("\n *  19) Kilobyte   ->   Tebibyte               *");
	printf("\n *  20) Kilobyte   ->   Petabyte               *");
	printf("\n *  21) Kilobyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaKilobyte);
	return respostaKilobyte;
}


//KIBIBYTE para X
float KIBIBYTEpBit (float data) {
	return (data*(8192));
}
float KIBIBYTEpKilobit (float data) {
	return (data*(8.192));
}
float KIBIBYTEpKibibit (float data) {
	return (data*(8));
}
float KIBIBYTEpMegabit (float data) {
	return (data/(122));
}
float KIBIBYTEpMebibit (float data) {
	return (data/(128));
}
float KIBIBYTEpGigabit (float data) {
	return (data/(122070));
}
float KIBIBYTEpGibibit (float data) {
	return (data/(131072));
}
float KIBIBYTEpTerabit (float data) {
	return (data/(1.221e+8));
}
float KIBIBYTEpTebibit (float data) {
	return (data/(1.342e+8));
}
float KIBIBYTEpPetabit (float data) {
	return (data/(1.221e+11));
}
float KIBIBYTEpPebibit (float data) {
	return (data/(1.374e+11));
}
float KIBIBYTEpByte (float data) {
	return (data*(1024));
}
float KIBIBYTEpKilobyte (float data) {
	return (data*(1.024));
}
float KIBIBYTEpMegabyte (float data) {
	return (data/(977));
}
float KIBIBYTEpMebiByte (float data) {
	return (data/(1024));
}
float KIBIBYTEpGigabyte (float data) {
	return (data/(976562));
}
float KIBIBYTEpGibibyte (float data) {
	return (data/(1.049e+6));
}
float KIBIBYTEpTerabyte (float data) {
	return (data/(9.766e+8));
}
float KIBIBYTEpTebibyte (float data) {
	return (data/(1.074e+9));
}
float KIBIBYTEpPetabyte (float data) {
	return (data/(9.766e+11));
}
float KIBIBYTEpPebibyte (float data) {
	return (data/(1.1e+12));
}
int MenuKibibyte() {
	system("cls || clear");
	
	int respostaKibibyte;
	printf("\n ************ CONVERSOR DE KIBIBYTE ************");
	printf("\n *  1)  Kibibyte   ->   Bit                    *");
	printf("\n *  2)  Kibibyte   ->   Kilobit                *");
	printf("\n *  3)  Kibibyte   ->   Kibibit                *");
	printf("\n *  4)  Kibibyte   ->   Megabit                *");
	printf("\n *  5)  Kibibyte   ->   Mebibit                *");
	printf("\n *  6)  Kibibyte   ->   Gigabit                *");
	printf("\n *  7)  Kibibyte   ->   Gibibit                *");
	printf("\n *  8)  Kibibyte   ->   Terabit                *");
	printf("\n *  9)  Kibibyte   ->   Tebibit                *");
	printf("\n *  10) Kibibyte   ->   Petabit                *");
	printf("\n *  11) Kibibyte   ->   Pebibit                *");
	printf("\n *  12) Kibibyte   ->   Byte                   *");
	printf("\n *  13) Kibibyte   ->   Kolobyte               *");
	printf("\n *  14) Kibibyte   ->   Megabyte               *");
	printf("\n *  15) Kibibyte   ->   MebiByte               *");
	printf("\n *  16) Kibibyte   ->   Gigabyte               *");
	printf("\n *  17) Kibibyte   ->   Gibibyte               *");
	printf("\n *  18) Kibibyte   ->   Terabyte               *");
	printf("\n *  19) Kibibyte   ->   Tebibyte               *");
	printf("\n *  20) Kibibyte   ->   Petabyte               *");
	printf("\n *  21) Kibibyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaKibibyte);
	return respostaKibibyte;
}


//MEGABYTE para X
float MEGABYTEpBit (float data) {
	return (data*(8e+6));
}
float MEGABYTEpKilobit (float data) {
	return (data*(8000));
}
float MEGABYTEpKibibit (float data) {
	return (data*(7813));
}
float MEGABYTEpMegabit (float data) {
	return (data*(8));
}
float MEGABYTEpMebibit (float data) {
	return (data*(7.629));
}
float MEGABYTEpGigabit (float data) {
	return (data/(125));
}
float MEGABYTEpGibibit (float data) {
	return (data/(134));
}
float MEGABYTEpTerabit (float data) {
	return (data/(125000));
}
float MEGABYTEpTebibit (float data) {
	return (data/(137439));
}
float MEGABYTEpPetabit (float data) {
	return (data/(1.25e+8));
}
float MEGABYTEpPebibit (float data) {
	return (data/(1.407e+8));
}
float MEGABYTEpByte (float data) {
	return (data*(1e+6));
}
float MEGABYTEpKilobyte (float data) {
	return (data*(1000));
}
float MEGABYTEpKibibyte (float data) {
	return (data*(977));
}
float MEGABYTEpMebiByte (float data) {
	return (data/(1.049));
}
float MEGABYTEpGigabyte (float data) {
	return (data/(1000));
}
float MEGABYTEpGibibyte (float data) {
	return (data/(1074));
}
float MEGABYTEpTerabyte (float data) {
	return (data/(1e+6));
}
float MEGABYTEpTebibyte (float data) {
	return (data/(1.1e+6));
}
float MEGABYTEpPetabyte (float data) {
	return (data/(1e+9));
}
float MEGABYTEpPebibyte (float data) {
	return (data/(1.126e+9));
}
int MenuMegabyte() {
	system("cls || clear");
	
	int respostaMegabyte;
	printf("\n ************ CONVERSOR DE MEGABYTE ************");
	printf("\n *  1)  Megabyte   ->   Bit                    *");
	printf("\n *  2)  Megabyte   ->   Kilobit                *");
	printf("\n *  3)  Megabyte   ->   Kibibit                *");
	printf("\n *  4)  Megabyte   ->   Megabit                *");
	printf("\n *  5)  Megabyte   ->   Mebibit                *");
	printf("\n *  6)  Megabyte   ->   Gigabit                *");
	printf("\n *  7)  Megabyte   ->   Gibibit                *");
	printf("\n *  8)  Megabyte   ->   Terabit                *");
	printf("\n *  9)  Megabyte   ->   Tebibit                *");
	printf("\n *  10) Megabyte   ->   Petabit                *");
	printf("\n *  11) Megabyte   ->   Pebibit                *");
	printf("\n *  12) Megabyte   ->   Byte                   *");
	printf("\n *  13) Megabyte   ->   Kilobyte               *");
	printf("\n *  14) Megabyte   ->   Kibibyte               *");
	printf("\n *  15) Megabyte   ->   MebiByte               *");
	printf("\n *  16) Megabyte   ->   Gigabyte               *");
	printf("\n *  17) Megabyte   ->   Gibibyte               *");
	printf("\n *  18) Megabyte   ->   Terabyte               *");
	printf("\n *  19) Megabyte   ->   Tebibyte               *");
	printf("\n *  20) Megabyte   ->   Petabyte               *");
	printf("\n *  21) Megabyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaMegabyte);
	return respostaMegabyte;
}


//MEBIBYTE para X
float MEBIBYTEpBit (float data) {
	return (data*(8.389e+6));
}
float MEBIBYTEpKilobit (float data) {
	return (data*(8389));
}
float MEBIBYTEpKibibit (float data) {
	return (data*(8192));
}
float MEBIBYTEpMegabit (float data) {
	return (data*(8.389));
}
float MEBIBYTEpMebibit (float data) {
	return (data*(8));
}
float MEBIBYTEpGigabit (float data) {
	return (data/(119));
}
float MEBIBYTEpGibibit (float data) {
	return (data/(128));
}
float MEBIBYTEpTerabit (float data) {
	return (data/(119209));
}
float MEBIBYTEpTebibit (float data) {
	return (data/(131072));
}
float MEBIBYTEpPetabit (float data) {
	return (data/(1.192e+8));
}
float MEBIBYTEpPebibit (float data) {
	return (data/(1.342e+8));
}
float MEBIBYTEpByte (float data) {
	return (data*(1.049e+6));
}
float MEBIBYTEpKilobyte (float data) {
	return (data*(1049));
}
float MEBIBYTEpKibibyte (float data) {
	return (data*(1024));
}
float MEBIBYTEpMegabyte (float data) {
	return (data*(1.049));
}
float MEBIBYTEpMebiByte (float data) {
	return (data/(1024));
}
float MEBIBYTEpGigabyte (float data) {
	return (data/(976562));
}
float MEBIBYTEpGibibyte (float data) {
	return (data/(1.049e+6));
}
float MEBIBYTEpTerabyte (float data) {
	return (data/(9.766e+8));
}
float MEBIBYTEpTebibyte (float data) {
	return (data/(1.074e+9));
}
float MEBIBYTEpPetabyte (float data) {
	return (data/(9.766e+11));
}
float MEBIBYTEpPebibyte (float data) {
	return (data/(1.1e+12));
}
int MenuMebiByte() {
	system("cls || clear");
	
	int respostaMebiByte;
	printf("\n ************ CONVERSOR DE MEBIBYTE ************");
	printf("\n *  1)  MebiByte   ->   Bit                    *");
	printf("\n *  2)  MebiByte   ->   Kilobit                *");
	printf("\n *  3)  MebiByte   ->   Kibibit                *");
	printf("\n *  4)  MebiByte   ->   Megabit                *");
	printf("\n *  5)  MebiByte   ->   Mebibit                *");
	printf("\n *  6)  MebiByte   ->   Gigabit                *");
	printf("\n *  7)  MebiByte   ->   Gibibit                *");
	printf("\n *  8)  MebiByte   ->   Terabit                *");
	printf("\n *  9)  MebiByte   ->   Tebibit                *");
	printf("\n *  10) MebiByte   ->   Petabit                *");
	printf("\n *  11) MebiByte   ->   Pebibit                *");
	printf("\n *  12) MebiByte   ->   Byte                   *");
	printf("\n *  13) MebiByte   ->   Kilobyte               *");
	printf("\n *  14) MebiByte   ->   Kibibyte               *");
	printf("\n *  15) MebiByte   ->   Megabyte               *");
	printf("\n *  16) MebiByte   ->   Gigabyte               *");
	printf("\n *  17) MebiByte   ->   Gibibyte               *");
	printf("\n *  18) MebiByte   ->   Terabyte               *");
	printf("\n *  19) MebiByte   ->   Tebibyte               *");
	printf("\n *  20) MebiByte   ->   Petabyte               *");
	printf("\n *  21) MebiByte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaMebiByte);
	return respostaMebiByte;
}


//GIGABYTE para X
float GIGABYTEpBit (float data) {
	return (data*(8e+9));
}
float GIGABYTEpKilobit (float data) {
	return (data*(8e+6));
}
float GIGABYTEpKibibit (float data) {
	return (data*(7.812e+6));
}
float GIGABYTEpMegabit (float data) {
	return (data*(8000));
}
float GIGABYTEpMebibit (float data) {
	return (data*(7629));
}
float GIGABYTEpGigabit (float data) {
	return (data*(8));
}
float GIGABYTEpGibibit (float data) {
	return (data*(7.451));
}
float GIGABYTEpTerabit (float data) {
	return (data/(125));
}
float GIGABYTEpTebibit (float data) {
	return (data/(137));
}
float GIGABYTEpPetabit (float data) {
	return (data/(125000));
}
float GIGABYTEpPebibit (float data) {
	return (data/(140737));
}
float GIGABYTEpByte (float data) {
	return (data*(1e+9));
}
float GIGABYTEpKilobyte (float data) {
	return (data*(1e+6));
}
float GIGABYTEpKibibyte (float data) {
	return (data*(976563));
}
float GIGABYTEpMegabyte (float data) {
	return (data*(1000));
}
float GIGABYTEpMebiByte (float data) {
	return (data*(954));
}
float GIGABYTEpGibibyte (float data) {
	return (data/(1.074));
}
float GIGABYTEpTerabyte (float data) {
	return (data/(1000));
}
float GIGABYTEpTebibyte (float data) {
	return (data/(1100));
}
float GIGABYTEpPetabyte (float data) {
	return (data/(1e+6));
}
float GIGABYTEpPebibyte (float data) {
	return (data/(1.126e+6));
}
int MenuGigabyte() {
	system("cls || clear");
	
	int respostaGigabyte;
	printf("\n ************ CONVERSOR DE GIGABYTE ************");
	printf("\n *  1)  Gigabyte   ->   Bit                    *");
	printf("\n *  2)  Gigabyte   ->   Kilobit                *");
	printf("\n *  3)  Gigabyte   ->   Kibibit                *");
	printf("\n *  4)  Gigabyte   ->   Megabit                *");
	printf("\n *  5)  Gigabyte   ->   Mebibit                *");
	printf("\n *  6)  Gigabyte   ->   Gigabit                *");
	printf("\n *  7)  Gigabyte   ->   Gibibit                *");
	printf("\n *  8)  Gigabyte   ->   Terabit                *");
	printf("\n *  9)  Gigabyte   ->   Tebibit                *");
	printf("\n *  10) Gigabyte   ->   Petabit                *");
	printf("\n *  11) Gigabyte   ->   Pebibit                *");
	printf("\n *  12) Gigabyte   ->   Byte                   *");
	printf("\n *  13) Gigabyte   ->   Kilobyte               *");
	printf("\n *  14) Gigabyte   ->   Kibibyte               *");
	printf("\n *  15) Gigabyte   ->   Megabyte               *");
	printf("\n *  16) Gigabyte   ->   MebiByte               *");
	printf("\n *  17) Gigabyte   ->   Gibibyte               *");
	printf("\n *  18) Gigabyte   ->   Terabyte               *");
	printf("\n *  19) Gigabyte   ->   Tebibyte               *");
	printf("\n *  20) Gigabyte   ->   Petabyte               *");
	printf("\n *  21) Gigabyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaGigabyte);
	return respostaGigabyte;
}


//GIBIBYTE para X
float GIBIBYTEpBit (float data) {
	return (data*(8.59e+9));
}
float GIBIBYTEpKilobit (float data) {
	return (data*(8.59e+6));
}
float GIBIBYTEpKibibit (float data) {
	return (data*(8.389e+6));
}
float GIBIBYTEpMegabit (float data) {
	return (data*(8590));
}
float GIBIBYTEpMebibit (float data) {
	return (data*(8192));
}
float GIBIBYTEpGigabit (float data) {
	return (data*(8,59));
}
float GIBIBYTEpGibibit (float data) {
	return (data*(8));
}
float GIBIBYTEpTerabit (float data) {
	return (data/(116));
}
float GIBIBYTEpTebibit (float data) {
	return (data/(128));
}
float GIBIBYTEpPetabit (float data) {
	return (data/(116415));
}
float GIBIBYTEpPebibit (float data) {
	return (data/(131072));
}
float GIBIBYTEpByte (float data) {
	return (data*(1.074e+9));
}
float GIBIBYTEpKilobyte (float data) {
	return (data*(1.074e+6));
}
float GIBIBYTEpKibibyte (float data) {
	return (data*(1.049e+6));
}
float GIBIBYTEpMegabyte (float data) {
	return (data*(1074));
}
float GIBIBYTEpMebiByte (float data) {
	return (data*(1024));
}
float GIBIBYTEpGigabyte (float data) {
	return (data*(1.074));
}
float GIBIBYTEpTerabyte (float data) {
	return (data/(931));
}
float GIBIBYTEpTebibyte (float data) {
	return (data/(1024));
}
float GIBIBYTEpPetabyte (float data) {
	return (data/(931323));
}
float GIBIBYTEpPebibyte (float data) {
	return (data/(1.049e+6));
}
int MenuGibibyte() {
	system("cls || clear");
	
	int respostaGibibyte;
	printf("\n ************ CONVERSOR DE GIBIBYTE ************");
	printf("\n *  1)  Gibibyte   ->   Bit                    *");
	printf("\n *  2)  Gibibyte   ->   Kilobit                *");
	printf("\n *  3)  Gibibyte   ->   Kibibit                *");
	printf("\n *  4)  Gibibyte   ->   Megabit                *");
	printf("\n *  5)  Gibibyte   ->   Mebibit                *");
	printf("\n *  6)  Gibibyte   ->   Gigabit                *");
	printf("\n *  7)  Gibibyte   ->   Gibibit                *");
	printf("\n *  8)  Gibibyte   ->   Terabit                *");
	printf("\n *  9)  Gibibyte   ->   Tebibit                *");
	printf("\n *  10) Gibibyte   ->   Petabit                *");
	printf("\n *  11) Gibibyte   ->   Pebibit                *");
	printf("\n *  12) Gibibyte   ->   Byte                   *");
	printf("\n *  13) Gibibyte   ->   Kilobyte               *");
	printf("\n *  14) Gibibyte   ->   Kibibyte               *");
	printf("\n *  15) Gibibyte   ->   Megabyte               *");
	printf("\n *  16) Gibibyte   ->   MebiByte               *");
	printf("\n *  17) Gibibyte   ->   Gigabyte               *");
	printf("\n *  18) Gibibyte   ->   Terabyte               *");
	printf("\n *  19) Gibibyte   ->   Tebibyte               *");
	printf("\n *  20) Gibibyte   ->   Petabyte               *");
	printf("\n *  21) Gibibyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaGibibyte);
	return respostaGibibyte;
}


//TERABYTE para X
float TERABYTEpBit (float data) {
	return (data*(8e+12));
}
float TERABYTEpKilobit (float data) {
	return (data*(8e+9));
}
float TERABYTEpKibibit (float data) {
	return (data*(7.812e+9));
}
float TERABYTEpMegabit (float data) {
	return (data*(8e+6));
}
float TERABYTEpMebibit (float data) {
	return (data*(7.629e+6));
}
float TERABYTEpGigabit (float data) {
	return (data*(8000));
}
float TERABYTEpGibibit (float data) {
	return (data*(7451));
}
float TERABYTEpTerabit (float data) {
	return (data*(8));
}
float TERABYTEpTebibit (float data) {
	return (data*(7.276));
}
float TERABYTEpPetabit (float data) {
	return (data/(125));
}
float TERABYTEpPebibit (float data) {
	return (data/(141));
}
float TERABYTEpByte (float data) {
	return (data*(1e+12));
}
float TERABYTEpKilobyte (float data) {
	return (data*(1e+9));
}
float TERABYTEpKibibyte (float data) {
	return (data*(9.766e+8));
}
float TERABYTEpMegabyte (float data) {
	return (data*(1e+6));
}
float TERABYTEpMebiByte (float data) {
	return (data*(953674));
}
float TERABYTEpGigabyte (float data) {
	return (data*(1000));
}
float TERABYTEpGibibyte (float data) {
	return (data*(931));
}
float TERABYTEpTebibyte (float data) {
	return (data/(1.1));
}
float TERABYTEpPetabyte (float data) {
	return (data/(1000));
}
float TERABYTEpPebibyte (float data) {
	return (data/(1126));
}
int MenuTerabyte() {
	system("cls || clear");
	
	int respostaTerabyte;
	printf("\n ************ CONVERSOR DE TERABYTE ************");
	printf("\n *  1)  Terabyte   ->   Bit                    *");
	printf("\n *  2)  Terabyte   ->   Kilobit                *");
	printf("\n *  3)  Terabyte   ->   Kibibit                *");
	printf("\n *  4)  Terabyte   ->   Megabit                *");
	printf("\n *  5)  Terabyte   ->   Mebibit                *");
	printf("\n *  6)  Terabyte   ->   Gigabit                *");
	printf("\n *  7)  Terabyte   ->   Gibibit                *");
	printf("\n *  8)  Terabyte   ->   Terabit                *");
	printf("\n *  9)  Terabyte   ->   Tebibit                *");
	printf("\n *  10) Terabyte   ->   Petabit                *");
	printf("\n *  11) Terabyte   ->   Pebibit                *");
	printf("\n *  12) Terabyte   ->   Byte                   *");
	printf("\n *  13) Terabyte   ->   Kilobyte               *");
	printf("\n *  14) Terabyte   ->   Kibibyte               *");
	printf("\n *  15) Terabyte   ->   Megabyte               *");
	printf("\n *  16) Terabyte   ->   MebyByte               *");
	printf("\n *  17) Terabyte   ->   Gigabyte               *");
	printf("\n *  18) Terabyte   ->   Gibibyte               *");
	printf("\n *  19) Terabyte   ->   Tebibyte               *");
	printf("\n *  20) Terabyte   ->   Petabyte               *");
	printf("\n *  21) Terabyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaTerabyte);
	return respostaTerabyte;
}


//TEBIBYTE para X
float TEBIBYTEpBit (float data) {
	return (data*(8.796e+12));
}
float TEBIBYTEpKilobit (float data) {
	return (data*(8.796e+9));
}
float TEBIBYTEpKibibit (float data) {
	return (data*(8.59e+9));
}
float TEBIBYTEpMegabit (float data) {
	return (data*(8.796e+6));
}
float TEBIBYTEpMebibit (float data) {
	return (data*(8.389e+6));
}
float TEBIBYTEpGigabit (float data) {
	return (data*(8796));
}
float TEBIBYTEpGibibit (float data) {
	return (data*(8192));
}
float TEBIBYTEpTerabit (float data) {
	return (data*(8.796));
}
float TEBIBYTEpTebibit (float data) {
	return (data*(8));
}
float TEBIBYTEpPetabit (float data) {
	return (data/(114));
}
float TEBIBYTEpPebibit (float data) {
	return (data/(128));
}
float TEBIBYTEpByte (float data) {
	return (data*(1.1e+12));
}
float TEBIBYTEpKilobyte (float data) {
	return (data*(1.1e+9));
}
float TEBIBYTEpKibibyte (float data) {
	return (data*(1.074e+9));
}
float TEBIBYTEpMegabyte (float data) {
	return (data*(1.1e+6));
}
float TEBIBYTEpMebiByte (float data) {
	return (data*(1.049e+6));
}
float TEBIBYTEpGigabyte (float data) {
	return (data*(1100));
}
float TEBIBYTEpGibibyte (float data) {
	return (data*(1024));
}
float TEBIBYTEpTerabyte (float data) {
	return (data*(1.1));
}
float TEBIBYTEpPetabyte (float data) {
	return (data/(909));
}
float TEBIBYTEpPebibyte (float data) {
	return (data/(1024));
}
int MenuTebibyte() {
	system("cls || clear");
	
	int respostaTebibyte;
	printf("\n ************ CONVERSOR DE TEBIBYTE ************");
	printf("\n *  1)  Tebibyte   ->   Bit                    *");
	printf("\n *  2)  Tebibyte   ->   Kilobit                *");
	printf("\n *  3)  Tebibyte   ->   Kibibit                *");
	printf("\n *  4)  Tebibyte   ->   Megabit                *");
	printf("\n *  5)  Tebibyte   ->   Mebibit                *");
	printf("\n *  6)  Tebibyte   ->   Gigabit                *");
	printf("\n *  7)  Tebibyte   ->   Gibibit                *");
	printf("\n *  8)  Tebibyte   ->   Terabit                *");
	printf("\n *  9)  Tebibyte   ->   Tebibit                *");
	printf("\n *  10) Tebibyte   ->   Petabit                *");
	printf("\n *  11) Tebibyte   ->   Pebibit                *");
	printf("\n *  12) Tebibyte   ->   Byte                   *");
	printf("\n *  13) Tebibyte   ->   Kilobyte               *");
	printf("\n *  14) Tebibyte   ->   Kibibyte               *");
	printf("\n *  15) Tebibyte   ->   Megabyte               *");
	printf("\n *  16) Tebibyte   ->   MebiByte               *");
	printf("\n *  17) Tebibyte   ->   Gigabyte               *");
	printf("\n *  18) Tebibyte   ->   Gibibyte               *");
	printf("\n *  19) Tebibyte   ->   Terabyte               *");
	printf("\n *  20) Tebibyte   ->   Petabyte               *");
	printf("\n *  21) Tebibyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaTebibyte);
	return respostaTebibyte;
}


//PETABYTE para X
float PETABYTEpBit (float data) {
	return (data*(8e+15));
}
float PETABYTEpKilobit (float data) {
	return (data*(8e+12));
}
float PETABYTEpKibibit (float data) {
	return (data*(7.812e+12));
}
float PETABYTEpMegabit (float data) {
	return (data*(8e+9));
}
float PETABYTEpMebibit (float data) {
	return (data*(7.629e+9));
}
float PETABYTEpGigabit (float data) {
	return (data*(8e+6));
}
float PETABYTEpGibibit (float data) {
	return (data*(7.451e+6));
}
float PETABYTEpTerabit (float data) {
	return (data*(8000));
}
float PETABYTEpTebibit (float data) {
	return (data*(7276));
}
float PETABYTEpPetabit (float data) {
	return (data*(8));
}
float PETABYTEpPebibit (float data) {
	return (data*(7.105));
}
float PETABYTEpByte (float data) {
	return (data*(1e+15));
}
float PETABYTEpKilobyte (float data) {
	return (data*(1e+12));
}
float PETABYTEpKibibyte (float data) {
	return (data*(9.766e+11));
}
float PETABYTEpMegabyte (float data) {
	return (data*(1e+9));
}
float PETABYTEpMebiByte (float data) {
	return (data*(9.537e+8));
}
float PETABYTEpGigabyte (float data) {
	return (data*(1e+6));
}
float PETABYTEpGibibyte (float data) {
	return (data*(931323));
}
float PETABYTEpTerabyte (float data) {
	return (data*(1000));
}
float PETABYTEpTebibyte (float data) {
	return (data*(909));
}
float PETABYTEpPebibyte (float data) {
	return (data/(1024));
}
int MenuPetabyte() {
	system("cls || clear");
	
	int respostaPetabyte;
	printf("\n ******* CONVERSOR DE PETABYTE *******");
	printf("\n *  1)  Petabyte   ->   Bit          *");
	printf("\n *  2)  Petabyte   ->   Kilobit      *");
	printf("\n *  3)  Petabyte   ->   Kibibit      *");
	printf("\n *  4)  Petabyte   ->   Megabit      *");
	printf("\n *  5)  Petabyte   ->   Mebibit      *");
	printf("\n *  6)  Petabyte   ->   Gigabit      *");
	printf("\n *  7)  Petabyte   ->   Gibibit      *");
	printf("\n *  8)  Petabyte   ->   Terabit      *");
	printf("\n *  9)  Petabyte   ->   Tebibit      *");
	printf("\n *  10) Petabyte   ->   Petabit      *");
	printf("\n *  11) Petabyte   ->   Pebibit      *");
	printf("\n *  12) Petabyte   ->   Byte         *");
	printf("\n *  13) Petabyte   ->   Kilobyte     *");
	printf("\n *  14) Petabyte   ->   Kibibyte     *");
	printf("\n *  15) Petabyte   ->   Megabyte     *");
	printf("\n *  16) Petabyte   ->   MebiByte     *");
	printf("\n *  17) Petabyte   ->   Gigabyte     *");
	printf("\n *  18) Petabyte   ->   Gibibyte     *");
	printf("\n *  19) Petabyte   ->   Terabyte     *");
	printf("\n *  20) Petabyte   ->   TebiByte     *");
	printf("\n *  21) Petabyte   ->   Pebibyte     *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaPetabyte);
	return respostaPetabyte;
}


//PEBIBYTE para X
float PEBIBYTEpBit (float data) {
	return (data*(9.007e+15));
}
float PEBIBYTEpKilobit (float data) {
	return (data*(9.007e+12));
}
float PEBIBYTEpKibibit (float data) {
	return (data*(8.796e+12));
}
float PEBIBYTEpMegabit (float data) {
	return (data*(9.007e+9));
}
float PEBIBYTEpMebibit (float data) {
	return (data*(8.59e+9));
}
float PEBIBYTEpGigabit (float data) {
	return (data*(9.007e+6));
}
float PEBIBYTEpGibibit (float data) {
	return (data*(8.389e+6));
}
float PEBIBYTEpTerabit (float data) {
	return (data*(9007));
}
float PEBIBYTEpTebibit (float data) {
	return (data*(8192));
}
float PEBIBYTEpPetabit (float data) {
	return (data*(9.007));
}
float PEBIBYTEpPebibit (float data) {
	return (data*(8));
}
float PEBIBYTEpByte (float data) {
	return (data*(1,126e+15));
}
float PEBIBYTEpKilobyte (float data) {
	return (data*(1.126e+12));
}
float PEBIBYTEpKibibyte (float data) {
	return (data*(1.1e+12));
}
float PEBIBYTEpMegabyte (float data) {
	return (data*(1.126e+9));
}
float PEBIBYTEpMebiByte (float data) {
	return (data*(1.074e+9));
}
float PEBIBYTEpGigabyte (float data) {
	return (data*(1.126e+6));
}
float PEBIBYTEpGibibyte (float data) {
	return (data*(1.049e+6));
}
float PEBIBYTEpTerabyte (float data) {
	return (data*(1126));
}
float PEBIBYTEpTebibyte (float data) {
	return (data*(1024));
}
float PEBIBYTEpPetabyte (float data) {
	return (data*(1.126));
}
int MenuPebibyte() {
	system("cls || clear");
	
	int respostaPebibyte;
	printf("\n ******* CONVERSOR DE PEBIBYTE *******");
	printf("\n *  1)  Pebibyte   ->   Bit          *");
	printf("\n *  2)  Pebibyte   ->   Kilobit      *");
	printf("\n *  3)  Pebibyte   ->   Kibibit      *");
	printf("\n *  4)  Pebibyte   ->   Megabit      *");
	printf("\n *  5)  Pebibyte   ->   Mebibit      *");
	printf("\n *  6)  Pebibyte   ->   Gigabit      *");
	printf("\n *  7)  Pebibyte   ->   Gibibit      *");
	printf("\n *  8)  Pebibyte   ->   Terabit      *");
	printf("\n *  9)  Pebibyte   ->   Tebibit      *");
	printf("\n *  10) Pebibyte   ->   Petabit      *");
	printf("\n *  11) Pebibyte   ->   Pebibit      *");
	printf("\n *  12) Pebibyte   ->   Byte         *");
	printf("\n *  13) Pebibyte   ->   Kilobyte     *");
	printf("\n *  14) Pebibyte   ->   Kibibyte     *");
	printf("\n *  15) Pebibyte   ->   Megabyte     *");
	printf("\n *  16) Pebibyte   ->   MebiByte     *");
	printf("\n *  17) Pebibyte   ->   Gigabyte     *");
	printf("\n *  18) Pebibyte   ->   Gibibyte     *");
	printf("\n *  19) Pebibyte   ->   Terabyte     *");
	printf("\n *  20) Pebibyte   ->   TebiByte     *");
	printf("\n *  21) Pebibyte   ->   Petabyte     *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaPebibyte);
	return respostaPebibyte;
}

// ******************** Função principal (main) ********************

int main(void) {
		
	float Dados;
	int respDados = MenuArmDados();
	switch (respDados) {
		case 1: {
			int respBit = MenuBit();
			switch(respBit) {
				case 1: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Kilobits.", Dados, BITpKilobit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Kibibits.", Dados, BITpKibibit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Megabits.", Dados, BITpMegabit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Mebibits.", Dados, BITpMebibit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Gigabits.", Dados, BITpGigabit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Gibibits.", Dados, BITpGibibit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Terabits.", Dados, BITpTerabit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Tebibits.", Dados, BITpTebibit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Petabits.", Dados, BITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Pebibits.", Dados, BITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Bytes.", Dados, BITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Kilobytes.", Dados, BITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Kibibytes.", Dados, BITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Megabytes.", Dados, BITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g MebiBytes.", Dados, BITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Gigabytes.", Dados, BITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Gibibytes.", Dados, BITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Terabytes.", Dados, BITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Tebibytes.", Dados, BITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Petabytes.", Dados, BITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Bit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bits equivalem a %g Pebibytes.", Dados, BITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 2: {
			int respKilobit = MenuKilobit();
			switch(respKilobit) {
				case 1 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Bits.", Dados, KILOBITpBit(Dados));
				break;
				}
				case 2 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Kibibits.", Dados, KILOBITpKibibit(Dados));
				break;
				}
				case 3 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Megabits.", Dados, KILOBITpMegabit(Dados));
				break;
				}
				case 4 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Mebibits.", Dados, KILOBITpMebibit(Dados));
				break;
				}
				case 5 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Gigabits.", Dados, KILOBITpGigabit(Dados));
				break;
				}
				case 6 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Gibibits.", Dados, KILOBITpGibibit(Dados));
				break;
				}
				case 7 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Terabits.", Dados, KILOBITpTerabit(Dados));
				break;
				}
				case 8 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Tebibits.", Dados, KILOBITpTebibit(Dados));
				break;
				}
				case 9 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Petabits.", Dados, KILOBITpPetabit(Dados));
				break;
				}
				case 10 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Pebibits.", Dados, KILOBITpPebibit(Dados));
				break;
				}
				case 11 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Bytes.", Dados, KILOBITpByte(Dados));
				break;
				}
				case 12 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Kilobytes.", Dados, KILOBITpKilobyte(Dados));
				break;
				}
				case 13 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Kibibytes.", Dados, KILOBITpKibibyte(Dados));
				break;
				}
				case 14 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Megabytes.", Dados, KILOBITpMegabyte(Dados));
				break;
				}
				case 15 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g MebiBytes.", Dados, KILOBITpMebiByte(Dados));
				break;
				}
				case 16 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Gigabytes.", Dados, KILOBITpGigabyte(Dados));
				break;
				}
				case 17 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Gibibytes.", Dados, KILOBITpGibibyte(Dados));
				break;
				}
				case 18 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Terabytes.", Dados, KILOBITpTerabyte(Dados));
				break;
				}
				case 19 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g TebiBytes.", Dados, KILOBITpTebibyte(Dados));
				break;
				}
				case 20 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Petabytes.", Dados, KILOBITpPetabyte(Dados));
				break;
				}
				case 21 : {
					printf(" Valor em Kilobit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobits equivalem a %g Pebibytes.", Dados, KILOBITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 3: {
			int respKibibit = MenuKibibit();
			switch (respKibibit) {
				case 1: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Bits.", Dados, KIBIBITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Kilobits.", Dados, KIBIBITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Megabits.", Dados, KIBIBITpMegabit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Mebibits.", Dados, KIBIBITpMebibit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Gigabits.", Dados, KIBIBITpGigabit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Gibibits.", Dados, KIBIBITpGibibit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Terabits.", Dados, KIBIBITpTerabit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Tebibits.", Dados, KIBIBITpTebibit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Petabits.", Dados, KIBIBITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Pebibits.", Dados, KIBIBITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Bytes.", Dados, KIBIBITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Kilobytes.", Dados, KIBIBITpKibibyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Kibibytes.", Dados, KIBIBITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Megabytes.", Dados, KIBIBITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g MebiBytes.", Dados, KIBIBITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Gigabytes.", Dados, KIBIBITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Gibibytes.", Dados, KIBIBITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Terabytes.", Dados, KIBIBITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g TebiBytes.", Dados, KIBIBITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Petabytes.", Dados, KIBIBITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Kibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibits equivalem a %g Pebibytes.", Dados, KIBIBITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 4: {
			int respMegabit = MenuMegabit();
			switch (respMegabit) {
				case 1: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Bits.", Dados, MEGABITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Kilobits.", Dados, MEGABITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Kibibits.", Dados, MEGABITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Mebibits.", Dados, MEGABITpMebibit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Gigabits.", Dados, MEGABITpGigabit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Gibibits.", Dados, MEGABITpGibibit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Terabits.", Dados, MEGABITpTerabit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Tebibits.", Dados, MEGABITpTebibit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Petabits.", Dados, MEGABITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Pebibits.", Dados, MEGABITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Bytes.", Dados, MEGABITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Kilobytes.", Dados, MEGABITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Kibibytes.", Dados, MEGABITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Megabytes.", Dados, MEGABITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g MebiBytes.", Dados, MEGABITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Gigabytes.", Dados, MEGABITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Gibibytes.", Dados, MEGABITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Megabits a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Terabytes.", Dados, MEGABITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g TebiBytes.", Dados, MEGABITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Petabytes.", Dados, MEGABITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Megabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabits equivalem a %g Pebibytes.", Dados, MEGABITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 5: {
			int respMebibit = MenuMebibit();
			switch (respMebibit) {
				case 1: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Bits.", Dados, MEBIBITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Kilobits.", Dados, MEBIBITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Kibibits.", Dados, MEBIBITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Megabits.", Dados, MEBIBITpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Gigabits.", Dados, MEBIBITpGigabit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Gibibits.", Dados, MEBIBITpGibibit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Terabits.", Dados, MEBIBITpTerabit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Tebibits.", Dados, MEBIBITpTebibit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Petabits.", Dados, MEBIBITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Pebibits.", Dados, MEBIBITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Bytes.", Dados, MEBIBITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Kilobytes.", Dados, MEBIBITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Kibibytes.", Dados, MEBIBITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Megabytes.", Dados, MEBIBITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g MebiBytes.", Dados, MEBIBITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Gigabytes.", Dados, MEBIBITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Gibibytes.", Dados, MEBIBITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Terabytes.", Dados, MEBIBITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g TebiBytes.", Dados, MEBIBITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Petabyte.", Dados, MEBIBITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Mebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Mebibits equivalem a %g Pebibytes.", Dados, MEBIBITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 6: {
			int respGigabit = MenuGigabit();
			switch (respGigabit) {
				case 1: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Bits.", Dados, GIGABITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Kilobits.", Dados, GIGABITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Kibibits.", Dados, GIGABITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Megabits.", Dados, GIGABITpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Mebibits.", Dados, GIGABITpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Gibibits.", Dados, GIGABITpGibibit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Terabits.", Dados, GIGABITpTerabit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Tebibits.", Dados, GIGABITpTebibit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Petabits.", Dados, GIGABITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Pebibits.", Dados, GIGABITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Bytes.", Dados, GIGABITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Kilobytes.", Dados, GIGABITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Kibibytes.", Dados, GIGABITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Megabytes.", Dados, GIGABITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g MebiBytes.", Dados, GIGABITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Gigabytes.", Dados, GIGABITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Gibibytes.", Dados, GIGABITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Terabytes.", Dados, GIGABITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g TebiBytes.", Dados, GIGABITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Petabytes.", Dados, GIGABITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Gigabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabits equivalem a %g Pebibytes.", Dados, GIGABITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 7: {
			int respGibibit = MenuGibibit();
			switch (respGibibit) {
				case 1: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Bits.", Dados, GIBIBITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Kilobits.", Dados, GIBIBITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Kibibits.", Dados, GIBIBITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Megabits.", Dados, GIBIBITpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Mebibits.", Dados, GIBIBITpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Gigabits.", Dados, GIBIBITpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Terabits.", Dados, GIBIBITpTerabit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Tebibits.", Dados, GIBIBITpTebibit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Petabits.", Dados, GIBIBITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Pebibits.", Dados, GIBIBITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Bytes.", Dados, GIBIBITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Kilobytes.", Dados, GIBIBITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Kibibytes.", Dados, GIBIBITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Kibibytes a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibyte equivalem a %g Megabytes.", Dados, GIBIBITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g MebiBytes.", Dados, GIBIBITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Gigabytes.", Dados, GIBIBITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Gibibytes.", Dados, GIBIBITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Terabytes.", Dados, GIBIBITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Tebibytes.", Dados, GIBIBITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Petabytes.", Dados, GIBIBITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Gibibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibits equivalem a %g Pebibytes.", Dados, GIBIBITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 8: {
			int respTerabit = MenuTerabit();
			switch (respTerabit) {
				case 1: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Bits.", Dados, TERABITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Kilobits.", Dados, TERABITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Kibibits.", Dados, TERABITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Megabits.", Dados, TERABITpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Mebibits.", Dados, TERABITpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Gigabits.", Dados, TERABITpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Gibibits.", Dados, TERABITpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Tebibits.", Dados, TERABITpTebibit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Petabits.", Dados, TERABITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Pebibits.", Dados, TERABITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Bytes.", Dados, TERABITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Kilobytes.", Dados, TERABITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Kibibytes.", Dados, TERABITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Megabytes.", Dados, TERABITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g MebiBytes.", Dados, TERABITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Gigabytes.", Dados, TERABITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Gibibytes.", Dados, TERABITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Terabytes.", Dados, TERABITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g TebiBytes.", Dados, TERABITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Petabytes.", Dados, TERABITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Terabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabits equivalem a %g Pebibytes.", Dados, TERABITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 9: {
			int respTebibit = MenuTebibit();
			switch (respTebibit) {
				case 1: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Bits.", Dados, TEBIBITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Kilobits.", Dados, TEBIBITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Kibibits.", Dados, TEBIBITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Megabits.", Dados, TEBIBITpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Mebibits.", Dados, TEBIBITpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Gigabits.", Dados, TEBIBITpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Gibibits.", Dados, TEBIBITpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Terabits.", Dados, TEBIBITpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Petabits.", Dados, TEBIBITpPetabit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Pebibits.", Dados, TEBIBITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Bytes.", Dados, TEBIBITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Kilobytes.", Dados, TEBIBITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Kibibytes.", Dados, TEBIBITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Megabytes.", Dados, TEBIBITpMegabyte(Dados));
				break;
			    }
				case 15: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g MebiBytes.", Dados, TEBIBITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Gigabytes.", Dados, TEBIBITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Gibibytes.", Dados, TEBIBITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Terabytes.", Dados, TEBIBITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g TebiBytes.", Dados, TEBIBITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Petabytes.", Dados, TEBIBITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Tebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibits equivalem a %g Pebibytes.", Dados, TEBIBITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 10: {
			int respPetabit = MenuPetabit();
			switch (respPetabit) {
				case 1: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Bits.", Dados, PETABITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Petabits a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Kilobits.", Dados, PETABITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Kibibits.", Dados, PETABITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Megabits.", Dados, PETABITpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Mebibits.", Dados, PETABITpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Gigabits.", Dados, PETABITpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Gibibits.", Dados, PETABITpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Terabits.", Dados, PETABITpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Tebibits.", Dados, PETABITpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Pebibits.", Dados, PETABITpPebibit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Bytes.", Dados, PETABITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Kilobytes.", Dados, PETABITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Kibibytes.", Dados, PETABITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Megabytes.", Dados, PETABITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g MebiBytes.", Dados, PETABITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Gigabytes.", Dados, PETABITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Gibibytes.", Dados, PETABITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Terabytes.", Dados, PETABITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g TebiBytes.", Dados, PETABITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Petabytes.", Dados, PETABITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Petabit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabits equivalem a %g Pebibytes.", Dados, PETABITpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 11: {
			int respPebibit = MenuPebibit();
			switch (respPebibit) {
				case 1: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Bits.", Dados, PEBIBITpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Kilobits.", Dados, PEBIBITpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Kibibits.", Dados, PEBIBITpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Megabits.", Dados, PEBIBITpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Mebibits.", Dados, PEBIBITpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Gigabits.", Dados, PEBIBITpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Gibibits.", Dados, PEBIBITpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Terabits.", Dados, PEBIBITpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Tebibits.", Dados, PEBIBITpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Petabits.", Dados, PEBIBITpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Bytes.", Dados, PEBIBITpByte(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Kilobytes.", Dados, PEBIBITpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Kibibytes.", Dados, PEBIBITpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Megabytes.", Dados, PEBIBITpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g MebiBytes.", Dados, PEBIBITpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Gigabytes.", Dados, PEBIBITpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Gibibytes.", Dados, PEBIBITpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Terabytes.", Dados, PEBIBITpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g TebiBytes.", Dados, PEBIBITpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Petabytes.", Dados, PEBIBITpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Pebibit a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibits equivalem a %g Pebibytes.", Dados, PEBIBITpPebibyte(Dados));
				break;
		    	}
			}
		break;
		}
		case 12: {
			int respByte = MenuByte();
			switch (respByte) {
				case 1: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Bits.", Dados, BYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Kilobits.", Dados, BYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Kibibits.", Dados, BYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Megabits.", Dados, BYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Mebibits.", Dados, BYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Byte equivalem a %g Gigabits.", Dados, BYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Gibibits.", Dados, BYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Terabits.", Dados, BYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Tebibits.", Dados, BYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Petabits.", Dados, BYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Pebibits.", Dados, BYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Kilobytes.", Dados, BYTEpKilobyte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Kibibytes.", Dados, BYTEpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Megabytes.", Dados, BYTEpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g MebiBytes.", Dados, BYTEpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Gigabytes.", Dados, BYTEpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Gibibytes.", Dados, BYTEpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Terabytes.", Dados, BYTEpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Bytes a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g TebiBytes.", Dados, BYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Petabytes.", Dados, BYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Byte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Bytes equivalem a %g Pebibytes.", Dados, BYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 13: {
			int respKilobyte = MenuKilobyte();
			switch (respKilobyte) {
				case 1: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Bits.", Dados, KILOBYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Kilobits.", Dados, KILOBYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Kibibits.", Dados, KILOBYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Megabits.", Dados, KILOBYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Mebibits.", Dados, KILOBYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Gigabits.", Dados, KILOBYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Gibibits.", Dados, KILOBYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Terabits.", Dados, KILOBYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Tebibits.", Dados, KILOBYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Petabits.", Dados, KILOBYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Pebibits.", Dados, KILOBYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Bytes.", Dados, KILOBYTEpByte(Dados));
				break;
			    }
				case 13: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Kibibytes.", Dados, KILOBYTEpKibibyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Megabytes.", Dados, KILOBYTEpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g MebiBytes.", Dados, KILOBYTEpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Gigabytes.", Dados, KILOBYTEpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Gibibytes.", Dados, KILOBYTEpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Terabytes.", Dados, KILOBYTEpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g TebibBytes.", Dados, KILOBYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Petabytes.", Dados, KILOBYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Kilobyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kilobytes equivalem a %g Pebibytes.", Dados, KILOBYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 14: {
			int respKibibyte = MenuKibibyte();
			switch (respKibibyte) {
				case 1: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Bits.", Dados, KIBIBYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Kilobits.", Dados, KIBIBYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Kibibits.", Dados, KIBIBYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Megabits.", Dados, KIBIBYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Mebibits.", Dados, KIBIBYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Gigabits.", Dados, KIBIBYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Gibibits.", Dados, KIBIBYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Terabits.", Dados, KIBIBYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Tebibits.", Dados, KIBIBYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Petabits.", Dados, KIBIBYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Pebibits.", Dados, KIBIBYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Bytes.", Dados, KIBIBYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Kilobytes.", Dados, KIBIBYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Megabytes.", Dados, KIBIBYTEpMegabyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g MebiBytes.", Dados, KIBIBYTEpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Gigabytes.", Dados, KIBIBYTEpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Gibibytes.", Dados, KIBIBYTEpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Terabytes.", Dados, KIBIBYTEpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g TebiBytes.", Dados, KIBIBYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Petabytes.", Dados, KIBIBYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Kibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Kibibytes equivalem a %g Pebibytes.", Dados, KIBIBYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 15: {
			int respMegabyte = MenuMegabyte();
			switch (respMegabyte) {
				case 1: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Bits.", Dados, MEGABYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Kilobits.", Dados, MEGABYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Kibibits.", Dados, MEGABYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Megabits.", Dados, MEGABYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Mebibits.", Dados, MEGABYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Gigabits.", Dados, MEGABYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Gibibits.", Dados, MEGABYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Terabits.", Dados, MEGABYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Tebibits.", Dados, MEGABYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Petabits.", Dados, MEGABYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Pebibits.", Dados, MEGABYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Bytes.", Dados, MEGABYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Kilobytes.", Dados, MEGABYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Kibibytes.", Dados, MEGABYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g MebiBytes.", Dados, MEGABYTEpMebiByte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Gigabytes.", Dados, MEGABYTEpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Gibibytes.", Dados, MEGABYTEpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Terabytes.", Dados, MEGABYTEpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g TebiBytes.", Dados, MEGABYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Petabytes.", Dados, MEGABYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Megabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Megabytes equivalem a %g Pebibytes.", Dados, MEGABYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 16: {
			int respMebiByte = MenuMebiByte();
			switch (respMebiByte) {
				case 1: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Bits.", Dados, MEBIBYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Kilobits.", Dados, MEBIBYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Kibibits.", Dados, MEBIBYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Megabits.", Dados, MEBIBYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Mebibits.", Dados, MEBIBYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Gigabits.", Dados, MEBIBYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Gibibits.", Dados, MEBIBYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Terabits.", Dados, MEBIBYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Tebibits.", Dados, MEBIBYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Petabits.", Dados, MEBIBYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Pebibits.", Dados, MEBIBYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Bytes.", Dados, MEBIBYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Kilobytes.", Dados, MEBIBYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Kibibytes.", Dados, MEBIBYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Megabytes.", Dados, MEBIBYTEpMegabyte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Gigabytes.", Dados, MEBIBYTEpGigabyte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Gibibytes.", Dados, MEBIBYTEpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Terabytes.", Dados, MEBIBYTEpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g TebiBytes.", Dados, MEBIBYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Petabytes.", Dados, MEBIBYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em MebiByte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g MebiBytes equivalem a %g Pebibytes.", Dados, MEBIBYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 17: {
			int respGigabyte = MenuGigabyte();
			switch (respGigabyte) {
				case 1: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Bits.", Dados, GIGABYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Kilobits.", Dados, GIGABYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Kibibits.", Dados, GIGABYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Megabits.", Dados, GIGABYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Mebibits.", Dados, GIGABYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Gigabits.", Dados, GIGABYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Gibibits.", Dados, GIGABYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Terabits.", Dados, GIGABYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Gigabytes a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Tebibits.", Dados, GIGABYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Petabits.", Dados, GIGABYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Pebibits.", Dados, GIGABYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Bytes.", Dados, GIGABYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Kilobytes.", Dados, GIGABYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Kibibytes.", Dados, GIGABYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Megabytes.", Dados, GIGABYTEpMegabyte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g MebiBytes.", Dados, GIGABYTEpMebiByte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Gibibytes.", Dados, GIGABYTEpGibibyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Terabytes.", Dados, GIGABYTEpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g TebiBytes.", Dados, GIGABYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Petabytes.", Dados, GIGABYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Gigabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gigabytes equivalem a %g Pebibytes.", Dados, GIGABYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 18: {
			int respGibibyte = MenuGibibyte();
			switch (respGibibyte) {
				case 1: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Bits.", Dados, GIBIBYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Kilobits.", Dados, GIBIBYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Kibibits.", Dados, GIBIBYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Megabits.", Dados, GIBIBYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Mebibits.", Dados, GIBIBYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Gigabits.", Dados, GIBIBYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Gibibits.", Dados, GIBIBYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Terabits.", Dados, GIBIBYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Tebibits.", Dados, GIBIBYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Petabits.", Dados, GIBIBYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Pebibits.", Dados, GIBIBYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Bytes.", Dados, GIBIBYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Kilobytes.", Dados, GIBIBYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Kibibytes.", Dados, GIBIBYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Megabytes.", Dados, GIBIBYTEpMegabyte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g MebiBytes.", Dados, GIBIBYTEpMebiByte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Gigabytes.", Dados, GIBIBYTEpGigabyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Terabytes.", Dados, GIBIBYTEpTerabyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g TebiBytes.", Dados, GIBIBYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Petabytes.", Dados, GIBIBYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Gibibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibytes equivalem a %g Pebibytes.", Dados, GIBIBYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 19: {
			int respTerabyte = MenuTerabyte();
			switch (respTerabyte) {
				case 1: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Bits.", Dados, TERABYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Kilobits.", Dados, TERABYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Kibibits.", Dados, TERABYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Megabits.", Dados, TERABYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Mebibits.", Dados, TERABYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Gigabits.", Dados, TERABYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Gibibits.", Dados, TERABYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Terabits.", Dados, TERABYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Tebibits.", Dados, TERABYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Petabits.", Dados, TERABYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Pebibits.", Dados, TERABYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Bytes.", Dados, TERABYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Kilobytes.", Dados, TERABYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Kibibytes.", Dados, TERABYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Megabytes.", Dados, TERABYTEpMegabyte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g MebiBytes.", Dados, TERABYTEpMebiByte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Gigabytes.", Dados, TERABYTEpGigabyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Gibibytes.", Dados, TERABYTEpGibibyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g TebiBytes.", Dados, TERABYTEpTebibyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Petabytes.", Dados, TERABYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Terabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Terabytes equivalem a %g Pebibytes.", Dados, TERABYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 20: {
			int respTebibyte = MenuTebibyte();
			switch (respTebibyte) {
				case 1: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Bits.", Dados, TEBIBYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Kilobits.", Dados, TEBIBYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Kibibits.", Dados, TEBIBYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Megabits.", Dados, TEBIBYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Mebibits.", Dados, TEBIBYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Gigabits.", Dados, TEBIBYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Gibibits.", Dados, TEBIBYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Terabits.", Dados, TEBIBYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Tebibits.", Dados, TEBIBYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Petabits.", Dados, TEBIBYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Pebibits.", Dados, TEBIBYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Bytes.", Dados, TEBIBYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Kilobytes.", Dados, TEBIBYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Kibibytes.", Dados, TEBIBYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Megabytes.", Dados, TEBIBYTEpMegabyte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g MebiBytes.", Dados, TEBIBYTEpMebiByte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Gigabytes.", Dados, TEBIBYTEpGigabyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Gibibyte equivalem a %g Gibibytes.", Dados, TEBIBYTEpGibibyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g TeraBytes.", Dados, TEBIBYTEpTerabyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Petabytes.", Dados, TEBIBYTEpPetabyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Tebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Tebibytes equivalem a %g Pebibytes.", Dados, TEBIBYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 21: {
			int respPetabyte = MenuPetabyte();
			switch (respPetabyte) {
				case 1: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Bits.", Dados, PETABYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Kilobits.", Dados, PETABYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Kibibits.", Dados, PETABYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Megabits.", Dados, PETABYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Mebibits.", Dados, PETABYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Gigabits.", Dados, PETABYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Gibibits.", Dados, PETABYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Terabits.", Dados, PETABYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Tebibits.", Dados, PETABYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Petabits.", Dados, PETABYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Pebibits.", Dados, PETABYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Bytes.", Dados, PETABYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Kilobytes.", Dados, PETABYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Kibibytes.", Dados, PETABYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Megabytes.", Dados, PETABYTEpMegabyte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g MebiBytes.", Dados, PETABYTEpMebiByte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Gigabytes.", Dados, PETABYTEpGigabyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Gibibytes.", Dados, PETABYTEpGibibyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Terabytes.", Dados, PETABYTEpTerabyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g TebiBytes.", Dados, PETABYTEpTebibyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Petabyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Petabytes equivalem a %g Pebibytes.", Dados, PETABYTEpPebibyte(Dados));
				break;
				}
			}
		break;
		}
		case 22: {
			int respPebibyte = MenuPebibyte();
			switch (respPebibyte) {
				case 1: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Bits.", Dados, PEBIBYTEpBit(Dados));
				break;
				}
				case 2: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Kilobits.", Dados, PEBIBYTEpKilobit(Dados));
				break;
				}
				case 3: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Kibibits.", Dados, PEBIBYTEpKibibit(Dados));
				break;
				}
				case 4: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Megabits.", Dados, PEBIBYTEpMegabit(Dados));
				break;
				}
				case 5: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Mebibits.", Dados, PEBIBYTEpMebibit(Dados));
				break;
				}
				case 6: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Gigabits.", Dados, PEBIBYTEpGigabit(Dados));
				break;
				}
				case 7: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Gibibits.", Dados, PEBIBYTEpGibibit(Dados));
				break;
				}
				case 8: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Terabits.", Dados, PEBIBYTEpTerabit(Dados));
				break;
				}
				case 9: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Tebibits.", Dados, PEBIBYTEpTebibit(Dados));
				break;
				}
				case 10: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Petabits.", Dados, PEBIBYTEpPetabit(Dados));
				break;
				}
				case 11: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Pebibits.", Dados, PEBIBYTEpPebibit(Dados));
				break;
				}
				case 12: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Bytes.", Dados, PEBIBYTEpByte(Dados));
				break;
				}
				case 13: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Kilobytes.", Dados, PEBIBYTEpKilobyte(Dados));
				break;
				}
				case 14: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Kibibytes.", Dados, PEBIBYTEpKibibyte(Dados));
				break;
				}
				case 15: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibyte equivalem a %g Megabytes.", Dados, PEBIBYTEpMegabyte(Dados));
				break;
				}
				case 16: {
					printf(" Valor em Pebibytes a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g MebiBytes.", Dados, PEBIBYTEpMebiByte(Dados));
				break;
				}
				case 17: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Gigabytes.", Dados, PEBIBYTEpGigabyte(Dados));
				break;
				}
				case 18: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Gibibytes.", Dados, PEBIBYTEpGibibyte(Dados));
				break;
				}
				case 19: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Terabytes.", Dados, PEBIBYTEpTerabyte(Dados));
				break;
				}
				case 20: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g TebiBytes.", Dados, PEBIBYTEpTebibyte(Dados));
				break;
				}
				case 21: {
					printf(" Valor em Pebibyte a ser convertido: ");
					scanf("%f", &Dados);
					printf(" %g Pebibytes equivalem a %g Petabytes.", Dados, PEBIBYTEpPetabyte(Dados));
				break;
				}
			}
		break;
		}
	}
}
