//27) Elabore um programa que leia um n�mero inteiro entre 1 e 12 e
//imprima o m�s correspondente. Caso seja digitado um valor fora
//desse intervalo, dever� ser exibida uma mensagem informando
//que n�o existe m�s com esse n�mero.

#include <stdio.h>

int main() {	

	int a;
	
	printf("Digite o numero do mes que voce quer saber: ");
	scanf("%i", &a);
	
	switch(a){
		
		case 1:
			printf("O mes digitado � de janeiro.");
			break;
			
			case 2:
				printf("O mes digitado � de fevereiro.");
				break;
					case 3:
			printf("O mes digitado � de marco.");
			break;
			
			case 4:
				printf("O mes digitado � de abril.");
				break;
					case 5:
			printf("O mes digitado � de maio.");
			break;
			
			case 6:
				printf("O mes digitado � de junho.");
				break;
			case 7:
				printf("O mes digitado � de julho.");
				break;
					case 8:
			printf("O mes digitado � agosto.");
			break;
			
			case 9:
				printf("O mes digitado � de setembro.");
				break;
					case 10:
			printf("O mes digitado � de outubro.");
			break;
			
			case 11:
				printf("O mes digitado � de novembro.");
				break;
				case 12:
				printf("O mes digitado � de dezembro.");
				break;
				default:
					printf("O mes digitado n�o � valido.");
	}

	
	



}
