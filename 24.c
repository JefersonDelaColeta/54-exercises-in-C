//24) Recebidos valores num�ricos entre zero e cinco, escreva-os na
//forma literal.

#include<stdio.h>

int main (){
	
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	switch(n){
	
	case 1:
		printf("N�mero um");
		break;
		
	case 2:
		printf("N�mero dois");
		break;
		
	case 3:
		printf("N�mero Tr�s");
		break;
		
	case 4:
		printf("N�mero quatro");
		break;
		
	case 5: 
		printf("N�mero cinco");
		break;
		
		default:
		printf("N�mero nao reconhecido");
		

    }

}
