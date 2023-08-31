#include <stdio.h>

//Peça ao usuário para digitar seu nome e idade e, em seguida, imprima uma 
//mensagem formatada com esses dados
int main(){
    char nome[20], idade[3];
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    printf("Informe sua idade: ");
    scanf("%s", idade);
    printf("Seu nome é %s\n", nome);
    printf("Sua idade é %s\n", idade);
}
