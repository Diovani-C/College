#include <stdlib.h>
#include <stdio.h>

int main()
{
  //Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
  // a) A soma desses valores;
  // b) A subtração do primeiro pelo segundo;
  // c) A multiplicação entre eles;
  // d) A divisão inteira do primeiro pelo segundo;
  // e) A divisão float do primeiro pelo segundo;
  // f) O resto da divisão do primeiro pelo segundo.
  int numero1, numero2;

  printf("Operacoes matematicas basicas entre dois numeros!\n");

  printf("Digite o primeiro valor:\n");
  scanf("%d", &numero1);

  printf("Digite o segundo valor:\n");
  scanf("%d", &numero2);

  printf("%d + %d = %d\n", numero1, numero2, numero1 + numero2);

  printf("%d - %d = %d\n", numero1, numero2, numero1 - numero2);

  printf("%d * %d = %d\n", numero1, numero2, numero1 * numero2);

  printf("%d / %d = %d\n", numero1, numero2, numero1 / numero2);

  printf("%d / %d = %1.2f\n", numero1, numero2, (float)numero1 / numero2);

  printf("%d %% %d = %d\n", numero1, numero2, numero1 % numero2);

  return 0;
}
