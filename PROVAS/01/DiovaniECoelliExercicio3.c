#include <stdio.h>
#include <math.h>

// Ler dois números positivos que representam os limites inferior e superior de um intervalo. Nesse intervalo, apresentar os valores que são quadrados perfeitos. Um número é quadrado perfeito se possui como raiz quadrada um valor inteiro. Fazer a média das raízes dos quadrados perfeitos do intervalo. A função para obter a raiz quadrada é sqrt() e está em na biblioteca math.h.

int main()
{
  int limiteInferior, limiteSuperior, i, contadorMedia = 0;
  float quadrado, resto, mediaRaiz = 0;

  printf("Mostrando quadrados perfeitos em um intervalo\n");

  // loop infinito
  while (1)
  {
    printf("Informe o limite inferior:");
    scanf("%d", &limiteInferior);

    printf("Informe o limite superior:");
    scanf("%d", &limiteSuperior);

    // verificando se os limite sao positivos e se o inferio e menor que o superior
    if (limiteSuperior < 0 || limiteInferior < 0)
    {
      printf("Ambos os limites precisam ser positivo!\n");
    }
    else if (limiteInferior > limiteSuperior)
    {
      printf("O limite superior tem que ser maior que o inferior!\n");
    }
    else
    {
      break;
    }
  }

// obtendo o quandrado do limtie superior
  limiteSuperior *= limiteSuperior;

  for (i = limiteInferior; i <= limiteSuperior; i++)
  {
    // inicializa a variavel resto com 0 todo loop
    resto = 0;

    // verifica se o quadrado do numero atual e perfeito
    quadrado = sqrt((double)i);
    resto = quadrado - (int)quadrado;

    // se a raiz for um numero inteiro imprime o numero na tela
    if (resto == 0)
    {
      printf("%d (raiz %1.0f)\n", i, quadrado);

      // soma a media das raizes
      mediaRaiz += quadrado;
      contadorMedia += 1;
    }
  }

  // divide a soma da media pela quantidade i items
  mediaRaiz /= contadorMedia;

  printf("A media das raizes dos quadrados perfeitos eh %1.2f\n", mediaRaiz);

  return 0;
}
