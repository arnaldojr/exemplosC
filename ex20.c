#include <stdio.h>

int main()
{
    int x = 3; // declaro x como int e atibuo o valor 3

    int *ptr; //declaro ptr como ponteiro int
   
    ptr = &x; //lê-se: "ptr aponta para o endereço de x"

    printf(" x=%d ptr=%d conteudo do que ptr aponta %d \n", x, ptr, *ptr);
   
    // variável apontada por ptr recebe 7
    *ptr = 7;
    printf(" x=%d ptr=%d conteudo do que ptr aponta %d \n", x, ptr, *ptr);
}
