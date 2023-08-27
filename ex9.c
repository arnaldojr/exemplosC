#include<stdio.h>

int main() {
    int resp;
    printf("Digite um número inteiro entre 1 e 3:");
    scanf("%d",&resp);

//    resp = 3; 
    switch (resp){
    case 1:
        printf("Você selecionou a opção %d \n", resp);
        break;
    case 2:
        printf("Você selecionou a opção %d \n", resp);
        break;
    case 3:
        printf("Você selecionou a opção %d \n", resp);
        break;
    default:
        printf("Você selecionou uma opção diferente de 1, 2 ou 3 --> %d \n", resp);
    }
}
