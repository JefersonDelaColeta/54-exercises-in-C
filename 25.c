//25) A partir do exerc�cio anterior, pergunte ao usu�rio se deseja os
//numerais em ingl�s ou portugu�s.

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
