#include <stdio.h>
#include <math.h>
int square(int s);     // area of square
float circle(float r); // area of circle
int rec(int l, int b); // area of rectangle
int main()
{

   int a;
   printf("enter a");
   scanf("%d", &a);
   square(a);

   float b;
   printf("enter b");
   scanf("%f", &b);
   circle(b);

   int c, d;
   printf("enter c and d");
   scanf("%d %d", &c, &d);
   rec(c, d);
}

int square(int s)
{
   int a;
   a = s * s;
   printf("%d\n", a);
   return a;
}
float circle(float r)
{
   float c;
   float pi = 3.14;
   c = pi * r * r;
   printf("%f\n", c);
   return c;
}

int rec(int l, int b)
{
   int r;
   r = 2 * (l + b);
   printf("%d\n", r);
   return r;
}
