#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Faça um programa para calcular a quantidade de fita necessária, em centímetros, para amarrar um pacote com duas voltas, sendo uma pela largura e outra pelo comprimento do pacote. Serão fornecidas a largura, a altura e o comprimento do pacote. Para amarrar as pontas da fita são necessários 15 cm de fita em cada ponta. A figura a seguir ilustra a maneira como a fita é passada pelo pacote
  int largura, altura, comprimento, fitaNecessaria;

  printf("Amarrando um pacote de presente!\n");

  printf("Informe a largura do pacote cm: \n");
  scanf("%d", &largura);

  printf("Informe a altura do pacote cm: \n");
  scanf("%d", &altura);

  printf("Informe o comprimento do pacote cm: \n");
  scanf("%d", &comprimento);

  fitaNecessaria = 2 * largura + 2 * comprimento + 4 * altura + 15 * 2;

  printf("A fita nescessaria para embalar o presente sera %dcm\n", fitaNecessaria);

  return 0;
}
