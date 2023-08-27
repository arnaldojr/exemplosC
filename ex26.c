#include <stdio.h>

// função para calcular o discriminante da equação do 2º grau
void delta(int a, int b, int c, int *d)
{
    *d = b * b - 4 * a * c;
}

int main()
{
    int x = 0, y = 0, z = 0, d = 0;
    printf("digite 3 coeficientes:");
    scanf("%d%d%d", &x, &y, &z);
    printf("\nANTES da função delta: x= %d \t y=%d \t z=%d \t d=%d", x, y, z, d);
    delta(x, y, z, &d);
    printf("\nDEPOIS da função delta: x= %d \t y=%d \t z=%d \t d=%d", x, y, z, d);
    printf("\ndiscriminante: %d \n", d); // sem utilizar return da função
}
