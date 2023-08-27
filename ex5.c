#include <stdio.h>
int main()
{
  int x;
  printf("digite um valor inteiro: ");
  scanf("%d", &x);
  printf("o valor de x = %d\n", x);
}

// o operador & é usado para obter o endereço de memória 
//da variável x para que scanf() possa armazenar o valor digitado pelo usuário nesse endereço
