//9 - Fa�a um programa que receba um valor que foi depositado e exiba o valor com rendimento ap�s um m�s. Considere fixo o juro da poupan�a em 0,70% a.m.

#include <stdio.h>
int main () {
	
	float a, j, r;
	
	printf("Digite o valor depositado: ");
	scanf("%f", &a);
	
	j = 0.70;
	
	r = 0.70 * a;
	
	
	printf("o valor depositado apos 30 dias com juros � de: %.2f", r);

}
