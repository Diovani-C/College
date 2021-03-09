#include <stdlib.h>
#include <stdio.h>

int arredondandoParaCima(float numero) {
  int numerointeiro = numero;
  if((numero - numerointeiro) > 0) {
    numerointeiro += 1;
  };
  return numerointeiro;
}

int main()
{
  //   Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:
  // a) A divisão do primeiro número pelo segundo, armazenando somente a parte inteira do número.
  // b) A soma dos dois números com o resultado arredondado para o próximo número inteiro.
  // Obs.: As variáveis de resultados devem ser do tipo int.
  float numero01, numero02;
  int divisao, soma;

  printf("Mostrando o resultado inteiro da soma e divisao de dois numeros floats!\n");

  printf("Informe o primeiro valor:\n");
  scanf("%f", &numero01);

  printf("Informe o segundo valor:\n");
  scanf("%f", &numero02);

  divisao = numero01 / numero02;

  soma = arredondandoParaCima(numero01 + numero02);

  printf("%f / %f = %d \n", numero01, numero02, divisao);

  printf("%f + %f = %d \n", numero01, numero02, soma);

  return 0;
}