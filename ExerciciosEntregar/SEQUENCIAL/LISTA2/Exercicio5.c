#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  // Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária. Sendo informados o número de apartamentos do hotel e o valor da diária por apartamento para o final de semana completo. Elaborar um programa para calcular:
  // a) Valor promocional da diária;
  // b) Valor total caso a ocupação no final de semana atinja 100%;
  // c) Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%;
  // d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
  // Armazene em variáveis apenas o valor da diária, o valor da diária com desconto e a quantidade de quartos
  float valorDiaria, diariaPromocional, valorOcupacao100Promo;
  int quantidadeApartamentos;

  printf("Bem vindo ao hotel Budapest, no que posso ser util?\n");

  printf("Informe o valor da diaria R$:\n");
  scanf("%f", &valorDiaria);

  printf("Informe a quantidade de quartos disponiveis:\n");
  scanf("%d", &quantidadeApartamentos);

  diariaPromocional = valorDiaria - (valorDiaria * 0.25);

  valorOcupacao100Promo = diariaPromocional * quantidadeApartamentos;

  printf("Valor diaria promocional R$%1.2f\n", diariaPromocional);

  printf("Total arrecadado com 100%% de ocupacao: R$%1.2f\n", valorOcupacao100Promo);

  printf("Total arrecadado com 70%% de ocupacao: R$%1.2f\n", diariaPromocional * ceil(quantidadeApartamentos * 0.7));

  printf("Valor deixado de arrecadar ao aplicar o desconto: R$%1.2f\n", fabs(valorOcupacao100Promo - (valorDiaria * quantidadeApartamentos)));

  return 0;
}