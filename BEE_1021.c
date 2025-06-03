#include <stdio.h>

int main() {
    double amount;
    int notes, coins;

    scanf("%lf", &amount);

    int total = (int)(amount * 100 + 0.5); // Convert to cents

    printf("NOTAS:\n");
    notes = total / 10000; printf("%d nota(s) de R$ 100.00\n", notes); total %= 10000;
    notes = total / 5000;  printf("%d nota(s) de R$ 50.00\n", notes);  total %= 5000;
    notes = total / 2000;  printf("%d nota(s) de R$ 20.00\n", notes);  total %= 2000;
    notes = total / 1000;  printf("%d nota(s) de R$ 10.00\n", notes);  total %= 1000;
    notes = total / 500;   printf("%d nota(s) de R$ 5.00\n", notes);   total %= 500;
    notes = total / 200;   printf("%d nota(s) de R$ 2.00\n", notes);   total %= 200;

    printf("MOEDAS:\n");
    coins = total / 100;   printf("%d moeda(s) de R$ 1.00\n", coins);  total %= 100;
    coins = total / 50;    printf("%d moeda(s) de R$ 0.50\n", coins);  total %= 50;
    coins = total / 25;    printf("%d moeda(s) de R$ 0.25\n", coins);  total %= 25;
    coins = total / 10;    printf("%d moeda(s) de R$ 0.10\n", coins);  total %= 10;
    coins = total / 5;     printf("%d moeda(s) de R$ 0.05\n", coins);  total %= 5;
    coins = total / 1;     printf("%d moeda(s) de R$ 0.01\n", coins);

    return 0;
}
