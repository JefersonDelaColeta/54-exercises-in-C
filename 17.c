//17) Em uma escola, o aluno faz duas provas por per�odo, com as
//notas variando de 0 a 10. Caso a m�dia aritm�tica das duas notas
//seja 5 ou mais, ele passa de ano, sen�o, ele � reprovado. Fa�a um
//programa que escreva as duas notas de um aluno e escreva se
//ele passou ou n�o de ano. 

#include <stdio.h>
int main () {
	
	float a, b, media;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &a);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &b);
	
	media = ((a+b)/2);
	
	if (media >= 5){
		printf("Aluno aprovado.");
	}else 
	{
		printf("Aluno reprovado.");
	}


}
