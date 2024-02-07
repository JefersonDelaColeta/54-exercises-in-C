//12 - O custo ao consumidor de um carro novo é a
//soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados, primeiro os
//impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o resultado).
//Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um programa que
//leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.

#include <stdio.h>
int main () {
	
		float a, b, c, d;
	
	printf("Digite o valor de custo de fabrica: ");
	scanf("%f", &a);
	
	b = 0.45;
	c = 0.28;
	
	d = ((a*b)*c) + a;
	
	printf("O valor final do carro foi de: %2.f", d);
	
	

}
