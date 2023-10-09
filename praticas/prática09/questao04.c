/* Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial. */

#include <stdio.h>

int main() {
  char tecla_pressionada = 0;
  printf("Pressione uma tecla: ");
  scanf("%c", &tecla_pressionada);

  if (tecla_pressionada >= 48 && tecla_pressionada <=57) {
    printf("Você pressionou um dígito.\n");
  } else if ((tecla_pressionada >= 65 && tecla_pressionada <=90) || (tecla_pressionada >=97 && tecla_pressionada <=122)) {
    printf("Você pressionou uma letra.\n");
  } else {
    printf("Você pressionou um caracter especial.\n");
  }
    
  

  return 0;
}
  