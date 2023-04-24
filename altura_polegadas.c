#include <stdio.h>

int main(){
    float altura, mm, polegadas;
    printf("Qual a sua altura em centimetros? ");
    scanf("%f", &altura);
    mm = altura * 10;
    polegadas = mm / 25;
    printf("A sua altura em polegadas é de %f \n", polegadas);
    return 0;
}