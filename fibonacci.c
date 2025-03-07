
#include <stdio.h>

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  
  int a = 0, b = 1, c;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}

int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", fibonacci(i));
  }
  return 0;
}
