//22) Fa�a um programa que leia dois n�meros A e B e imprima o
//maior deles.

#include<stdio.h>

int main (){
	
	int a, b;
	
	printf("Digite o valor 1: ");
	scanf("%d", &a);
	
	printf("Digite o valor 2: ");
	scanf("%d", &b);
	
	if(a>b){
		printf("O valor %d e maior ", a);
	} else if(b>a){
		printf("O valor %d e maior ", b);
	}else{
		printf("ambos s�o iguais %d e %d ", a, b);
	}


}
