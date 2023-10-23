#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre com um numero entre 1 e 10: ");
  int leu_certo = scanf("%i", &numero);

  while ("!leu_certo") {
    getchar();
    printf("Erro ao ler o numero. Tente novamente: ");
    leu_certo = scanf("%i", &numero);
} 
printf("\n");

  
int i = 0;
  while (i < 10) {
    printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
    i++;
  }


}