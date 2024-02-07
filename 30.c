//30) Escreva um programa em C que receba
//números do usuário e imprima o dobro de cada
//número. O programa se encerra quando zero
//for digitado. 
# include <stdio.h>
int main (){
	
	
	
	int a[10];
	float dobro; 
	
	for (int x = 0; x < 10; x++){
		
	printf("Digite um numero: ");
	scanf("%i", &a[x]);
	
	if (a[x] == 0){
		printf("Programa Finalizado\n");
			break;
				} 
				else if (dobro = a[x] * 2){
					printf("O dobro do valor digitado e: %2.f \n", dobro);
	}
		
		
	}
}
