// Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>
int main(){
    float lado;
    printf("Digite um lado do quadrado: ");
    scanf("%f", &lado);
    printf("O valor do quadrado e : %.2f", lado * lado);
    
}