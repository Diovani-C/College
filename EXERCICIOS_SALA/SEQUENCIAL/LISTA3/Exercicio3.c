#include <stdlib.h>
#include <stdio.h>

int main()
{
  //  Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos.
  double troco;
  int reais, centavos;

  printf("Separando o troco!\n");

  printf("Informe o valor do troco R$:\n");
  scanf("%lf", &troco);

  reais = troco;

  centavos = (troco - reais) * 100;

  printf("O seu troco sera de %d reais e %d centavos, tenha um bom dia!\n", reais, centavos);

  return 0;
}
