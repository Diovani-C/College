#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa unidade, dezena e centena e mostrar.
  double numero, decimal;
  int inteiro, decimal3digito, centena, dezena, unidade;

  printf("Separando um double em seus componentes!\n");

  printf("Informe um numero double:\n");
  scanf("%lf", &numero);

  inteiro = numero;

  decimal = numero - inteiro;

  decimal3digito = decimal * 1000;

  unidade = inteiro % 10;

  dezena = (inteiro % 100 - unidade) / 10;

  centena = (inteiro % 1000 - unidade - dezena * 10) / 100;

  printf("Numero: %f\n", numero);
  printf("Parte inteira: %d\n", inteiro);
  printf("Parte decimal: %f\n", decimal);
  printf("Parte decimal como inteiro de 3 digitos: %d\n", decimal3digito);
  printf("Centena(s): %d\n", centena);
  printf("Dezena(s): %d\n", dezena);
  printf("Unidade(s): %d\n", unidade);

  return 0;
}
