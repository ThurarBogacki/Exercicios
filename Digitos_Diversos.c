//A questão 1 vai imprimir ("25 5") //
// gcc nomearquivo.c -o nome.exe
// nome.exe
#include <stdio.h>
#include <stdbool.h>


// Função da atividade nmro 2
int maior(void){
    int n1, n2;
    scanf("%i", &n1);
    scanf("%i", &n2);
    if(n1 > n2){
        printf("O maior numero e %i",n1);
    }if(n1 < n2){
        printf("O maior numero e %i",n2);
    }
}

// Função da atividade nmro 3
int menor(void){
    int n1, n2;
    scanf("%i", &n1);
    scanf("%i", &n2);
    if(n1 > n2){
        printf("O menor numero e %i",n2);
    }if(n1 < n2){
        printf("O menor numero e %i",n1);
    }
}

// Função da atividade nmro 6
int maiord3(void){
    int n1, n2, n3;
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    if(n1 > n2 && n1 > n3){
        printf("O maior numero e %i",n1);
    }if(n2 > n1 && n2 > n3){
        printf("O maior numero e %i",n2);
    }if( n3 > n2 && n3 > n1){
        printf("O maior numero e %i",n3);
    }
}

// Função da atividade nmro 7
int intermediario(void){
    int n1, n2, n3;
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    if(n1 > n2 && n1 < n3 || n1 < n2 && n1 > n3){
        printf("O maior intermediario e %i",n1);
    }if(n2 > n1 && n2 < n3 || n2 < n1 && n2 > n3){
        printf("O intermediario e %i",n2);
    }if( n3 > n2 && n3 < n1 || n3 < n2 && n3 > n1){
        printf("O intermediario e %i",n3);
    }
}

// Função da atividade nmro 8
int imprime(void){
    int nmro = 10;
    int print = 0;
    while(print <= nmro){
        printf("%i \n",print);
        ++print;
    }
}

// Função da atividade nmro 9
int imprimepares(void){
    int nmro1, nmro2, ghost, aux;
    printf("Digite um numero ");
    scanf("%d", &nmro1);
    printf("Digite outro numero ");
    scanf("%d", &nmro2);
    if(nmro1 < nmro2){
        aux = nmro1;
        nmro1 = nmro2;
        nmro2 = aux;
    }
    ghost = nmro1 - 2;
    if(nmro2 % 2 == 1){
            nmro2 = nmro2 + 1;
            printf("%i \n", nmro2);
    }if(nmro2 % 2 == 0){
        while(nmro1 > nmro2 && nmro2 < ghost){
            nmro2 += 2;
            printf("%i \n", nmro2);
        }
    }
}

float medianmro(void){
    float n1, cont=0;
    float res, aux=0;
    n1 = 1;
    while (n1 > 0){
        scanf("%f", &n1);
        aux += n1;
        cont ++;
    }if(n1 < 0){
        printf("Deu erro");
    }else{
        res = aux / (cont - 1);
        printf("%f", res);
    }
    
    
}


int main(){
    imprimepares();
}

// nmro 4, vai imprimir o valor de 6, ou um erro
// nmro 5, não
