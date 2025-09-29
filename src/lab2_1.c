#include <stdio.h>

int sum_to_n(int n) { 
  int sum = 0;  
  for(int i = 1; i <=n; ++i)
  {
      sum += i;
  }
  return sum;
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);
  if(n < 1)
  {
    printf("Error, user entered value < 1");
    return 1;
  }
  printf("sum of natural numbers from 1 to n is:%d\n", sum_to_n(n));
  return 0;
}