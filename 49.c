//49) A convers�o de Farenheight para Celsius � obtida pela f�rmula:
//C = 5/9 * (F� 32). Fa�a um programa que calcule e escreva uma
//tabela de Celsius e Farenheight cujos graus variam de 40� F a 80�
//F, de 1 em 1.

#include <stdio.h>

int main(void) {
    int f, c;

  for (f = 40; f <= 80; f++) {
    c = 5.0 / 9.0 * (f - 32);
    printf("%d� F = %d� C\n", f, c);
  }
    

  
  return 0;
}
