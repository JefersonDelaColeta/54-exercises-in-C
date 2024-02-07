//22) Faça um programa que leia dois números A e B e imprima o
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
		printf("ambos são iguais %d e %d ", a, b);
	}


}
