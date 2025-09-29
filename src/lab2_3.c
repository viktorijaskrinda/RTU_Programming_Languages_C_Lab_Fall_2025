#include <stdio.h>

int is_prime(int n) { 
  for(int i = 2; i <= n/2; i++)
  {
    if(n % i == 0)
      return 0;
  }
  return 1;
}

int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);
  if(n < 2)
  {
    printf("Error, user entered value < 2");
    return 1;
  }
  for(int i = 2; i <= n; i++)
  {
    if(is_prime(i))
    {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}