#include <stdio.h>
#include <locale.h>

float sum(float a ,float b ) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float div(float a, float b) {
    if (b == 0) {
        printf("DELENIE NEVOZMOJNO PIDOR! ");
        return 0;
    }
    return a / b;
}
float mul(float a, float b) {
    return a * b;
}

int main() {
    setlocale(LC_ALL, "rus");
    float a, b;
    printf("VVedite:");
    scanf("%f %f", &a, &b);
    printf("Summa: %.2f\n", sum(a, b));
    printf("raznost: %.2f\n", sub(a, b));
    printf(" delenie: %.2f\n", div(a, b));
    printf("multiplication: %.2f\n", mul(a, b));


}
