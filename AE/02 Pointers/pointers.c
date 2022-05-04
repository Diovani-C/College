// Implemente uma função que receba três ponteiros de int (a, b, c). Na função, o endereço apontado c deve conter a diferença entre a e b (módulo da subtração entre a e b, ou seja, |a - b|). Após, o endereço apontado a deve receber o resultado da soma entre o seu valor e o do ponteiro c. Por fim, o endereço apontado b deve receber o resultado da subtração entre o seu valor e o do ponteiro c.

// &variable == read the pointer of a variable
// *variable == represents the pointer type and converts a pointer to it's value

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int *a, int *b, int *c);

int main()
{
  int a, b, c = 0;
  scanf("%d", &a);
  scanf("%d", &b);

  func(&a, &b, &c);

  printf("A=%d B=%d C=%d", a, b, c);

  return 0;
}

void func(int *a, int *b, int *c)
{
  *c = *a - *b;
  *a += *c;
  *b -= *c;
}
