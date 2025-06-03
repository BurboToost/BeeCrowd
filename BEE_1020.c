#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);

    int years = days / 365;
    int months = (days % 365) / 30;
    int remaining_days = (days % 365) % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", remaining_days);

    return 0;
}
