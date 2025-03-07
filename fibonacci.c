
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
  
  // Check if input is provided
  if (scanf("%d", &n) != 1) {
    // If no input or invalid input, use a default value
    n = 10;
    printf("No valid input received. Using default value of %d\n", n);
  }
  
  printf("Fibonacci Series: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return 0;
}
