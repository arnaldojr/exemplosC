#include <stdio.h>
//#include <string.h>

#define MAX 32

int main() 
{
  char buf[MAX];
  char f;

  printf("Digite o nome completo: "); 
  fgets(buf, MAX, stdin);

  printf("\n O nome completo: %s\n", buf);
}
