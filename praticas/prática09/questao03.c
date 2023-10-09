/* Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos. */

#include <stdio.h>

int main() {

  int nota = 0;
  int deu_certo = 0;
  
  printf("Entre com uma nota entre 1 e 5: ");
  deu_certo = scanf("%i", &nota);

  if (deu_certo) {
    if(nota == 1) {
      printf("Sua nota é: Ruim\n");
    } else if (nota == 2) {
      printf("Sua nota é: Insuficiente\n");
    } else if (nota == 3) {
      printf("Sua nota é: Suficiente\n");
    } else if (nota == 4) {
      printf("Sua nota é: Bom\n");
    } else if (nota == 5) {
      printf("Sua nota é: Ótimo\n");
    }
  } else {
  printf("Por favor entre com um numero inteiro. Tente novamente!\n");
}
   
  return 0;
}