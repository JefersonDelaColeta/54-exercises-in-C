//8 - Elaborar um programa que efetue a apresentação do valor da conversão em real (R$) de um valor lido
//em dólar (US$). O programa em C deverá solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.
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
