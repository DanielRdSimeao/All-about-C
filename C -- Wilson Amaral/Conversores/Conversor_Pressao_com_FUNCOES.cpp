#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int MenuPressao() {
	setlocale(LC_ALL,"portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ***** CONVERSOR PRESSÃO *****");
	printf("\n * 1)  Atmosfera Padrão      *");
	printf("\n * 2)  Bar                   *");
	printf("\n * 3)  Pascal                *");
	printf("\n * 4)  Psi                   *");
	printf("\n * 5)  Torr                  *");
	printf("\n *****************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;	
}

// ATMOSFERA PADRÃO para X
float ATMPDpBar (float pressure) {
	return (pressure*(1.013));
}
float ATMPDpPascal (float pressure) {
	return (pressure*(101325));
}
float ATMPDpPsi (float pressure) {
	return (pressure*(14.696));
}
float ATMPDpTorr (float pressure) {
	return (pressure*(760));
}
int MenuATMPD() {
	system ("cls");
	
	int resposta;
	printf("\n ****** CONVERSOR ATMOSFERA PADRÃO ******");
	printf("\n * 1)  Atmosfera Padrão   ->   Bar      *");
	printf("\n * 2)  Atmosfera Padrão   ->   Pascal   *");
	printf("\n * 3)  Atmosfera Padrão   ->   Psi      *");
	printf("\n * 4)  Atmosfera Padrão   ->   Torr     *");
	printf("\n ****************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// BAR para X
float BARpAtmpd (float pressure) {
	return (pressure/(1.013));
}
float BARpPascal (float pressure) {
	return (pressure*(100000));
}
float BARpPsi (float pressure) {
	return (pressure*(14.504));
}
float BARpTorr (float pressure) {
	return (pressure*(750));
}
int MenuBar() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR BAR ***********");
	printf("\n * 1)  Bar   ->   Atmosfera padrão   *");
	printf("\n * 2)  Bar   ->   Pascal             *");
	printf("\n * 3)  Bar   ->   Psi                *");
	printf("\n * 4)  Bar   ->   Torr               *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// PASCAL para X
float PASCALpAtmpd (float pressure) {
	return (pressure/(101325));
}
float PASCALpBar (float pressure) {
	return (pressure/(100000));
}
float PASCALpPsi (float pressure) {
	return (pressure/(6895));
}
float PASCALpTorr (float pressure) {
	return (pressure/(133));
}
int MenuPascal() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR PASCAL ***********");
	printf("\n * 1)  PASCAL   ->   Atmosfera padrão   *");
	printf("\n * 2)  PASCAL   ->   Bar                *");
	printf("\n * 3)  PASCAL   ->   Psi                *");
	printf("\n * 4)  PASCAL   ->   Torr               *");
	printf("\n ****************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// PSI para X
float PSIpAtmpd (float pressure) {
	return (pressure/(14.696));
}
float PSIpBar (float pressure) {
	return (pressure/(14.504));
}
float PSIpPascal (float pressure) {
	return (pressure/(6895));
}
float PSIpTorr (float pressure) {
	return (pressure/(51.715));
}
int MenuPsi() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR PSI ***********");
	printf("\n * 1)  PSI   ->   Atmosfera padrão   *");
	printf("\n * 2)  PSI   ->   Bar                *");
	printf("\n * 3)  PSI   ->   Pascal             *");
	printf("\n * 4)  PSI   ->   Torr               *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// TORR para X
float TORRpAtmpd (float pressure) {
	return (pressure/(760));
}
float TORRpBar (float pressure) {
	return (pressure/(750));
}
float TORRpPascal (float pressure) {
	return (pressure*(133));
}
float TORRpPsi (float pressure) {
	return (pressure/(51.715));
}
int MenuTorr() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR TORR ***********");
	printf("\n * 1)  TORR   ->   Atmosfera padrão   *");
	printf("\n * 2)  TORR   ->   Bar                *");
	printf("\n * 3)  TORR   ->   Pascal             *");
	printf("\n * 4)  TORR   ->   Psi                *");
	printf("\n **************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


int main () {
	float Pressao;
	int respPressao = MenuPressao();
	switch (respPressao) {
		case 1: {
			int respATMPD = MenuATMPD();
			switch (respATMPD) {
				case 1: {
					printf(" Valor em Atmosfera Padrão a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Atmosferas Padrão equivalem a %g Bars.", Pressao, ATMPDpBar(Pressao));
				break;
				}
				case 2: {
					printf(" Valor em Atmosfera Padrão a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Atmosferas Padrão equivalem a %g Pascals.", Pressao, ATMPDpPascal(Pressao));
				break;
				}
				case 3: {
					printf(" Valor em Atmosfera Padrão a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Atmosferas Padrão equivalem a %g Psis.", Pressao, ATMPDpPsi(Pressao));
				break;
				}
				case 4: {
					printf(" Valor em Atmosfera Padrão a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Atmosferas Padrão equivalem a %g Torrs.", Pressao, ATMPDpTorr(Pressao));
				break;
				}
			}
		break;
		}
		case 2: {
			int respBar = MenuBar();
			switch (respBar) {
				case 1: {
					printf(" Valor em Bar a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Bars equivalem a %g Atmosferas Padrãos.", Pressao, BARpAtmpd(Pressao));
				break;
				}
				case 2: {
					printf(" Valor em Bar a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Bars equivalem a %g Pascals.", Pressao, BARpPascal(Pressao));
				break;
				}
				case 3: {
					printf(" Valor em Bar a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Bars equivalem a %g Psis.", Pressao, BARpPsi(Pressao));
				break;
				}
				case 4: {
					printf(" Valor em Bar a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Bars equivalem a %g Torrs.", Pressao, BARpTorr(Pressao));
				break;
				}
			}
		break;
		}
		case 3: {
			int respPascal = MenuPascal();
			switch (respPascal) {
				case 1: {
					printf(" Valor em Pascal a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Pascals equivalem a %g Atmosferas Padrãos.", Pressao, PASCALpAtmpd(Pressao));
				break;
				}
				case 2: {
					printf(" Valor em Pascal a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Pascals equivalem a %g Bars.", Pressao, PASCALpBar(Pressao));
				break;
				}
				case 3: {
					printf(" Valor em Pascal a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Pascals equivalem a %g Psis.", Pressao, PASCALpPsi(Pressao));
				break;
				}
				case 4: {
					printf(" Valor em Pascal a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Pascals equivalem a %g Torrs.", Pressao, PASCALpTorr(Pressao));
				break;
				}
			}
		break;
		}
		case 4: {
			int respPsi = MenuPsi();
			switch (respPsi) {
				case 1: {
					printf(" Valor em Psi a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Psis equivalem a %g Atmosferas Padrãos.", Pressao, PSIpAtmpd(Pressao));
				break;
				}
				case 2: {
					printf(" Valor em Psi a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Psis equivalem a %g Bars.", Pressao, PSIpBar(Pressao));
				break;
				}
				case 3: {
					printf(" Valor em Psi a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Psis equivalem a %g Pascals.", Pressao, PSIpPascal(Pressao));
				break;
				}
				case 4: {
					printf(" Valor em Psi a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Psis equivalem a %g Torrs.", Pressao, PSIpTorr(Pressao));
				break;
				}
			}
		break;
		}
		case 5: {
			int respTorr = MenuTorr();
			switch (respTorr) {
				case 1: {
					printf(" Valor em Torr a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Torrs equivalem a %g Atmosferas Padrãos.", Pressao, TORRpAtmpd(Pressao));
				break;
				}
				case 2: {
					printf(" Valor em Torr a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Torrs equivalem a %g Bars.", Pressao, TORRpBar(Pressao));
				break;
				}
				case 3: {
					printf(" Valor em Torr a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Torrs equivalem a %g Pascals.", Pressao, TORRpPascal(Pressao));
				break;
				}
				case 4: {
					printf(" Valor em Torr a ser convertido: ");
					scanf("%f", &Pressao);
					printf(" %g Torrs equivalem a %g Psis.", Pressao, TORRpPsi(Pressao));
				break;
				}
			}
		break;
		}
	}
}
