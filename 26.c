//26) Criar um programa que leia dois n�meros inteiros, e que solicite
//ao usu�rio qual a opera��o deseja realizar entre esses n�meros.
//Caso o usu�rio digitar 3 ser� realizada uma multiplica��o, caso
//seja digitado o 4 ser� realizada uma divis�o, caso seja digitado o
//1 ser� realizado uma adi��o, e caso seja digitado o 2 ser�
//realizada uma subtra��o. 

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
