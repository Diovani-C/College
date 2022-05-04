#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
  //   Suponha que um caixa disponha apenas de cédulas de R$ 100, R$ 10 e R$ 1. Escreva um programa para ler o valor de uma compra e o valor fornecido pelo usuário para pagar essa compra, e calcule o troco.
  // Calcular e mostrar a quantidade de cada tipo de cédula que o caixa deve fornecer como troco. Mostrar também o valor da compra e do troco. Use variáveis do tipo int.
  int compra, valorFornecido, cedula1, cedula10, cedula100, troco;

  printf("Estamos aqui para fascilitar o seu troco!\n");

  printf("Informe o valor da compra R$:\n");
  scanf("%d", &compra);

  printf("Informe o valor fornecido pelo cliente R$:\n");
  scanf("%d", &valorFornecido);

  troco = valorFornecido - compra;

  cedula100 = troco / 100;

  cedula10 = (troco % 100) / 10;

  cedula1 = troco - cedula100 * 100 - cedula10 * 10;

  printf("O seu troco sera de %d\n", troco);

  printf("As cedulas a serem devolvidas: %d x 100R$; %d x 10R$; %d x 1R$\n", cedula100, cedula10, cedula1);

  printf("CPF na nota?\n");

  return 0;
}
