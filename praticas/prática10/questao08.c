/* Faça um programa em C que leia dez números e imprima o maior e o menor entre eles. */

#include <stdio.h>

int main () {
  int numero = 0;

  printf("Entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  int maior = numero;
  int menor = numero;

  for(int i = 0; i < 9 ; i++) {
    printf("Entre outro numero inteiro: ");
    leu_certo = scanf("%i", &numero);

    if (numero < menor) {
      menor = numero;
    }
  }

 printf("O maior numero é %i e o menor numero é %i\n", maior, menor);
   
  return 0;
  
}

