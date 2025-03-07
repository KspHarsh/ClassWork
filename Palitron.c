#include <stdio.h>

int isPalindrome(int n, int rev) {
  if (n == 0) {
    return rev;
  }
  return isPalindrome(n / 10, rev * 10 + n % 10);
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num == isPalindrome(num, 0)) {
    printf("%d is a palindrome.\n", num);
  } else {
    printf("%d is not a palindrome.\n", num);
  }
  return 0;
}