//16) Fa�a um programa que receba o valor do sal�rio de uma pessoa
//e o valor de um financiamento pretendido. Caso o financiamento
//seja menor ou igual a 5 vezes o sal�rio da pessoa, o programa
//dever� escrever �Financiamento Concedido�, sen�o, escrever�
//�Financiamento Negado�. Independente de conceder ou n�o o
//financiamento, o programa escrever� depois a frase �Obrigada
//por nos consultar�.

#include <stdio.h>
int main () {
	
	
	int a, b, c;
	
	
	
	printf("Digite o salario: ");
	scanf("%d", &a);
	
	printf("Digite o financiamento pretendido: ");
	scanf("%d", &b);
	
	c = a*5;
	if(b<a){
		printf("Financiamento concedido, Obrigado por nos consultar.");
	}
	else if (b <= c){
		printf("financiamento concedido, Obrigado por nos consultar.");
	}
	else {
		printf("Financiamento negado, Obrigado por nos consultar.");
	}
	
}
