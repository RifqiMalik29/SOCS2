#include <stdio.h>

int main() {
    double numberOne, numberTwo;
    scanf("%lf %lf", &numberOne, &numberTwo);

    double subctraction = numberOne - numberTwo;
    double result = (subctraction / numberOne) * 100;
    printf("%.2lf%%\n", result);

    return 0;
}