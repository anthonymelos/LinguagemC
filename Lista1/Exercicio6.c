#include <stdio.h>

// Crie um programa que determine se um ano fornecido pelo usuário é bissexto ou não.

int main(){
    int ano;
    printf("Forneça um ano para verificar se ele é bisexto: ");
    scanf("%d", &ano);

    ano = ano % 4;
    if(ano == 0){
        printf("O ano é bisexto!\n");
        printf("Fim da execução do programa!\n");
    }
    else{
        printf("O ano não é bisexto!\n");
        printf("Fim da execução do programa!\n");
    }
}
