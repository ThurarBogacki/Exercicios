#include <stdio.h>

void imprime_asterisco(int n){
    for (int i = 0; i < n; i++){
        printf(" ");
    }
}
void imprime_espaco(int n){
    for (int i = 0; i < n; i++){
        printf("*");
    }
}

void losango(int n){
    int aux, aux2;
    aux = n;
    aux2 = n;
    for (int i = 0; i < n; i++){
        imprime_asterisco(aux);
        imprime_espaco(i);
        imprime_espaco(i);
        imprime_asterisco(aux);
        aux--;
        printf("\n");
    }  

    for (int i = 0; i < n; i++){
        aux2--;
        imprime_asterisco(i+1);
        imprime_espaco(aux2);
        imprime_espaco(aux2);
        imprime_asterisco(i+1);
        printf("\n");
    }
} 

int main(){
    int tam;
    printf("Digite o tamanho do seu losango ");
    scanf("%i", &tam);
    printf("\n \n \n BEM VINDO AO LOSANGO \n \n \n");
    losango(tam);
}