// Luciano Capitão América tem um quadro no seu programa "Geradeira do Capitão América" onde é passada uma sequência de caracteres (string) que representa um alfabeto e uma sequência de números inteiros, sendo cada número a posição de um determinado caractere. O participante deve decifrar a mensagem utilizando o alfabeto e a sequência de números inteiros.

// Exemplo de alfabeto: oabeucis,-gfk Mensagem codificada: 1 7 9 10 4 5 10 8 1 5 10 1 10 11 1 13 5 Mensagem decodificada: oi,-eu-sou-o-goku

// Para ajudar os participantes desse quadro no programa, implemente uma função que receba uma string (alfabeto) e um vetor de números inteiros (mensagem codificada) alocado dinamicamente. A função deverá retornar uma string resultante da decodificação da mensagem utilizando o alfabeto.

// Input Format

// Na primeira linha deve ser lida uma string Na segunda linha, enquanto -1 não for lido, deve ser lido um número inteiro.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *decifrador(char alfabeto[], int *msg_cod);

int main()
{
  int *msg_cod = malloc(sizeof(int));
  char alfabeto[256];

  fgets(alfabeto, sizeof(alfabeto), stdin);

  int i = 0;
  while (1)
  {
    scanf("%d", &msg_cod[i]);
    if (msg_cod[i] == -1)
    {
      break;
    }
    i++;
    msg_cod = realloc(msg_cod, sizeof(int) * (i + 1));
  }

  char *resultado = decifrador(alfabeto, msg_cod);

  printf("%s", resultado);

  return 0;
}

char *decifrador(char alfabeto[], int *msg_cod)
{
  int i = 0;
  char *msg_decifrada = malloc(sizeof(char));
  while (1)
  {
    if (msg_cod[i] == -1)
    {
      break;
    }

    msg_decifrada[i] = alfabeto[msg_cod[i] - 1];

    i++;
    msg_decifrada = realloc(msg_decifrada, sizeof(char) * (i + 1));
  }

  return msg_decifrada;
}
