#include <stdio.h>

long long factorial(int n) 
{
  long long result = 1;
  for(int i = 1; i <= n ;++i)
  {
    result *= i;
  }
  return result; 
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);
  if(n < 0)
  {
    printf("Error, user entered value < 0");
    return 1;
  }
  printf("factorial is : %lld\n", factorial(n));
  return 0;
}