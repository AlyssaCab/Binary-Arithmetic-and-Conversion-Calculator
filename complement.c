#define MAX 8 // Byte = 8 bits
#include "logic.h"

void func_1s_comp(int a[], int result[]) { func_not(a, result); }
void func_2s_comp(int a[], int result[]) {
  int twosComp[MAX];
  func_1s_comp(a, result);
  int carry = 1;
  for (int i = MAX - 1; i >= 0; i--) {
    if (result[i] == 0 && carry == 1) {
      twosComp[i] = 1;
      carry = 0;
    } else if (result[i] == 1 && carry == 1) {
      twosComp[i] = 0;
    } else {
      twosComp[i] = result[i];
    }
  }
  for (int i = 0; i < MAX; i = i + 1) {
    result[i] = twosComp[i];
  }
}
void func_2s_comp_star(int a[], int result[]) {
  int temp;
  int spot;
  for (int counter = 8; 8 > 0; counter = counter - 1) {
    if (a[counter] == 1) {
      spot = 1;
      temp = counter;
      break;
    } else {
    }
  }
  if (spot == 1) {
    for (int counter = 0; counter < temp; counter = counter + 1) {
      result[counter] = !a[counter];
    }
    for (int counter = temp; counter < MAX; counter = counter + 1) {
      result[counter] = a[counter];
    }
  } else {
  }
}