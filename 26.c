//26) Criar um programa que leia dois números inteiros, e que solicite
//ao usuário qual a operação deseja realizar entre esses números.
//Caso o usuário digitar 3 será realizada uma multiplicação, caso
//seja digitado o 4 será realizada uma divisão, caso seja digitado o
//1 será realizado uma adição, e caso seja digitado o 2 será
//realizada uma subtração. 

#include<stdio.h>

int main (){
	
	int x, y, op;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &x);
	
	printf("Digite outro numero inteiro: ");
	scanf("%i", &y);
	
	printf("\nQual operacao sera realizada?");
	printf("\nAdicao (1)");
	printf("\nSubtracao (2)");
	printf("\nMultiplicacao (3)");
	printf("\nDivisao (4)\n");
	scanf("%i", &op);
	
	switch (op){
		
		case 1:
			printf("A soma dos dois numeros e igual a: %i", x + y);
		break;
		
		case 2:
			printf("A subtracao dos dois numeros e igual a: %i", x - y);
		break;
		
		case 3:
			printf("A multiplicacao dos dois numeros e igual a: %i", x * y);
		break;
		
		case 4:
			printf("A divisao dos dois numeros e igual a: %i", x / y);
		break;
		
	}
	

	
}
