//11 - Fa�a um programa que receba o pre�o de custo de um produto e mostre o valor de venda. Sabe-se
//que o pre�o de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio.

#include <stdio.h>
int main () {
	
	float a, b, c;
	
	printf("Digite o valor de custo: ");
	scanf("%f", &a);
	
	printf("Digite o valor percentual ");
	scanf("%f", &b);
	
	c = ((b/100)* a) + a;
	
	printf("O valor final ser� de: %.2f", c);
	
	



}
