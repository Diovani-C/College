// Dada a estrutura abaixo:

// typedef struct{
//     float real, img, mod;
// }complexo;
// Implemente uma função que receba um ponteiro do tipo complexo e duas variáveis estáticas do tipo float que represente as partes real e imaginária de um número complexo. A partir das varáveis do tipo float, os campos das estrutura devem ser atualizados.

// Em seguida, imprima os campos do "complexo" no seguinte formato: real sinal img i.

// Para a implementação do exercício proposto considere o seguinte protótipo de função e a equação abaixo:

// void atualizar_complexo(complexo *c, int real, int img);
// Módulo de um número complexo:

// z = sqrt(real * real + img * imag);

// Para o cálculo da raiz quadrada, você pode utilizar a função sqrt da biblioteca math.h.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
  float real, img, mod;
} complexo;

void atualizar_complexo(complexo *c, float real, float img);

int main()
{
  float real, img;

  complexo numero_complexo;
  scanf("%f", &real);
  scanf("%f", &img);

  atualizar_complexo(&numero_complexo, real, img);

  printf("%1.1f%+1.1fi\n", numero_complexo.real, numero_complexo.img);
  printf("%1.1f", numero_complexo.mod);

  return 0;
}

void atualizar_complexo(complexo *c, float real, float img)
{
  c->real = real;
  c->img = img;
  c->mod = sqrt(real * real + img * img);
}
