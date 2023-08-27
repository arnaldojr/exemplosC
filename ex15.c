#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30] = {0}, todos[200] = {0}, copia[30] = {0};  //boas praticas iniciar a variavel
    strcpy(nome, "- ");
    while (strcmp(nome, "fim") != 0)
    {
        strcat(todos, nome);
        // concatena a variável nome à variável todos
        strcpy(copia, nome);
        // copia o conteúdo da variável nome 'a copia
        printf("\n todos = %s ", todos);
        printf("\n copia = %s ", copia);
        printf("\n digite um nome ou fim para encerrar:");
        fflush(stdin);
        scanf("%s", nome);
    }
    printf("\n todos = %s", todos);
    printf("\n comprimento de todos = %zu", strlen(todos));
    printf("\n copia = %s", copia);
    printf("\n comprimento de copia = %zu\n", strlen(copia));


    return 0;
}
