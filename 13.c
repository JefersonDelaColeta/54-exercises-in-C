//13) Fa�a um programa que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200

#include <stdio.h>
int main () {
	
	int a;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	if(a >= 100 && a < 200) 
	{
		printf("esta entre 100 e 200");
	}
	else{
		printf("Nao esta entre 100 e 200");
	}


}
