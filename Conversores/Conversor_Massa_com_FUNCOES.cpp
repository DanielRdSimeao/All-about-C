#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int menuMassa() {
	setlocale(LC_ALL,"portuguese");
	system ("cls");

	int respostaMassa;
	printf("\n ********* CONVERSOR DE MASSA *********");
	printf("\n *  1) Tonelada                       *");
	printf("\n *  2) Quilograma                     *");
	printf("\n *  3) Grama                          *");
	printf("\n *  4) Miligrama                      *");
	printf("\n *  5) Micrograma                     *");
	printf("\n *  6) Tonelada de deslocamento       *");
	printf("\n *  7) Tonelada curta                 *");
	printf("\n *  8) Stone                          *");
	printf("\n *  9) Libra                          *");
	printf("\n *  10) Onça                          *");
	printf("\n **************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaMassa);
	return respostaMassa;
}

// TONELADA para X
float (TNLpQuilograma (float mass)) {
	return (mass*(1000));
}
float (TNLpGrama (float mass)) {
	return (mass*(1e+6));
}
float (TNLpMiligrama (float mass)) {
	return (mass*(1e+9));
}
float (TNLpMicrograma (float mass)) {
	return (mass*(1e+12));
}
float (TNLpToneladaDesloc (float mass)) {
	return (mass/(1.016));
}
float (TNLpToneladaCurta (float mass)) {
	return (mass*(1.102));
}
float (TNLpStone (float mass)) {
	return (mass*(157));
}
float (TNLpLibra (float mass)) {
	return (mass*(2205));
}
float (TNLpOnca (float mass)) {
	return (mass*(35274));
}
int MenuTonelada() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE TONELADA *************");
	printf("\n *  1)  Tonelada   ->   Quilograma               *");
	printf("\n *  2)  Tonelada   ->   Grama                    *");
	printf("\n *  3)  Tonelada   ->   Miligrama                *");
	printf("\n *  4)  Tonelada   ->   Micrograma               *");
	printf("\n *  5)  Tonelada   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Tonelada   ->   Tonelada curta           *");
	printf("\n *  7)  Tonelada   ->   Stone                    *");
	printf("\n *  8)  Tonelada   ->   Libra                    *");
	printf("\n *  9)  Tonelada   ->   Onça                     *");
	printf("\n *************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// QUILOGRAMA para X
float (QLGMpTonelada (float mass)) {
	return (mass/(1000));
}
float (QLGMpGrama (float mass)) {
	return (mass*(1000));
}
float (QLGMpMiligrama (float mass)) {
	return (mass*(1e+6));
}
float (QLGMpMicrograma (float mass)) {
	return (mass*(1e+9));
}
float (QLGMpToneladaDesloc (float mass)) {
	return (mass/(1016));
}
float (QLGMpToneladaCurta (float mass)) {
	return (mass/(907));
}
float (QLGMpStone (float mass)) {
	return (mass/(6.35));
}
float (QLGMpLibra (float mass)) {
	return (mass*(2.205));
}
float (QLGMpOnca (float mass)) {
	return (mass*(35.274));
}
int MenuQuilograma() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE QUILOGRAMA *************");
	printf("\n *  1)  Quilograma   ->   Tonelada                 *");
	printf("\n *  2)  Quilograma   ->   Grama                    *");
	printf("\n *  3)  Quilograma   ->   Miligrama                *");
	printf("\n *  4)  Quilograma   ->   Micrograma               *");
	printf("\n *  5)  Quilograma   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Quilograma   ->   Tonelada curta           *");
	printf("\n *  7)  Quilograma   ->   Stone                    *");
	printf("\n *  8)  Quilograma   ->   Libra                    *");
	printf("\n *  9)  Quilograma   ->   Onça                     *");
	printf("\n ***************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// GRAMA para X
float (GRAMApTonelada (float mass)) {
	return (mass/(1e+6));
}
float (GRAMApQuilograma (float mass)) {
	return (mass/(1000));
}
float (GRAMApMiligrama (float mass)) {
	return (mass/(1000));
}
float (GRAMApMicrograma (float mass)) {
	return (mass*(1e+6));
}
float (GRAMApToneladaDesloc (float mass)) {
	return (mass/(1.016e+6));
}
float (GRAMApToneladaCurta (float mass)) {
	return (mass/(907185));
}
float (GRAMApStone (float mass)) {
	return (mass/(6350));
}
float (GRAMApLibra (float mass)) {
	return (mass/(454));
}
float (GRAMApOnca (float mass)) {
	return (mass/(28.35));
}
int MenuGrama() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE GRAMA *************");
	printf("\n *  1)  Grama   ->   Tonelada                 *");
	printf("\n *  2)  Grama   ->   Quilograma               *");
	printf("\n *  3)  Grama   ->   Miligrama                *");
	printf("\n *  4)  Grama   ->   Micrograma               *");
	printf("\n *  5)  Grama   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Grama   ->   Tonelada curta           *");
	printf("\n *  7)  Grama   ->   Stone                    *");
	printf("\n *  8)  Grama   ->   Libra                    *");
	printf("\n *  9)  Grama   ->   Onça                     *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// MILIGRAMA para X
float (MLGMpTonelada (float mass)) {
	return (mass/(1e+9));
}
float (MLGMpQuilograma (float mass)) {
	return (mass/(1e+6));
}
float (MLGMpGrama (float mass)) {
	return (mass/(1000));
}
float (MLGMpMicrograma (float mass)) {
	return (mass*(1000));
}
float (MLGMpToneladaDesloc (float mass)) {
	return (mass/(1.016e+9));
}
float (MLGMpToneladaCurta (float mass)) {
	return (mass/(9.072e+8));
}
float (MLGMpStone (float mass)) {
	return (mass/(6.35e+6));
}
float (MLGMpLibra (float mass)) {
	return (mass/(453592));
}
float (MLGMpOnca (float mass)) {
	return (mass/(28350));
}
int MenuMiligrama() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE MILIGRAMA *************");
	printf("\n *  1)  Miligrama   ->   Tonelada                 *");
	printf("\n *  2)  Miligrama   ->   Quilograma               *");
	printf("\n *  3)  Miligrama   ->   Grama                    *");
	printf("\n *  4)  Miligrama   ->   Micrograma               *");
	printf("\n *  5)  Miligrama   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Miligrama   ->   Tonelada curta           *");
	printf("\n *  7)  Miligrama   ->   Stone                    *");
	printf("\n *  8)  Miligrama   ->   Libra                    *");
	printf("\n *  9)  Miligrama   ->   Onça                     *");
	printf("\n **************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// MICROGRAMA para X
float (MCGMpTonelada (float mass)) {
	return (mass/(1e+12));
}
float (MCGMpQuilograma (float mass)) {
	return (mass/(1e+9));
}
float (MCGMpGrama (float mass)) {
	return (mass/(1e+6));
}
float (MCGMpMiligrama (float mass)) {
	return (mass/(1000));
}
float (MCGMpToneladaDesloc (float mass)) {
	return (mass/(1.016e+12));
}
float (MCGMpToneladaCurta (float mass)) {
	return (mass/(9.072e+11));
}
float (MCGMpStone (float mass)) {
	return (mass/(6.35e+9));
}
float (MCGMpLibra (float mass)) {
	return (mass/(4.536e+8));
}
float (MCGMpOnca (float mass)) {
	return (mass/(2.835e+7));
}
int MenuMicrograma() {
	system ("cls");

	int resposta;
	printf("\n ************ CONVERSOR DE MICROGRAMA **************");
	printf("\n *  1)  Micrograma   ->   Tonelada                 *");
	printf("\n *  2)  Micrograma   ->   Quilograma               *");
	printf("\n *  3)  Micrograma   ->   Grama                    *");
	printf("\n *  4)  Micrograma   ->   Miligrama                *");
	printf("\n *  5)  Micrograma   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Micrograma   ->   Tonelada curta           *");
	printf("\n *  7)  Micrograma   ->   Stone                    *");
	printf("\n *  8)  Micrograma   ->   Libra                    *");
	printf("\n *  9)  Micrograma   ->   Onça                     *");
	printf("\n ***************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Tonelada de Deslocamento para X
float (TNLDSLpTonelada (float mass)) {
	return (mass*(1.016));
}
float (TNLDSLpQuilograma (float mass)) {
	return (mass*(1016));
}
float (TNLDSLpGrama (float mass)) {
	return (mass*(1.16e+6));
}
float (TNLDSLpMiligrama (float mass)) {
	return (mass*(1.16e+9));
}
float (TNLDSLpMicrograma (float mass)) {
	return (mass*(1.016e+12));
}
float (TNLDSLpToneladaCurta (float mass)) {
	return (mass*(1.12));
}
float (TNLDSLpStone (float mass)) {
	return (mass*(160));
}
float (TNLDSLpLibra (float mass)) {
	return (mass*(2240));
}
float (TNLDSLpOnca (float mass)) {
	return (mass*(35840));
}
int MenuToneladaDesloc() {
	system ("cls");

	int resposta;
	printf("\n *********************** CONVERSOR ***********************");
	printf("\n **************** Tonelada de Deslocamento ***************");
	printf("\n *  1)  Tonelada de Deslocamento   ->   Tonelada         *");
	printf("\n *  2)  Tonelada de Deslocamento   ->   Quilograma       *");
	printf("\n *  3)  Tonelada de Deslocamento   ->   Grama            *");
	printf("\n *  4)  Tonelada de Deslocamento   ->   Miligrama        *");
	printf("\n *  5)  Tonelada de Deslocamento   ->   Micrograma       *");
	printf("\n *  6)  Tonelada de Deslocamento   ->   Tonelada curta   *");
	printf("\n *  7)  Tonelada de Deslocamento   ->   Stone            *");
	printf("\n *  8)  Tonelada de Deslocamento   ->   Libra            *");
	printf("\n *  9)  Tonelada de Deslocamento   ->   Onça             *");
	printf("\n *********************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Tonelada Curta para X
float (TNLCTpTonelada (float mass)) {
	return (mass/(1.102));
}
float (TNLCTpQuilograma (float mass)) {
	return (mass*(907));
}
float (TNLCTpGrama (float mass)) {
	return (mass*(907185));
}
float (TNLCTpMiligrama (float mass)) {
	return (mass*(9.072e+8));
}
float (TNLCTpMicrograma (float mass)) {
	return (mass*(9.072e+11));
}
float (TNLCTpToneladaDesloc (float mass)) {
	return (mass/(1.12));
}
float (TNLCTpStone (float mass)) {
	return (mass*(143));
}
float (TNLCTpLibra (float mass)) {
	return (mass*(2000));
}
float (TNLCTpOnca (float mass)) {
	return (mass*(32000));
}
int MenuToneladaCurta() {
	system ("cls");

	int resposta;
	printf("\n ********************** CONVERSOR **********************");
	printf("\n ****************** Tonelada de Curta ******************");
	printf("\n *  1)  Tonelada Curta   ->   Tonelada                 *");
	printf("\n *  2)  Tonelada Curta   ->   Quilograma               *");
	printf("\n *  3)  Tonelada Curta   ->   Grama                    *");
	printf("\n *  4)  Tonelada Curta   ->   Miligrama                *");
	printf("\n *  5)  Tonelada Curta   ->   Micrograma               *");
	printf("\n *  6)  Tonelada Curta   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Tonelada Curta   ->   Stone                    *");
	printf("\n *  8)  Tonelada Curta   ->   Libra                    *");
	printf("\n *  9)  Tonelada Curta   ->   Onça                     *");
	printf("\n *******************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Stone para X
float (STONEpTonelada (float mass)) {
	return (mass/(157));
}
float (STONEpQuilograma (float mass)) {
	return (mass*(6.35));
}
float (STONEpGrama (float mass)) {
	return (mass*(6350));
}
float (STONEpMiligrama (float mass)) {
	return (mass*(6.35e+6));
}
float (STONEpMicrograma (float mass)) {
	return (mass*(6.35e+9));
}
float (STONEpToneladaDesloc (float mass)) {
	return (mass/(160));
}
float (STONEpToneladaCurta (float mass)) {
	return (mass/(143));
}
float (STONEpLibra (float mass)) {
	return (mass*(14));
}
float (STONEpOnca (float mass)) {
	return (mass*(224));
}
int MenuStone() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE STONE *************");
	printf("\n *  1)  Stone   ->   Tonelada                 *");
	printf("\n *  2)  Stone   ->   Quilograma               *");
	printf("\n *  3)  Stone   ->   Grama                    *");
	printf("\n *  4)  Stone   ->   Miligrama                *");
	printf("\n *  5)  Stone   ->   Micrograma               *");
	printf("\n *  6)  Stone   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Stone   ->   Tonelada Curta           *");
	printf("\n *  8)  Stone   ->   Libra                    *");
	printf("\n *  9)  Stone   ->   Onça                     *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Libra para X
float (LIBRApTonelada (float mass)) {
	return (mass/(2205));
}
float (LIBRApQuilograma (float mass)) {
	return (mass/(2.205));
}
float (LIBRApGrama (float mass)) {
	return (mass*(454));
}
float (LIBRApMiligrama (float mass)) {
	return (mass*(453592));
}
float (LIBRApMicrograma (float mass)) {
	return (mass*(4.536e+8));
}
float (LIBRApToneladaDesloc (float mass)) {
	return (mass/(2240));
}
float (LIBRApToneladaCurta (float mass)) {
	return (mass/(2000));
}
float (LIBRApStone (float mass)) {
	return (mass/(14));
}
float (LIBRApOnca (float mass)) {
	return (mass*(16));
}
int MenuLibra() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE LIBRA *************");
	printf("\n *  1)  Libra   ->   Tonelada                 *");
	printf("\n *  2)  Libra   ->   Quilograma               *");
	printf("\n *  3)  Libra   ->   Grama                    *");
	printf("\n *  4)  Libra   ->   Miligrama                *");
	printf("\n *  5)  Libra   ->   Micrograma               *");
	printf("\n *  6)  Libra   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Libra   ->   Tonelada Curta           *");
	printf("\n *  8)  Libra   ->   Stone                    *");
	printf("\n *  9)  Libra   ->   Onça                     *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Onca para X
float (ONCApTonelada (float mass)) {
	return (mass/(35274));
}
float (ONCApQuilograma (float mass)) {
	return (mass/(35.274));
}
float (ONCApGrama (float mass)) {
	return (mass*(28.35));
}
float (ONCApMiligrama (float mass)) {
	return (mass*(28350));
}
float (ONCApMicrograma (float mass)) {
	return (mass*(2.835e+7));
}
float (ONCApToneladaDesloc (float mass)) {
	return (mass/(35840));
}
float (ONCApToneladaCurta (float mass)) {
	return (mass/(32000));
}
float (ONCApStone (float mass)) {
	return (mass/(224));
}
float (ONCApLibra (float mass)) {
	return (mass/(16));
}
int MenuOnca() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE ONÇA *************");
	printf("\n *  1)  Onça   ->   Tonelada                 *");
	printf("\n *  2)  Onça   ->   Quilograma               *");
	printf("\n *  3)  Onça   ->   Grama                    *");
	printf("\n *  4)  Onça   ->   Miligrama                *");
	printf("\n *  5)  Onça   ->   Micrograma               *");
	printf("\n *  6)  Onça   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Onça   ->   Tonelada Curta           *");
	printf("\n *  8)  Onça   ->   Stone                    *");
	printf("\n *  9)  Onça   ->   Libra                    *");
	printf("\n *********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


int main () {
	float Massa;
	int respMassa = menuMassa();
	switch (respMassa) {
		case 1: {
			int respTonelada = MenuTonelada();
			switch (respTonelada) {
				case 1: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Quilogramas.", Massa, TNLpQuilograma(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Gramas.", Massa, TNLpGrama(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Miligramas.", Massa, TNLpMiligrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Microgramas.", Massa, TNLpMicrograma(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Toneladas de Deslocamento.", Massa, TNLpToneladaDesloc(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Toneladas Curtas.", Massa, TNLpToneladaCurta(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Stones.", Massa, TNLpStone(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Libras.", Massa, TNLpLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Tonelada a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas equivalem a %g Onças.", Massa, TNLpOnca(Massa));
				break;
				}
			}
		break;
		}
		case 2: {
			int respQuilograma = MenuQuilograma();
			switch (respQuilograma) {
				case 1: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Toneladas de Deslocamento.", Massa, QLGMpTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Gramas.", Massa, QLGMpGrama(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Miligramas.", Massa, QLGMpMiligrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Microgramas.", Massa, QLGMpMicrograma(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Toneladas de Deslocamento.", Massa, QLGMpToneladaDesloc(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Toneladas Curtas.", Massa, QLGMpToneladaCurta(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Stones.", Massa, QLGMpStone(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Quilogramas a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Libras.", Massa, QLGMpLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Quilograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Quilogramas equivalem a %g Onças.", Massa, QLGMpOnca(Massa));
				break;
				}
			}
		break;
		}
		case 3: {
			int respGrama = MenuGrama();
			switch (respGrama) {
				case 1: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Toneladas.", Massa, GRAMApTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Quilogramas.", Massa, GRAMApQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Miligramas.", Massa, GRAMApMiligrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Microgramas.", Massa, GRAMApMicrograma(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Toneladas de Deslocamento.", Massa, GRAMApToneladaDesloc(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Toneladas Curtas.", Massa, GRAMApToneladaCurta(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Stones.", Massa, GRAMApStone(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Libras.", Massa, GRAMApLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Grama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Gramas equivalem a %g Onças.", Massa, GRAMApOnca(Massa));
				break;
				}
			}
		break;
		}
		case 4: {
			int respMiligrama = MenuMiligrama();
			switch (respMiligrama) {
				case 1: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramasequivalem a %g Toneladas.", Massa, MLGMpTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Quilogramas.", Massa, MLGMpQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Gramas.", Massa, MLGMpGrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Microgramas.", Massa, MLGMpMicrograma(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Toneladas de Deslocamento.", Massa, MLGMpToneladaDesloc(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Toneladas Curtas.", Massa, MLGMpToneladaCurta(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Stones.", Massa, MLGMpStone(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Libras.", Massa, MLGMpLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Miligrama a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Miligramas equivalem a %g Onças.", Massa, MLGMpOnca(Massa));
				break;
				}
			}
		break;
		}
		case 5: {
			int respMicrograma = MenuMicrograma();
			switch (respMicrograma) {
				case 1: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Toneladas.", Massa, MCGMpTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Quilogramas.", Massa, MCGMpQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Gramas.", Massa, MCGMpGrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Miligramas.", Massa, MCGMpMiligrama(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Toneladas de Deslocamentos.", Massa, MCGMpToneladaDesloc(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Toneladas Curtas.", Massa, MCGMpToneladaCurta(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Stones.", Massa, MCGMpStone(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Libras.", Massa, MCGMpLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Micrograma a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Microgramas equivalem a %g Onças.", Massa, MCGMpOnca(Massa));
				break;
				}
			}
		break;
		}
		case 6: {
			int respToneladaDesloc = MenuToneladaDesloc();
			switch (respToneladaDesloc) {
				case 1: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Toneladas.", Massa, TNLDSLpTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Quilogramas.", Massa, TNLDSLpQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Gramas.", Massa, TNLDSLpGrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Miligramas.", Massa, TNLDSLpMiligrama(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Microgramas.", Massa, TNLDSLpMicrograma(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Toneladas Curtas.", Massa, TNLDSLpToneladaCurta(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Stones.", Massa, TNLDSLpStone(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Libras.", Massa, TNLDSLpLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas de Deslocamento equivalem a %g Onças.", Massa, TNLDSLpOnca(Massa));
				break;
				}
			}
		break;
		}
		case 7: {
			int respToneladaCurta = MenuToneladaCurta();
			switch (respToneladaCurta) {
				case 1: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curta equivalem a %g Toneladas.", Massa, TNLCTpTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Quilogramas.", Massa, TNLCTpQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Gramas.", Massa, TNLCTpGrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Miligramas.", Massa, TNLCTpMiligrama(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Microgramas.", Massa, TNLCTpMicrograma(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Toneladas de Deslocamentos.", Massa, TNLCTpToneladaDesloc(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Stones.", Massa, TNLCTpStone(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Libras.", Massa, TNLCTpLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Tonelada Curta a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Toneladas Curtas equivalem a %g Onças.", Massa, TNLCTpOnca(Massa));
				break;
				}
			}
		break;
		}
		case 8: {
			int respStone = MenuStone();
			switch (respStone) {
				case 1: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Toneladas.", Massa, STONEpTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Quilogramas.", Massa, STONEpQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Gramas.", Massa, STONEpGrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Miligramas.", Massa, STONEpMiligrama(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Microgramas.", Massa, STONEpMicrograma(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Toneladas de Deslocamentos.", Massa, STONEpToneladaDesloc(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Toneladas Curtas.", Massa, STONEpToneladaCurta(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Libras.", Massa, STONEpLibra(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Stone a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Stones equivalem a %g Onças.", Massa, STONEpOnca(Massa));
				break;
				}
			}
		break;
		}
		case 9: {
			int respLibra = MenuLibra();
			switch (respLibra) {
				case 1: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Toneladas.", Massa, LIBRApTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Quilogramas.", Massa, LIBRApQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Gramas.", Massa, LIBRApGrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Miligramas.", Massa, LIBRApMiligrama(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Microgramas.", Massa, LIBRApMicrograma(Massa));
				break;
				}
				case 6: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Toneladas de Deslocamentos.", Massa, LIBRApToneladaDesloc(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Toneladas Curtas.", Massa, LIBRApToneladaCurta(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Stones.", Massa, LIBRApStone(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Libra a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Libras equivalem a %g Onças.", Massa, LIBRApOnca(Massa));
				break;
				}
			}
		break;
		}
		case 10: {
			int respOnca = MenuOnca();
			switch (respOnca) {
				case 1: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Toneladas.", Massa, ONCApTonelada(Massa));
				break;
				}
				case 2: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Quilogramas.", Massa, ONCApQuilograma(Massa));
				break;
				}
				case 3: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Gramas.", Massa, ONCApGrama(Massa));
				break;
				}
				case 4: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Miligramas.", Massa, ONCApMiligrama(Massa));
				break;
				}
				case 5: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Microgramas.", Massa, ONCApMicrograma(Massa));
					break;
				}
				case 6: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Toneladas de Deslocamentos.", Massa, ONCApToneladaDesloc(Massa));
				break;
				}
				case 7: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Toneladas Curtas.", Massa, ONCApToneladaCurta(Massa));
				break;
				}
				case 8: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Stones.", Massa, ONCApStone(Massa));
				break;
				}
				case 9: {
					printf(" Valor em Onça a ser convertido: ");
					scanf("%f", &Massa);
					printf(" %g Onças equivalem a %g Libras.", Massa, ONCApLibra(Massa));
				break;
				}
			}
		break;
		}
	}
}
