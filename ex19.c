#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// cria o tipo de dado struct cadastro
struct cadastro
{
    char nome[30];
    float nota;
};

int main()
{
    int quantidade_alunos = 3;
    struct cadastro aluno[quantidade_alunos]; /*declara variável aluno como vetor de 3 elementos do tipo struct aluno*/
    struct cadastro aluno_maior;              /*declara variável aluno_maior que armazenará as informações do(1)aluno com maior nota */

    float maior, nota;
    int i;

    /* cadastra 3 alunos e suas notas*/
    for (i = 0; i < quantidade_alunos; i++)
    {
        printf("digite nome: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        printf("digite nota: ");
        char nota_str[10];
        fgets(nota_str, sizeof(nota_str), stdin);
        aluno[i].nota = atof(nota_str);
    }

    /* Procura e apresenta o aluno com maior nota*/
    maior = 0;
    for (i = 0; i < quantidade_alunos; i++)
    {
        if (aluno[i].nota > maior)
        {
            maior = aluno[i].nota;
            aluno_maior.nota = maior;
            strcpy(aluno_maior.nome, aluno[i].nome);
        }
    }
    printf("\n***********************************\n");
    printf("\t maior nota do aluno = %s \t nota = %0.1f \n\n", aluno_maior.nome, aluno_maior.nota);
}
