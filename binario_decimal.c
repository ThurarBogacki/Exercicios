
#include <stdio.h>

void bin(int v) {
  putchar('0' + v / 128 % 2);
  putchar('0' + v / 64 % 2);
  putchar('0' + v / 32 % 2);
  putchar('0' + v / 16 % 2);
  putchar('0' + v / 8 % 2);
  putchar('0' + v / 4 % 2);
  putchar('0' + v / 2 % 2);
  putchar('0' + v / 1 % 2);
}

void imp_dec(int v) {
  putchar('0' + v / 1000000 % 10);
  putchar('0' + v / 100000 % 10);
  putchar('0' + v / 10000 % 10);
  putchar('0' + v / 1000 % 10);
  putchar('0' + v / 100 % 10);
  putchar('0' + v / 10 % 10);
  putchar('0' + v / 1 % 10);
  putchar(' ');
}


int main() {
  imp_dec(50);
  bin(343);
}