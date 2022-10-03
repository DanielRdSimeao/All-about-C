#include <stdio.h>
#include <windows.h>

//De 0 a 23:59:59
int main () {
	for (int h=0; h<24; h++)
		for (int m=0; m<60; m++)
			for (int s=0; s<60; s++) {
				printf(" %d:%d:%d", h, m, s);
				_sleep(1000);
				system("cls");
			}
}


/*
// para testes (no caso, este main esta fazendo contagem regressiva)
int main () {
//	for (int h=24; h>0; h--)
//		for (int m=60; m>0; m--)
			for (int s=3; s>=0; s--) {
				//printf("\n %d:%d:%d", h, m, s);
				printf("\n %ds", s);
				Sleep(1000);
				system("cls");
			}
}
*/
