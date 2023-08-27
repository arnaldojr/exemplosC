#include <stdio.h>
#include <stdlib.h>

struct cad
{
    int RM;
    char nome[30];
};

int main()
{
    struct cad aluno; // declara variável do tipo struct cad
    struct cad *p;    // declara ponteiro para struct cad

    p = &aluno;       // p aponta para a endereço de aluno

    printf(" digite RM do aluno: ");
    // lê valor para o campo RM da variavel apontada por p

    char rm_str[10];
    fgets(rm_str, sizeof(rm_str), stdin);
    p->RM = atof(rm_str);
    
    printf(" digite nome do aluno: ");
      // lê valor para o campo nome da variavel apontada por p
    fgets(p->nome,sizeof(p->nome),stdin);
    printf(" O aluno %s tem RM:%d \n", p->nome, p->RM);
}

