//10 - Uma loja est� vendendo seus produtos em 5 presta��es sem juros. Fa�a um programa que receba um valor de uma compra e mostre o valor das presta��es. 

#include <stdio.h>
int main () {
	
	float a, b;
	
	printf("Digite o valor do produto a ser comprado: ");
	scanf("%f", &a);
	
	b = a/5;
	
	printf("Os valores das prestacoes foram de: %.2f ", b);
	


}
	
