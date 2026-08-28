#include <stdio.h>

void fun(int n)
{
   if (n == 1) {
         printf("5");
      return;
   } else {
      printf("5");
      fun(n - 1);
       
   }
}

int main(void)
{
   int n;

   printf(" Enter no");
   scanf("%d", &n);
   fun(n);

   return 0;
}
