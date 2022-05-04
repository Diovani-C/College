#include <stdlib.h>
#include <stdio.h>

int main()
{
  //  Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo consorciado e o saldo devedor.
  int totalPrestacoes, prestacoesPagas;
  float valorFixoPrestacao, valorPago, saldo;

  printf("Calculando o valor de um consorcio!\n");

  printf("Informe o numero total de prestacoes:\n");
  scanf("%d", &totalPrestacoes);

  printf("Informe o numero de prestacoes pagas:\n");
  scanf("%d", &prestacoesPagas);

  printf("Informe o valor fixo da prestacao R$: \n");
  scanf("%f", &valorFixoPrestacao);

  valorPago = valorFixoPrestacao * prestacoesPagas;

  saldo = valorFixoPrestacao * totalPrestacoes - valorPago;

  printf("Valor total ja pago R$%1.2f\n", valorPago);

  printf("Saldo devedor: R$%1.2f\n", saldo);

  return 0;
}
