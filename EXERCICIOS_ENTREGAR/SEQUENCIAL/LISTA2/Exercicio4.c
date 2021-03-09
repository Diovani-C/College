#include <stdlib.h>
#include <stdio.h>

int main() {
//   Escreva um programa que, dados a quantidade de litros de combustível utilizada, os quilômetros
// percorridos por um automóvel e o valor do litro de combustível, calcule quantos quilômetros o veículo
// percorreu por litro de combustível e o valor gasto em reais por km.
  float valorCombustivel, quilometroPorLitro, gastoPorQuilometro, litrosGastos, quilometrosPercorridos;

  printf("Progama para calcular quilometro por litro e valor gasto por quilometro!\n");

  printf("Informe os quilometros percorridos km:\n");
  scanf("%d", &quilometrosPercorridos);

  printf("Informe a quantidade de combustivel gasta L:\n");
  scanf("%d", &litrosGastos);

  printf("Informe o valor do combustivel R$:\n");
  scanf("%f", &valorCombustivel);

  quilometroPorLitro = quilometrosPercorridos / litrosGastos;

  gastoPorQuilometro = valorCombustivel / quilometroPorLitro;

  printf("O automovel fez %1.2fkm por litro\n", quilometroPorLitro);
  printf("O valor pago por quilometro é de R$%1.2f\n", gastoPorQuilometro);

  return 0;
}