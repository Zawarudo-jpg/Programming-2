#include <stdio.h>

float average(int a, int b, int c, int d, int e)
{
    return (float)(a+b+c+d+e)/5;
}

int main()
{
   int a, b, c, d, e;
   float avg;

   printf("first grade: ");
   scanf("%d", &a);

   printf("second grade: ");
   scanf("%d", &b);

   printf("third grade: ");
   scanf("%d", &c);

   printf("fourth grade: ");
   scanf("%d", &d);

   printf("fifth grade: ");
   scanf("%d", &e);

   avg = average(a, b, c, d, e);

   printf("Average of grades: %.2f", avg);

   return 0;
}
