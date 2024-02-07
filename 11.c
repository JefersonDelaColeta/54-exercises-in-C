//11 - Faça um programa que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se
//que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.

#include <stdio.h>
int main () {
	
	float a, b, c;
	
	printf("Digite o valor de custo: ");
	scanf("%f", &a);
	
	printf("Digite o valor percentual ");
	scanf("%f", &b);
	
	c = ((b/100)* a) + a;
	
	printf("O valor final será de: %.2f", c);
	
	



}
