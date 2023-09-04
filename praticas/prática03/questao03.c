/* 
  Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  int raio = 10;
  const float PI = 3.1416f;
  float perimetro = 2*raio*PI;

    printf("O perímetro da pizza é %f cm\n", perimetro);

  return 0; 
  
}