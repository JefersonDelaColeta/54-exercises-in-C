//5 - Escreva um programa que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A f�rmula de convers�o �: F=(9*C+160) /5, 
//sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>
int main () {
	
	float c, formula;
	
	printf ("Digite o valor em graus ");
	scanf("%f", &c);
	
	formula = (9*c+160) /5;
	
	printf ("O valor em Fahrenheit � %.2f: ", formula);
}
