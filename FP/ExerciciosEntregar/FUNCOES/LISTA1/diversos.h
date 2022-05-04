#include <ctype.h>
#include <stdio.h>

char lerEntreDoisChar(char valor1, char valor2)
{
  char valorLido;
  valor1 = tolower(valor1);
  valor2 = tolower(valor2);
  while (1)
  {
    scanf(" %c", &valorLido);
    valorLido = tolower(valorLido);

    if (valorLido != valor1 && valorLido != valor2)
    {
      printf("Valor informado invalido!\n");
      printf("O valor deve ser %c ou %c : ", valor1, valor2);
      continue;
    }
    break;
  }
  return valorLido;
}

int quadrado(int numero)
{
  return numero * numero;
}

float cmParaPol(int centimetro)
{
  return (float)centimetro * 0.393701;
}

float converterMoedas(float valor, float cotacao, char tipo)
{
  if (tipo == 'd')
  {
    return valor / cotacao;
  }
  else if (tipo == 'r')
  {
    return valor * cotacao;
  }
}

int multiplicacao(int numero1, int numero2)
{
  if (numero1 == 0 || numero2 == 0)
  {
    return 0;
  }
  return numero1 * numero2;
}
