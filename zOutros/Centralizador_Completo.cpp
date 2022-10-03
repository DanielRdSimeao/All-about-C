#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

const char *AlinharTextoCentro(char *Campo, unsigned int LarguraCampo, const char *Texto){
    if (LarguraCampo == 0 || Campo == NULL) return "";

    LarguraCampo--;
    unsigned int len = strlen(Texto);
    unsigned int Prencher = LarguraCampo > len ? (LarguraCampo+1 - len)/2 : 0;
    sprintf(Campo, "%*s%.*s%*s", Prencher, "", LarguraCampo-1, Texto, Prencher>0 && len%2!=LarguraCampo%2 ? Prencher-1 : Prencher, "");

    return (const char *)Campo;
}

int main () {
	setlocale (LC_ALL,"portuguese");
	
	char campo[76];
	printf("\n *******************************************************************************\n");
    printf(" *_%s_*\n", AlinharTextoCentro(campo, sizeof campo, "ALGUM NOME ou textos pequenos")); Sleep(500); // Repetir esta linha quantas vezes quiser
    printf(" *_%s_*\n", AlinharTextoCentro(campo, sizeof campo, "OUTRO NOME ou textos pequenos")); Sleep(500);
    printf(" *******************************************************************************\n");
} 
