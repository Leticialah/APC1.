/*
Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
  */

#include <stdio.h>

int main() {
  char materia[61];
  float valor_a1;
  float valor_a2;

  printf("Entre com a nota da A1");
  scanf("%s", materia);
  printf("Entre com o valor do item 1: ");
  scanf("%f", valor_a1);
  printf("Entre com o valor do item 1: ");
  scanf("%f", valor_a2);

  float media = 0.4 * nota_a1 + 0.6 * nota_a2;

  printf("Media %f\n", media);

  return 0;
  
}