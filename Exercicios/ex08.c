// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main(){
    float ganhosHora, horasTrabalhadasNoMes;
    printf("Digite quando vc ganha por hora: ");
    scanf("%f", &ganhosHora);
    printf("Digite quantas horas voce trabalhou: ");
    scanf("%f", &horasTrabalhadasNoMes);

    printf("Voce ganhou esse mes R$ %.2f", ganhosHora * horasTrabalhadasNoMes);
}