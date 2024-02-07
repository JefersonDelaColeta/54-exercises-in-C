//21) Em uma empresa o salário final de um vendedor é composto de
//um valor fixo mais um percentual sobre suas vendas de acordo
//com as informações abaixo:
//Vendas de R$ 0,00 à R$ 1.500,00 = 2,00%
//Vendas de R$ 1.501,00 à R$ 3.000,00 = 3,00%
//Vendas de R$ 3.001,00 à R$ 6.000,00 = 5,00%
//Vendas acima de R$ 6.001,00 = 6,00%
//Além disso, ele é descontado em R$ 5,00 por cada dia de falta ao
//serviço.
//Faça um programa que receba o valor da parte fixa do salário, o
//total de vendas no período e o número de faltas de um vendedor e
//imprima o seu salário final.

#include<stdio.h>

int main (){
	
	float s1f, vendas, f1, faltas, soma, aux;
	
	printf("Digite o salario fixo do 1 vendedor:");
	scanf("%f", &s1f);
	printf("Digite a quantidade de faltas:");
	scanf("%f", &f1);
	printf("Digite a quantidade de vendas:");
	scanf("%f", &vendas);

	faltas = (f1 * 5);
	aux = s1f - faltas;
	
	if(vendas >= 0 && vendas <= 1500){
		soma = aux + (aux * 0.02);
		printf("O salario final desse vendedor foi de %2.f", soma);
	} else if(vendas >= 1501 && vendas <= 3000){
		soma = aux + (aux * 0.03);
		printf("O salario final desse vendedor foi de %2.f", soma);
	}else if(vendas >= 3001 && vendas <= 6000){
		soma = aux + (aux * 0.05);
		printf("O salario final desse vendedor foi de %2.f", soma);
	}else if (vendas > 6000){
		soma = aux + (aux * 0.06);
		printf("O salario final desse vendedor foi de %2.f", soma);
	}
}

