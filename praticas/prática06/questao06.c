/* Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). */

#include <stdio.h>
#include <math.h>

int main() {

  double a = 2.0f;
  double b = 1.0f;
  double c = -3.0f;
  double delta = pow(b, 2) - 4 * a * c;

    double raiz1 = (-b+sqrt(delta)) / 2* a;
    double raiz2 = (-b-sqrt(delta)) / 2 * a;

    printf("As raízes da equação são %lf e %lf\n", a, b, c, raiz1, raiz2);


  return 0;

}
  