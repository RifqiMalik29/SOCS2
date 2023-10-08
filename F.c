#include <stdio.h>

int main() {
    double valueOne, valueTwo, valueThree;
    scanf("%lf %lf %lf", &valueOne, &valueTwo, &valueThree);

    double result = ((valueOne * 20) / 100) + ((valueTwo * 30) / 100) + ((valueThree * 50) / 100);
    printf("%.2lf\n", result);

    return 0;
}