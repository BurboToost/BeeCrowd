#include<stdio.h>

int main()
{

    int num;
    int hours;
    float salary, per;
    scanf("%d", &num);
    scanf("%d", &hours);
    scanf("%f", &per);
    salary =  hours*per;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}