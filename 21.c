//21) Em uma empresa o sal�rio final de um vendedor � composto de
//um valor fixo mais um percentual sobre suas vendas de acordo
//com as informa��es abaixo:
//Vendas de R$ 0,00 � R$ 1.500,00 = 2,00%
//Vendas de R$ 1.501,00 � R$ 3.000,00 = 3,00%
//Vendas de R$ 3.001,00 � R$ 6.000,00 = 5,00%
//Vendas acima de R$ 6.001,00 = 6,00%
//Al�m disso, ele � descontado em R$ 5,00 por cada dia de falta ao
//servi�o.
//Fa�a um programa que receba o valor da parte fixa do sal�rio, o
//total de vendas no per�odo e o n�mero de faltas de um vendedor e
//imprima o seu sal�rio final.

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

