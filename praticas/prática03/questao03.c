/* 
  Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  int raio = 10;
 float const_pi = 3.1416;
  float perimetro = 2*raio*const_pi;

    printf("O perímetro da pizza é %f\n", perimetro);

  return 0; 
  
}