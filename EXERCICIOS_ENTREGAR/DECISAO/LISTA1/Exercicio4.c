#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  //   Ler um número double:
  // a) Se o número lido é menor que 100, separar a parte inteira e a parte decimal e mostrá-las separadamente.
  // b) Se o número lido é maior ou igual a 100, obter o resto da divisão desse número por 3 e mostrar o resto
  double numero, decimal, restoPor3;
  int inteiro;

  printf("Maior ou menor que sem?\n");

  printf("Informe um numero double:\n");
  scanf("%lf", &numero);

  if (numero < 100)
  {
    inteiro = numero;
    decimal = numero - inteiro;
    printf("Separando o numero entre inteiro e decimal: %d, %.2f", inteiro, decimal);
  }
  else
  {
    restoPor3 = fmod(numero, 3);
    printf("O resto da divisao de %1.2f por 3 é: %1.2f", numero, restoPor3);
  }
  return 0;
}
