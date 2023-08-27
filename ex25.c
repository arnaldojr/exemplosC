#include <stdio.h>

void exemplo(int n, int *res, float *v)
{
    n++;
    *res = n + *res;
    *v = n * 2.1;
}

int main()
{
    int a = 1, d = 2;
    float m = 0;
    exemplo(a, &d, &m);
    
    printf("a= %d  \t  y = %d\t e m = %.1f\n", a, d, m);
}
