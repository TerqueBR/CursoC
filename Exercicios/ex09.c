// Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
// C = 5 * ((f-32) / 9).

#include <stdio.h>

int main (){
    float f,c;
    printf("Digite o valor da temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = 5 * ((f-32) / 9);
    printf("A temperatura em celcios e: %.1f", c);
}