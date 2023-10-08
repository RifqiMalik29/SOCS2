#include <stdio.h>

int main() {
    double numberOne, numberTwo;
    scanf("%lf %lf", &numberOne, &numberTwo);

    double result = (numberTwo / numberOne) * 100;
    printf("%.4f%%\n", result);

    return 0;
}