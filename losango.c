#include <stdio.h>

void imprime_ponto(int n){
    for (int i = 0; i < n; i++){
        printf("*");
    }
}
void imprime_espaco(int n){
    for (int i = 0; i < n; i++){
        printf(" ");
    }
}

void losango(int base){
    for(int i = base; i > 0; i--){
        imprime_ponto(i);
        imprime_espaco(base-i);
        imprime_espaco(base-i);
        imprime_ponto(i);
        printf("\n");
    }
    for(int i = 1; i <= base; i++){
        imprime_ponto(i);
        imprime_espaco(base-i);
        imprime_espaco(base-i);
        imprime_ponto(i);
        printf("\n");
    }
}

int main(){
    int tam;
    printf("Digite um valor para o tamanho do losango ");
    scanf("%i", &tam);
    losango(tam);
}
