#include <stdio.h>
#include <string.h>

struct rotulo
{
    int x;
    float y;
    char n[20];
};

int main()
{
    struct rotulo qlq = {1, 2.3, "Primeiro teste"}; // declara uma variável struct e atribui valores iniciais

    printf(" x= %d \t y= %f \t n= %s \n", qlq.x, qlq.y, qlq.n);
    
    // alterando os valores da struct qlq
    qlq.x = 0;
    qlq.y = 87.265;
    //qlq.n = "Segundo teste"; // isso não funciona em C, vamos usar a função strpy da lib string.h para ajudar.
   strcpy(qlq.n, "Segundo teste");  //  copia o conteúdo de uma string para outra. strcpy(destino, origem);
    
    printf(" x= %d \t y= %f \t n= %s \n", qlq.x, qlq.y, qlq.n);
}
