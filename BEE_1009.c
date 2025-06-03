#include <stdio.h>

int main()
{
    char name;
    double salary, sales,final;

    scanf("%s\n", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);
    final = salary+(sales*0.15);
    printf("TOTAL = R$ %.2lf\n", final);
    return 0;
}