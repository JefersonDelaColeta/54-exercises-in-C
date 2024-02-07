//17) Em uma escola, o aluno faz duas provas por período, com as
//notas variando de 0 a 10. Caso a média aritmética das duas notas
//seja 5 ou mais, ele passa de ano, senão, ele é reprovado. Faça um
//programa que escreva as duas notas de um aluno e escreva se
//ele passou ou não de ano. 

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
