#include <stdio.h>
#include <string.h>

// Questão 1 (3,3 pontos) – Implemente e teste uma função que leia uma string e imprima as palavras em ordem inversa à lida. Considere que cada palavra pode ser separada por uma quantidade qualquer de espaços.
// Exemplo (traços representam espaços):
// Texto lido: Eu--gosto-de---programar
// Saída do programa: programar---de-gosto--Eu

void revertePalavra(char *s);

int main()
{
  char frase[256];

  printf("Informe uma frase: ");
  fgets(frase, 256, stdin);
  printf("%s\n", frase);

  // remove a quebra de linha
  int tamanho = strlen(frase);
  if (frase[tamanho - 1] == '\n')
    frase[tamanho - 1] = 0;

  char *temp = frase;
  revertePalavra(frase);
  printf("%s\n", frase);
  return 0;

  return 0;
}

void reverte(char *inicio, char *fim)
{
  // variavel temporaria
  char temp;

  // inverte a ordem do inicio ao fim
  while (inicio < fim)
  {
    temp = *inicio;
    *inicio++ = *fim;
    *fim-- = temp;
  }
}

// Funcao para reverter palavras
void revertePalavra(char *s)
{
  char *palavraComeca = s;

  // Limite da palavra
  char *temp = s;

  // Revertendo as palavras individuais
  while (*temp)
  {
    temp++;
    if (*temp == '\0')
    {
      reverte(palavraComeca, temp - 1);
    }
    else if (*temp == ' ')
    {
      reverte(palavraComeca, temp - 1);
      palavraComeca = temp + 1;
    }
  }

  // Inverte toda a string
  reverte(s, temp - 1);
}