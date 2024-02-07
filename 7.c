//7 - Escrever um programa em C que leia o nome de
//um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo
//que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu nome, o
//salário fixo e salário no final do mês.

#include <stdio.h>
int main () {
	
 	char nome[50];
 	float salariofixo, vendas, comissao, fim;
 	
	
	printf("Digite o nome do vendedor: ");
	scanf("%s", &nome);
	printf("Digite o salario do vendedor: ");
	scanf("%f", &salariofixo);
	printf("Digite o valor de vendas efetuadas: ");
	scanf("%f", &vendas);
	
	comissao =  0.15 * vendas;
	fim = comissao + salariofixo;
	
		printf("\n\nO nome do funcionario e %s \n Seu salario é de %.2f: \n E seu salario final foi de: %.2f ", nome, salariofixo, fim);

}
