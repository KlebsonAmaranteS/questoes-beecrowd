#include <stdio.h>
#include <stdlib.h>

int main ()
{

  float num, x[100];
  int i;

  for (i = 0; i < 100; i++)
  {
    scanf("%f", &num);
    x[i] = num;

  }

  for (i = 0; i < 100; i++)
  {

    if (x[i] <= 10){

      printf("A[%d] = %.1f\n", i, x[i]);

    }
  }
   return 0;
}