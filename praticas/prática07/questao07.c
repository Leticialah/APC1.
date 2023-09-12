/* Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°. */

#include <stdio.h>
#include <math.h>

int main() {

  double distancia = 100.00;
  double angulo = 45.0;
  double radianos = angulo * M_PI / 180.0;
  double seno = sin(radianos);

  double altura = seno * distancia;

  printf("Valor da altura é de %.2f unidades\n", altura);
  
  return 0;
}






