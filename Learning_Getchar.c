#include <stdio.h>
#include <stdbool.h>

void imp_dec(int v) {
  putchar('0' + v / 100 % 10);
  putchar('0' + v / 10 % 10);
  putchar('0' + v / 1 % 10);
  putchar(' ');
}

int le_int(void){
  int g1,g2,g3,s;
  g1 = (getchar() - '0')*100;
  g2 = (getchar() - '0')*10;
  g3 = getchar() - '0';
  s = g1+g2+g3;
  return s;
}


int main(){
    int a;
    a = le_int();
    imp_dec(a);
}

    
