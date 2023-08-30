/*
  Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

int main() {
  int produto = 100.00;
  int n1 = 1;
  float ICMS = 0.17;
  float COFINS = 0.076;
  float PIS_PASEP = 0.0165;
  float preço_final = n1+ICMS*produto+COFINS*produto+PIS_PASEP*produto;

  printf("O preço final é %f\n", preço_final);

  return 0;
  
  
}