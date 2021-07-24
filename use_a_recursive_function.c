#include<stdio.h>
int rec(int);
int main()
{
  int a,fact;
  printf("This os designed by Krishna\n");
  printf("Enter any number :");
  scanf("%d",&a);
  
  fact=rec(a);
  printf("Factorial value=%d\n",fact);
  return 0;
}
