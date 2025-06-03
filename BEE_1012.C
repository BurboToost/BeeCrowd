#include <stdio.h>

int main() {
    double A, B, C;
    const double PI = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    double triangulo = (A * C) / 2.0;
    double circulo = PI * C * C;
    double trapezio = ((A + B) * C) / 2.0;
    double quadrado = B * B;
    double retangulo = A * B;

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}
