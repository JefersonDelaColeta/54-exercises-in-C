//8 - Elaborar um programa que efetue a apresenta��o do valor da convers�o em real (R$) de um valor lido
//em d�lar (US$). O programa em C dever� solicitar o valor da cota��o do d�lar e tamb�m a quantidade de d�lares dispon�veis com o usu�rio.
#include <stdio.h>
int main () {
	
	float d,c,r;
	
	printf("Digite o valor em dolar: ");
	scanf("%f", &d);
	
	printf("Digite o valor da cotacao atual: ");
	scanf("%f", &c);
	
	r = c * d;
	
	printf("Seu valor em reais e de: %.2f", r);
	
	

}
