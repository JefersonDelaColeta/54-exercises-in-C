//40) Foi feita uma pesquisa entre os habitantes de uma região. Foram
//coletados os dados de idade, sexo (1-masculino / 2-feminino) e
//salário. Faça um algoritmo que informe:
//a) a média de salário do grupo;
//b) a porcentagem de mulheres do grupo com idade entre 18 e 25
//anos;
//c) quantidade de mulheres com salário até R$1500,00.
//Há um total de 1000 habitantes.

#include <stdio.h>

int main(void) {

    int s=0, th=1000, idade=0, a=0, qntdm=0, qntde=0, msalario=0;
    float media=0, sal=0, soma=0, porcentm=0;
    
    for(int i = 0; i < th; i++ ){
        printf("\nDigite 1 para sexo masculino e 2 para feminino: ");
        scanf("%i", &s);
        if(s != 1 && s!=2){
            printf("\nPrograma finalizado"); break;
        }
        printf("\nDigite a idade: ");
        scanf("%i", &idade);
        
        printf("\nInforme o salario da pessoa: ");
        scanf("%f", &sal);
        if(s==2){
            if(s <= 1500){
                msalario++;
            }
             qntdm++;
            if(idade >= 18 && idade <= 25){
                qntde++;
            }
        }

        soma += sal;
        a++;
    }

    media = soma/a;
    porcentm = (qntde/qntdm)*100;

    printf("\nA media do salari foi de: %.2f", media);
    printf("\nA porcentagem de mulheres entre 18 e 25 anos foi de: %.2f", porcentm);
    printf("\nA quantidade de mulheres com salário até R$1500,00 foi de: %i", msalario);
    

    
  return 0;
}
