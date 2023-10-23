/* Faça um programa em c que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura2). */

#include <stdio.h>

int main() {
  float peso = 0.f;
  float altura = 0.f;


  printf("Entre com o peso (kg): ");
  int leu_certo = scanf("%f", &peso);
  
  while(peso < 1) {
  getchar();
    printf("Erro ao ler o número. Tente novamente: ");
    leu_certo = scanf("%f", &peso);

  }

  printf("Entre com a altura (m): ");
  leu_certo = scanf("%f", &altura);

  while(altura <= 0) {
    getchar();
    printf("Erro ao ler o número. Tente novamente: ");
    leu_certo = scanf ("%f", &altura);
  }

  float IMC = peso / (altura * altura);
  printf("O IMC é: %1f\n", IMC);
  
  return 0;
}