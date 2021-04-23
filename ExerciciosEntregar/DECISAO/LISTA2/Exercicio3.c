#include <stdlib.h>
#include <stdio.h>

int main()
{
  //  A figura a seguir representa uma árvore de decisão para identificar se um paciente está saudável ou doente. Elabore um programa que implementa essa árvore de decisão.
  char bem, dor;
  int temperatura;

  printf("Bem vindo a clinica Arkham Asylum!\n");

  printf("Tudo bem com voce? [s/n]\n");
  scanf(" %c", &bem);

  if (bem == 'n')
  {
    printf("o que voce tem? sente dor? [s/n]\n");
    scanf(" %c", &dor);

    if (dor == 's')
    {
      printf("Voce tem poucos dias de vida, aproveite bem ;D, fica R$600,00\n");
    }
    else if (dor == 'n')
    {
      printf("Me informe a sua temperatura C:\n");
      scanf("%d", &temperatura);

      if (temperatura <= 37)
      {
        printf("Voce vai sobreviver, vai ficar R$400,00!\n");
      }
      else if (temperatura > 37)
      {
        printf("Vou te receitar alguns atibioticos, voce vai ter que ficar em repouso por alguns dias, tudo vai dar de R$900,00\n");
      }
    }
  }
  else if (bem == 's')
  {
    printf("Que bom!, vai ficar R$350,00.\n");
  }

  return 0;
}
