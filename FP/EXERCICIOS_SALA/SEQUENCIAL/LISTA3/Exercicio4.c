#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Fazer um programa que leia um número inteiro de até três dígitos (considere que será fornecido um número de até 3 dígitos), calcule e imprima a soma dos seus dígitos
  int numeroDeAte3Digitos, primeiroDigitoDoNumeroDeAte3Digitos,segundoDigitoDoNumeroDeAte3Digitos, terceiroDigitoDoNumeroDeAte3Digitos, i, resultadoDaSomaDosDigitosDoNumeroDeAte3Digitos;

  printf("Separando os digitos e somando denovo!\n");

  printf("Informe um nomero de até 3 digitos:\n");
  scanf("%d", &numeroDeAte3Digitos);

  primeiroDigitoDoNumeroDeAte3Digitos = numeroDeAte3Digitos / 100;

  segundoDigitoDoNumeroDeAte3Digitos = numeroDeAte3Digitos / 10 - primeiroDigitoDoNumeroDeAte3Digitos * 10;

  terceiroDigitoDoNumeroDeAte3Digitos = numeroDeAte3Digitos - primeiroDigitoDoNumeroDeAte3Digitos * 100 - segundoDigitoDoNumeroDeAte3Digitos * 10;


  resultadoDaSomaDosDigitosDoNumeroDeAte3Digitos = primeiroDigitoDoNumeroDeAte3Digitos + segundoDigitoDoNumeroDeAte3Digitos + terceiroDigitoDoNumeroDeAte3Digitos;


  printf("%d = %d + %d + %d = %d\n",numeroDeAte3Digitos , primeiroDigitoDoNumeroDeAte3Digitos, segundoDigitoDoNumeroDeAte3Digitos, terceiroDigitoDoNumeroDeAte3Digitos,resultadoDaSomaDosDigitosDoNumeroDeAte3Digitos );

  return 0;
}
