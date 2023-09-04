#include <stdio.h>

int main() {

  // + - x / => + - * /

  int soma = 10 + 2;
  int diferenca = soma - 2;
  int multiplicacao = 10 * soma;
  float divisao = (int) soma / 2;
  int resto = soma % 2;

  printf("soma = %i\n", soma);
  printf("soma = %i\n", soma++); // soma = soma + 1;
  printf("soma = %i\n", soma); 
  printf("soma _ %i\n", ++soma); // soma = soma + 1;

  soma--; // soma = soma -1;
  --soma;

duplo = 270.987654;
    flutuante = (float)duplo;  // conversão explícita
    inteiro = (int)flutuante;  // conversão explícita
    caractere = (char)inteiro; // conversão explícita

  printf("Conversão explícita\n");
    printf("o double %f convertido em float é %f\n", duplo, flutuante);
    printf("o float %f convertido em int é %d\n", flutuante, inteiro);
    printf("o int %d convertido em char é %d\n", inteiro, caractere);


  return 0;
}