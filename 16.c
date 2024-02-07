//16) Faça um programa que receba o valor do salário de uma pessoa
//e o valor de um financiamento pretendido. Caso o financiamento
//seja menor ou igual a 5 vezes o salário da pessoa, o programa
//deverá escrever “Financiamento Concedido”, senão, escreverá
//“Financiamento Negado”. Independente de conceder ou não o
//financiamento, o programa escreverá depois a frase “Obrigada
//por nos consultar”.

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
