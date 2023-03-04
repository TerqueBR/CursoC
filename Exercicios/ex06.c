// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>
#define pi 3.14

main()
{
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = raio * pi;
    printf("a area do seu circulo é : %.2f", area);

}
