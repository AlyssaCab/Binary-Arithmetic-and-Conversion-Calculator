#define MAX 8 // Byte = 8 bits

void func_and(int a[], int b[], int result[]) {
  for (int i = 0; i < MAX; i = i + 1) {
    result[i] = a[i] & b[i];
  }
}
void func_or(int a[], int b[], int result[]) {
  for (int i = 0; i < MAX; i = i + 1) {
    result[i] = a[i] | b[i];
  }
}
void func_not(int a[], int result[]) {
  for (int i = 0; i < MAX; i = i + 1) {
    result[i] = !a[i];
  }
}