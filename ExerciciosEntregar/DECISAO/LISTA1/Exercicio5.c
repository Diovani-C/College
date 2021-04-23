#include <stdlib.h>
#include <stdio.h>

int main()
{
  //    Elaborar um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
  // Menor de 5 anos = “Não categorizado como atleta”
  // 5 a 7 anos = “Infantil A”
  // 8 a 10 anos = “Infantil B”
  // 11 a 13 anos = “Juvenil A”
  // 14 a 17 anos = “Juvenil B”
  // Maior de 17 anos = “Sênior”
  // Se o valor informado é negativo, informar ao usuário que o valor é inválido para o escopo da solução.
  int idade, categoria;
  const char *categorias[6];

  categorias[0] = "Nao categorizado como atleta";
  categorias[1] = "Infantil A";
  categorias[2] = "Infantil B";
  categorias[3] = "Juvenil A";
  categorias[4] = "Juvenil B";
  categorias[5] = "Senior";

  printf("Bem vindo/a ao clube de natacao FREE!\n");

  printf("Porfavor informe a idade do/a atleta:\n");
  scanf("%d", &idade);

  if (idade < 0)
  {
    printf("Valor informado esta invalido!\n");
  }
  else
  {
    categoria = 0;
    categoria += idade >= 5;
    categoria += idade >= 6;
    categoria += idade >= 11;
    categoria += idade >= 14;
    categoria += idade > 17;

    printf("A categoria do atleta e: %s\n", categorias[categoria]);
  }

  return 0;
}
