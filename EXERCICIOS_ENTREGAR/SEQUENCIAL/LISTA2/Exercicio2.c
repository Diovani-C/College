#include <stdlib.h>
#include <stdio.h>

int main() {
//   Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo em dias, horas e minutos (as três últimas em tipo float).
  int segundos;
  float dias, horas, minutos;

  printf("Transforma segundos em dias, horas e minutos!\n");

  printf("Informe a quantidade de segundos:\n");
  scanf("%d", &segundos);

  minutos = segundos / 60.0f;

  horas = minutos / 60.0f;

  dias = horas / 24.0f;

  printf("%d segundos sao %1.1f minutos, ou %1.1f horas, ou %1.1f dias\n", segundos, minutos, horas, dias);

  return 0;
}