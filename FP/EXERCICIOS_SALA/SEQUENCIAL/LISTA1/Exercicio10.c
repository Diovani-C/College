#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  // Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as expressões e depois implementar o algoritmo para calcular os resultados.

  int x, y, resultadoInt;
  float resultadoFloat;

  printf("Matemagica!\n");

  printf("Informe o valor de X(int):\n");
  scanf("%d", &x);

  printf("Informe o valor de Y(int):\n");
  scanf("%d", &y);

  resultadoFloat = ((x + y) / (float)y) * pow(x, 2);

  printf("a) %1.2f\n", resultadoFloat);

  resultadoFloat = (x + y) / (float)(x - y);

  printf("b) %1.2f\n", resultadoFloat);

  resultadoFloat = (pow(x, 2) + pow(y, 3)) / 2;

  printf("c) %1.2f\n", resultadoFloat);

  resultadoFloat = pow(x, 3) / pow(x, 2);

  printf("d) %1.2f\n", resultadoFloat);

  resultadoInt = x % y;

  printf("e1) %d\n", resultadoInt);

  resultadoInt = x % 3;

  printf("e2) %d\n", resultadoInt);

  resultadoInt = y % 5;

  printf("e3) %d\n", resultadoInt);

  return 0;
}
