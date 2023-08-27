#include <stdio.h>

#define N 10

/*a e b sao parametros de entrada e s é de saída, mas não há
  diferença para a funçao */
void soma_vetor(int a[N], int b[N], int s[N])
{
    int i;
    for (i = 0; i < N; i++)
        s[i] = a[i] + b[i];
}

int main()
{
    int i, venda1[N], venda2[N], total[N];
    for (i = 0; i < N; i++)
    {
        printf(" Digite a quantidade vendida no 1º dia do produto %d: ", i+1);
        scanf("%d", &venda1[i]);
    }
    for (i = 0; i < N; i++)
    {
        printf("Digite quantidade vendida 2º dia do produto %d: ", i+1);
        scanf("%d", &venda2[i]);
    }
    // chama a função passando por referencia cada vetores
    soma_vetor(venda1, venda2, total);
    for (i = 0; i < N; i++)
    {
        printf("A quantidade vendida nos 2 dias do produto %d: %d\n", i+1, total[i]);
    }
}
