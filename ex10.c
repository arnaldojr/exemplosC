#include <stdio.h>
int main()
{
    double number, soma = 0;

    do
    {
        printf("Insira um número: ");
        scanf("%lf", &number);
        soma += number;
    }
    while(number != 0.0);

    printf("Soma = %.2lf \n",soma);

 //   return 0;
}
