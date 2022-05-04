#include <stdio.h>
#include <ctype.h>
// 3) Fazer uma função que converte de reais para dólares ou de dólares para reais. Essa função recebe como
// parâmetros: o valor a ser convertido, o valor da cotação, é se é para converter em dólares ou em reais. A função faz a conversão e retorna o valor convertido.
// Sugestão de cabeçalho da função:
// float ConverterModeadas(float Valor, float Cotacao, char Tipo) /*Tipo 'D' ou 'd'
// significa que a conversão é de real para dólar e 'R' ou 'r' significa que a
// conversão é de dólar para real.*/
// Usando essa função:
// a) Ler um determinado valor, o valor da cotação e o tipo de conversão e apresentar o valor obtido.
// b) Ler os valores que representam os limites de um intervalo, o valor da cotação e o tipo de conversão e
// apresentar a tabela de conversão resultante. Por exemplo, se a cotação do dólar for R$ 3,19, apresentar:

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

int trocarPosicao(int *numero1, int *numero2)
{
  int temporario = *numero1;

  *numero1 = *numero2;
  *numero2 = temporario;
}

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

int main()
{
  int limiteInferior, limiteSuperior, i;
  float cotacao, dinheiro;
  char tipo, continuar;

  printf("Milhoes\n");

  while (1)
  {
    printf("Informe o valor a ser convertido: ");
    scanf("%f", &dinheiro);

    printf("Informe o valor da cotacao: ");
    scanf("%f", &cotacao);

    printf("Informe o tipo de conversao (D: real -> dolar || R: dolar -> real): ");
    tipo = lerEntreDoisChar('r', 'd');

    printf("O valor convertido: %1.2f\n", converterMoedas(dinheiro, cotacao, tipo));

    printf("Informe o valor para um limite do intervalo:");
    scanf("%d", &limiteInferior);

    printf("Informe o valor para outro limite do intervalo:");
    scanf("%d", &limiteSuperior);

    printf("Informe o valor da cotacao: ");
    scanf("%f", &cotacao);

    printf("Informe o tipo de conversao (D: real -> dolar || R: dolar -> real): ");
    tipo = lerEntreDoisChar('r', 'd');

    if (limiteInferior > limiteSuperior)
    {
      trocarPosicao(&limiteInferior, &limiteSuperior);
    }

    printf("DOLARES   REAIS\n");

    for (i = limiteInferior; i <= limiteSuperior; i++)
    {
      if (tipo == 'r')
      {
        printf("%2d         %1.2f\n", i, converterMoedas(i, cotacao, tipo));
      }
      else if (tipo == 'd')
      {
        printf("%1.2f      %2d\n", converterMoedas(i, cotacao, tipo), i);
      }
    }

    printf("Deseja continuar? [S/N]: ");
    continuar = lerEntreDoisChar('s', 'n');

    if(continuar == 'n'){
      break;
    }

  }

  return 0;
}
