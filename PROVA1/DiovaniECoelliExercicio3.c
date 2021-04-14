#include <stdio.h>
#include <math.h>

// Ler dois números positivos que representam os limites inferior e superior de um intervalo. Nesse intervalo, apresentar os valores que são quadrados perfeitos. Um número é quadrado perfeito se possui como raiz quadrada um valor inteiro. Fazer a média das raízes dos quadrados perfeitos do intervalo. A função para obter a raiz quadrada é sqrt() e está em na biblioteca math.h.

int main()
{
  int limiteInferior, limiteSuperior, i;
  float quadrado, resto, mediaRaiz;

  // loop infinito
  while (1)
  {
    printf("Informe o limite inferior:");
    scanf("%d", &limiteInferior);

    printf("Informe o limite superior:");
    scanf("%d", &limiteSuperior);

    // verificando se os limite sao positivos e se o inferio e menor que o superior
    if (limiteSuperior <= 0 || limiteInferior <= 0)
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

  for(i = limiteInferior; i <= limiteSuperior; i++){
    // inicializa a variavel resto com 0 todo loop
    resto = 0;

    // verifica se o quadrado do numero atual e perfeito
    quadrado = sqrt((double)i);

    resto = quadrado - (int)quadrado;

    if ( resto == 0){
      printf("%1.0f (raiz %d)\n", quadrado, i);
    }
      

  }

  return 0;
}
