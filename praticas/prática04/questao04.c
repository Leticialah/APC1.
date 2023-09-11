/*
  Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

int main() {
  float preco_inicial = 100.0f;
  
  float valor_ICMS = preco_inicial * 0.17f;
  float valor_COFINS = preco_inicial * 0.076f;
  float valor_PISPASEP = preco_inicial * 0.0165f;
  
  float preço_final = (1 + 0.17f + 0.076f + 0.0165f) * preco_inicial;

  printf("O preço inicial é %f\n", preco_inicial);
  printf("O valor ICMS é %f\n"), valor_ICMS);
  printf("O valor COFINS é %f\n"), valor_COFINS);
  printf("O valor PIS_PASEB é %f\n"), valor_PISPASEP);
  printf("O preço final é %f\n", preco_final);

  return 0;
  
  
}