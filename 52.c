//52) Escreva um algoritmo que calcule a média aritmética das 3
//notas dos alunos de uma classe. A classe possui 40 alunos.

#include <stdio.h>
int main(void) {

    float n1=0, n2=0, n3=0, media=0, soma=0;
    int i;

    for(i=0;i<40;i++){
        printf("\nDigite a primeira nota do aluno: ");
        scanf("%f", &n1);
        printf("\nDigite a segunda nota do aluno: ");
        scanf("%f", &n2);
        printf("\nDigite a terceira nota do aluno: ");
        scanf("%f", &n3);
        soma = n1+n2+n3;
        media = soma/3;
        printf("\nA media desse aluno foi de %.2f", media);
    }
    
    
  return 0;
}
