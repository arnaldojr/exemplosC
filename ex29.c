#include <stdio.h>

#define N 10

void leitura(int x[N])
// vetor x é parametro de saida
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf(" digite quantidade vendida do produto %d: ", i);
        scanf("%d", &x[i]);
    }
}

void escreve(int x[N])
// vetor x é parametro de entrada
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("A quantidade vendida nos 2 dias do produto %d: %d\n", i, x[i]);
    }
}

void soma_vetor(int a[N], int b[N], int s[N])
/*vetores a e b são parâmetros de entrada e vetor s é
parâmetro de saída */
{
    int i;
    for (i = 0; i < N; i++)
    {
        s[i] = a[i] + b[i];
    }
}

float media(int x[N])
/*vetor x é parametro de entrada e valor da média calculada
  é retornado pelo comando return */
{
    int i, soma = 0;
    float aux;
    for (i = 0; i < N; i++)
        soma = soma + x[i];
    aux = (float)soma / N;
    return (aux);
}

int main()
{
    int i, venda1[N], venda2[N], total[N];
    float m1, m2;

    printf("Digite quantidades vendidas no primeiro dia\n");
    leitura(venda1);

    printf("Digite quantidades vendidas no segundo dia\n");
    leitura(venda2);

    //Calcula a soma de vendas
    soma_vetor(venda1, venda2, total);
    printf("As quantidades vendidas nos 2 dias\n");
    escreve(total);
    m1 = media(venda1);
    printf(" A media de vendas do primeiro dia: %0.1f\n", m1);
    m2 = media(venda2);
    printf(" A media de vendas do segundo dia: %0.1f\n", m2);
}
