//14) Fa�a um programa que receba um n�mero e mostre uma
//mensagem caso este n�mero seja maior que 10. 

#include <stdio.h>
int main () {
	
	int a;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	if(a >= 0 && a<= 10){
		printf("O valor este entre 0 e 10");
	}
	else if (a < 0){
		printf("O valor e menor que zero");
	}
	else{
		printf("O valor e maior que 10");
	}
		


}
	
