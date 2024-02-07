//27) Elabore um programa que leia um número inteiro entre 1 e 12 e
//imprima o mês correspondente. Caso seja digitado um valor fora
//desse intervalo, deverá ser exibida uma mensagem informando
//que não existe mês com esse número.

#include <stdio.h>

int main() {	

	int a;
	
	printf("Digite o numero do mes que voce quer saber: ");
	scanf("%i", &a);
	
	switch(a){
		
		case 1:
			printf("O mes digitado é de janeiro.");
			break;
			
			case 2:
				printf("O mes digitado é de fevereiro.");
				break;
					case 3:
			printf("O mes digitado é de marco.");
			break;
			
			case 4:
				printf("O mes digitado é de abril.");
				break;
					case 5:
			printf("O mes digitado é de maio.");
			break;
			
			case 6:
				printf("O mes digitado é de junho.");
				break;
			case 7:
				printf("O mes digitado é de julho.");
				break;
					case 8:
			printf("O mes digitado é agosto.");
			break;
			
			case 9:
				printf("O mes digitado é de setembro.");
				break;
					case 10:
			printf("O mes digitado é de outubro.");
			break;
			
			case 11:
				printf("O mes digitado é de novembro.");
				break;
				case 12:
				printf("O mes digitado é de dezembro.");
				break;
				default:
					printf("O mes digitado não é valido.");
	}

	
	



}
