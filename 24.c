//24) Recebidos valores numéricos entre zero e cinco, escreva-os na
//forma literal.

#include<stdio.h>

int main (){
	
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	switch(n){
	
	case 1:
		printf("Número um");
		break;
		
	case 2:
		printf("Número dois");
		break;
		
	case 3:
		printf("Número Três");
		break;
		
	case 4:
		printf("Número quatro");
		break;
		
	case 5: 
		printf("Número cinco");
		break;
		
		default:
		printf("Número nao reconhecido");
		

    }

}
