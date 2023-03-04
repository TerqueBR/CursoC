// Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>
int main()
{
    float num1, num2, num3, num4, media;
    printf("Digite nota1: ");
    scanf("%f", &num1);
    printf("Digite nota2: ");
    scanf("%f", &num2);
    printf("Digite nota3: ");
    scanf("%f", &num3);
    printf("Digite nota4: ");
    scanf("%f", &num4);
    media = (num1+num2+num3+num4) /4;
    printf("sua media e: %.2f + %.2f + %.2f + %.2f = %.2f",num1,num2,num3,num4,media);

    
    
    
    
    }