#include <stdio.h>
#include <math.h>

int main() {
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   int n= abs(a-b);
   int d= (a+b+n)/2;
   int abc = (d + c + abs(d - c)) / 2;
  printf("%d eh o maior\n", abc);

    return 0;
}
