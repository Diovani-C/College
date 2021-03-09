#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  //   Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
  // a) Quantas vezes foi necessário abastecer o carro. (Use a função ceil() da biblioteca math.h para arredondar o valor para cima)
  // b) Quantos litros foram consumidos para percorrer a distância indicada.
  // c) Quantos litros restaram no tanque após a chegada ao destino.
  // Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio do veículo, calcule e mostre as informações solicitadas.
  float distanciaPercorrida, capacidadeTanque, consumoMedioCombustivel, litrosConsumidos, litrosRestantes;
  int numeroAbastecidas;

  printf("Informacoes de viagem entre duas cidades!\n");

  printf("Informe a distancia percorrida na viagem km:\n");
  scanf("%f", &distanciaPercorrida);

  printf("Informe a capacidade do tanque de combustivel L:\n");
  scanf("%f", &capacidadeTanque);

  printf("Informe o consumo medio de combustivel do carro km/l: \n");
  scanf("%f", &consumoMedioCombustivel);

  litrosConsumidos = distanciaPercorrida / consumoMedioCombustivel;

  numeroAbastecidas = ceil(litrosConsumidos / capacidadeTanque);

  litrosRestantes = (numeroAbastecidas * capacidadeTanque) - litrosConsumidos;

  printf("Foram nescessarios %1.1fL de combustivel, totalizando %d abastecidas, restando %1.1fL de combustivel no tanque.\n", litrosConsumidos, numeroAbastecidas, litrosRestantes);

  return 0;
}