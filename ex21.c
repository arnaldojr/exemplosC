#include <stdio.h>
int main()
{
    float x;
    x = 12.98;
    float *pontx;
    pontx = &x;    // pontx passa a apontar para o endereço de x
    *pontx = 3.14; // conteúdo do que pontx aponta recebe 3.14
    printf(" x=%0.2f pontx=%d conteudo do que pontx aponta %f \n", x, pontx, *pontx);
}
