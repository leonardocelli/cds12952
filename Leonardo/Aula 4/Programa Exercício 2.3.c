#include <stdio.h>

int main ()
{
  int i;
  int n;
  int soma = 0;
  int produto = 1;

  printf ("Digite um número inteiro: ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
      soma += i;
      produto *= i;
    }

  printf ("\nSoma = %d", soma);
  printf ("\nProduto = %d\n", produto);
}