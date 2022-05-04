#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Escreva um programa para ler o número de votos brancos, nulos (incluem eleitores ausentes) e válidos de uma eleição. Calcular e mostrar o percentual que cada um (brancos, nulos e válidos) representa em relação ao total de eleitores. Lembrar que os valores dos percentuais podem não ser inteiros
  int votosValidos, votosNulos, votosBrancos;
  float totalVotos, percentualValido, percentualNulo, percentualBranco;

  printf("Calcular a porcentagem de votos branco, nulos e validos\n");

  printf("Informe a quantia de votos validos:\n");
  scanf("%d", &votosValidos);

  printf("Informe a quantia de votos brancos:\n");
  scanf("%d", &votosBrancos);

  printf("Informe a quantia de votos nulos:\n");
  scanf("%d", &votosNulos);

  totalVotos = votosBrancos + votosNulos + votosValidos;

  percentualValido = (votosValidos / totalVotos) * 100;

  percentualNulo = (votosNulos / totalVotos) * 100;

  percentualBranco = (votosBrancos / totalVotos) * 100;

  printf("Percentagem de votos validos: %1.1f%%\n", percentualValido);

  printf("Percentagem de votos brancos: %1.1f%%\n", percentualBranco);

  printf("Percentagem de votos nulos: %1.1f%%\n", percentualNulo);

  return 0;
}