#include <stdio.h>

void imprime_espacos(int n){
    int i = n-1;
    while(i >= 0){
        printf(" ");
        i--;
    }
}

void imprimir_linha(int n){
    for( int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}

void imprime_triangulo(int n){
    int aux = n;
    for( int i = 0; i < n; i++){
        imprime_espacos(aux-1);
        aux--;
        imprimir_linha(i+1);
    }
}

int main(){
    int v;
    printf("Digite o valor da base do triangulo ");
    scanf("%i", &v);
    imprime_triangulo(v);
}