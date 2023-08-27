#include <stdio.h>
int main()
{
  int n, m;
  float x,y;
  char letra;
  printf("digite um caractere: ");
  scanf("%c", &letra);

  printf("digite 2 valores inteiros: ");
  scanf("%d%d",&n,&m);

  printf("digite 2 valores reais: ");
  scanf("%f",&x);
  scanf("%f",&y);
  printf("n=%d \t m=%d \t x=%0.1f \t y=%0.1f \n",n,m,x,y);

  printf("O caractere lido foi %c \n",letra);
}
