#include <stdio.h>
#include <string.h>

#define N_ALUNOS 4
#define N_CARACTERES 30

int main()
{
    char nome[N_ALUNOS][N_CARACTERES];
    int i;
    for (i = 0; i < N_ALUNOS; i++)
    {
        printf("digite o nome do aluno: ");
        
        fflush(stdin);
        fgets(nome[i], N_CARACTERES, stdin);
    }

    for (i = 0; i < N_ALUNOS; i++)
    {
        printf("aluno %d: %s", i + 1, nome[i]);
    }
}
