#include<stdio.h>

extern inline double square(int x) {

   return x * x;
}

double add(int x, int  y) {
  return (square(x) + square(y));
}

int main()
{
  int x = 2;
  int y = 3;
  double result;

  result = add(x, y);
  printf("%lf\n", result);

}
