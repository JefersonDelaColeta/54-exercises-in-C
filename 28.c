//28) Dado o dia da semana de 1 à 7, escreva na tela o
//correspondente por extenso (Domingo, Segunda-feira, ...,
//Sábado). 
#include <stdio.h>
int main() {	

	int a;
	
	printf("Digite o numero do dia da semana que voce deseja saber: ");
	scanf("%i", &a);
	
	switch(a){
		
		case 1:
			printf("Segunda-feira.");
			break;
			
			case 2:
				printf("Terca-feira.");
				break;
					case 3:
			printf("Quarta-feira.");
			break;
			
			case 4:
				printf("Quinta-feira.");
				break;
					case 5:
			printf("Sexta-feira.");
			break;
			
			case 6:
				printf("Sabado.");
				break;
			case 7:
				printf("Domingo.");
				break;
				default:
					printf("Dia invalido");
					

}
}
