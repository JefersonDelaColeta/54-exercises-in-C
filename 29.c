//29) Faça um programa em C que leia valores e
//escreva o maior e o menor valor lido. O
//programa finaliza quanto o valor 0 for digitado. #include<stdio.h>

# include <stdio.h>
int main (){
	
	int n[10], maior=0, menor=100000000000;
	
	
	for (int x = 0; x < 10; x++){
		
		printf("Digite um numero: ");
		scanf("%i", &n[x]);
		
		if (n[x] == 0){
			printf("Programa Finalizado\n");
			break;
		} else if (n[x] > maior){
			maior = n[x];
		} else if (n[x] < menor){
			menor = n[x];
		}
	}
	
	printf("O maior numero e: %i\n", maior);
	printf("O menor numero e: %i\n", menor);
	
}
