//15) Fa�a um programa que pe�a o ano de nascimento de uma
//pessoa, e diga, se for maior de idade, que pode entrar na boate, e
//se n�o for, n�o pode.

#include <stdio.h>
int main () {
	
	int a, b, c;
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &a);
	
	printf("Digite o ano vigente: ");
	scanf("%d", &b);
	
	c = b - a;
	
	if (c >= 18){
		printf("Pode entrar na boate");
	}
	else{
		printf("nao pode entrar na boate");
	}
	
}
