#include <stdio.h>
int main(){
    char nome[20], telefone[12];
    int idade;
    printf("Digite um nome: ");
    scanf("%s", &nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe um número de telefone: ");
    scanf("%s", &telefone);
    printf("Nome: %s, idade: %d, telefone: %s", nome, idade, telefone);
    
}