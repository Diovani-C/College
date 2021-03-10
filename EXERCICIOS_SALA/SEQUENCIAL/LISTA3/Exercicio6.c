#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
  // Ler um número inteiro longo (long int) que representa os segundos e convertê-lo para horas, minutos e segundos. Mostrar a quantidade de horas, minutos e segundos obtidos, no seguinte formato: xhoras:yminutos:zsegundos.
  long int segundos;
  int horas, minutos, segundosRestantes;

  printf("Segundos para horas, minutos e segundos!\n");

  printf("Informe o numero de segundos:\n");
  scanf("%li", &segundos);

  segundosRestantes = segundos % 60;

  minutos = segundos / 60;

  horas = minutos / 60;

  minutos %= 60;

  printf("%ld segundos = %d horas, %d minutos e %d segundos\n", segundos, horas, minutos, segundosRestantes);

  return 0;
}
