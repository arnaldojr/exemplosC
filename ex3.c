#include <stdio.h>

int main()
{
  int x;
  float y;
  char z;
  x=1;
  y= 2.3;
  z='A';
  printf("o valor de x = %d\n", x);

//formato %d para valor inteiro
  printf("valor de y = %f\n", y);

//formato %f para valor float
  printf("%c\n", z);

//formato %c para valor caractere
  y=8.5421;
  printf("x somado a 1 = %d \n e z = %c\n", x+1,z);
  printf("\n%0.2f\n", y); /* %0.2f formata saída para quantidade de dígitos livre para parte inteira e 2 dígitos para parte fracionária */
}
