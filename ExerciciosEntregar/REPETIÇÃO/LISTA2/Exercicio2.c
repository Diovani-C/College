#include <stdio.h>

//  Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada produto. Calcular o valor total da compra. Informar esse valor para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco e informa-o ao usuário em notas de 10, 5, 1 e os centavos.
// Prosseguir a leitura enquanto a quantidade for maior que zero. Se informado zero ou valor negativo para a quantidade, não ler o valor unitário.

int main()
{
  int quantidadeProd, nota10, nota5, nota1;
  float valorProd, total = 0, pagoCliente, troco, centavos;

  printf("Caixa automatico!\n");

  while (1)
  {

    printf("Infome a quantidade unitaria do produto:");
    scanf("%d", &quantidadeProd);

    if (quantidadeProd <= 0)
    {
      break;
    }

    printf("Informe o valor unitario do produto R$:");
    scanf("%f", &valorProd);

    total += quantidadeProd * valorProd;
  }

  printf("Total R$%1.2f\n", total);

  do
  {
    printf("Informe o valor pago pelo cliente R$:");
    scanf("%f", &pagoCliente);

    if (pagoCliente < total)
    {
      printf("O valor informado e menor que o total da compra!\n");
    }

  } while (pagoCliente < total);

  troco = pagoCliente - total;

  nota10 = troco / 10;
  nota5 = (troco - (nota10 * 10)) / 5;
  nota1 = (troco - (nota10 * 10 + nota5 * 5)) / 1;
  centavos = troco - (int)troco;

  printf("Troco R$: %1.2f\n", troco);
  printf("Troco sera devolvido com:\n");

  printf("%d"
         "nota(s) de 10 reais.\n",
         nota10);
  printf("%d"
         "nota(s) de 5 reais.\n",
         nota5);
  printf("%d"
         "nota(s) de 1 real.\n",
         nota1);
  printf("e %1.2f centavos\n", centavos);

  return 0;
}
