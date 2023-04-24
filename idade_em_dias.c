#include <stdio.h>

int main(){
    int idade, dias;
    printf("Qual a sua idade? ");
    scanf("%i", &idade);
    dias = idade * 365;
    printf(" Voce ja viveu %i dias \n", dias);
    return 0;
}