#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Ler um valor que representa o preço de um produto e imprimir esse valor com reajuste de x%. O percentual
  // do reajuste é informado pelo usuário.
  float precoProduto, precoProdutoReajustado, porcentagemReajuste;

  printf("Reajuste do valor de um produto!\n");

  printf("Informe o valor do produto R$:\n");
  scanf("%f", &precoProduto);

  printf("Informe a procentagem do reajuste %%:\n");
  scanf("%f", &porcentagemReajuste);

  precoProdutoReajustado = precoProduto + (precoProduto * (porcentagemReajuste / 100));

  printf("O valor do produto reajustado é R$%1.2f \n", precoProdutoReajustado);

  return 0;
}