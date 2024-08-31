#include <stdio.h>
int fibo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }  return fibo(n - 1) + fibo(n - 2);}
int main() {
  int n;
  printf("Enter n value\n");
  scanf("%d", &n);
  int m = fibo(n);
  printf("The %dth fibonacci number is %d", n, m);
  return 0;}
