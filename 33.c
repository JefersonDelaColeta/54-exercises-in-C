//33) A prefeitura de uma cidade deseja fazer uma pesquisa
//com seus habitantes. Fa�a um algoritmo para coletar
//dados sobre o sal�rio e n�mero de filhos de cada
//habitante e ap�s as leituras, escrever: a m�dia de
//sal�rio da popula��o, a m�dia do n�mero de filhos, o
//maior sal�rio dos habitantes, o percentual de pessoas
//com sal�rio menor que R$ 2000,00. O algoritmo acaba
//quando o sal�rio digitado for zero.
#include <stdio.h>

int main(void) {

    float salario=1, mediasal=0, mediafilho=0, maiorsal=0, somasal=0;
    int filho=0,a=0, somafilho=0, b=0, c=0;

    while(salario>0){

        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filho);
        
        printf("Digite o valor do salario (O valor zero encerra o programa): ");
        scanf("%f", &salario);

        somasal = somasal + salario;
        somafilho = somafilho + filho;
        
        
        if(salario==0){
            printf("\nO programa foi finalizado!"); break;
        }if(maiorsal < salario){
            maiorsal = salario;
        }if(salario<2000){
             c++;
        }
            
        a++;
    }
    
    mediasal = somasal/a;
    mediafilho = somafilho/a;
    float porcent = (somasal/c)*100; 
    printf("\nA media salarial eh de: %.2f", mediasal);
    printf("\nA media de filhos eh de: %.2f", mediafilho);
    printf("\nA maior salario eh de: %.2f", maiorsal);
    printf("\nA media salarial eh de: %.2f", porcent);
  
  return 0;
}
