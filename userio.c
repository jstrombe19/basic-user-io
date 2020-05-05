#include <stdio.h>

int main()
{
  char str[100];
  int i;
  double x;

  printf("Enter values in the following order: integer, string, double:: ");

  scanf("%d %s %lf", &i, str, &x);

  printf("\n You entered: %d::::::%s::::::%lf\n", i, str, x);
}