#include <stdio.h>

int main() {
    double tempOne, tempTwo, tempThree, tempFour;
    scanf("%lf", &tempOne);
    scanf("%lf", &tempTwo);
    scanf("%lf", &tempThree);
    scanf("%lf", &tempFour);

    double reamurOne = (tempOne * 4) / 5;
    double fahrenheitOne = ((tempOne * 9)/5) + 32;
    double kelvinOne = tempOne + 273;

    double reamurTwo = (tempTwo * 4) / 5;
    double fahrenheitTwo = ((tempTwo * 9)/5) + 32;
    double kelvinTwo = tempTwo + 273;
    
    double reamurThree = (tempThree * 4) / 5;
    double fahrenheitThree = ((tempThree * 9)/5) + 32;
    double kelvinThree = tempThree + 273;

    double reamurFour = (tempFour * 4) / 5;
    double fahrenheitFour = ((tempFour * 9)/5) + 32;
    double kelvinFour = tempFour + 273;

    printf("%.2lf %.2lf %.2lf\n", reamurTwo, fahrenheitTwo, kelvinTwo);
    printf("%.2lf %.2lf %.2lf\n", reamurThree, fahrenheitThree, kelvinThree);
    printf("%.2lf %.2lf %.2lf\n", reamurFour, fahrenheitFour, kelvinFour);

    return 0;
}