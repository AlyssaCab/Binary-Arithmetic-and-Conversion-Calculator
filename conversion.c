#include <math.h>
#include <stdio.h>
#define MAX 8 // Byte = 8 bits
void to_octal(int a[]) {
  int dec;
  int oct;
  int x = 1;
  for (int i = 0; i < MAX; i++) {
    dec = dec * 2 + a[i];
  }
  while (dec != 0) {
    oct = oct + (dec % 8) * x;
    dec = dec / 8;
    x *= 10;
  }
  printf("%d\n", oct);
}
void to_decimal(int a[]) {
  int dec;
  for (int i = 0; i < MAX; i++) {
    dec = dec * 2 + a[i];
  }
  printf("%d\n", dec);
}
void to_hexadecimal(int a[]) {
  int hex = 0;
  for (int i = 0; i < MAX; i++) {
    hex = hex * 2 + a[i];
  }
  printf("%X\n", hex);
}
