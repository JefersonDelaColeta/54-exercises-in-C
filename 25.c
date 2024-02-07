//25) A partir do exercício anterior, pergunte ao usuário se deseja os
//numerais em inglês ou português.

#include<stdio.h>

int main (){
	
	int n, a;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	printf("Digite 1 para portugues e 2 para ingles: ");
	scanf("%d", &a);
  if(a == 1){	
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
}else if(a == 2){
		switch(n){
	
	case 1:
		printf("Number one");
		break;
		
	case 2:
		printf("Number two");
		break;
		
	case 3:
		printf("Numebr three");
		break;
		
	case 4:
		printf("Number four");
		break;
		
	case 5: 
		printf("Numebr five");
		break;
		
		default:
		printf("invalid number");
    } 
}else{
	printf("Linguagem nao reconhecida");
}

}
