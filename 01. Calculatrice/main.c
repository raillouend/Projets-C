#include <stdio.h>

int main(void) {
    float number1;
    float number2;
    char operation;
    float result;

    printf("Entrez le calcul souhaite :");
    scanf("%f %c %f", &number1, &operation, &number2);

    if (operation == '+') {
        result = number1 + number2;
    } else if (operation == '-') {
        result = number1 - number2;
    } else if (operation == '*') {
        result = number1 * number2; 
    } else if (operation == '/') {
        result = number1 / number2;
    }
    

    printf("%.2f %c %.2f = %.2f\n", number1, operation, number2, result);

    return 0;
}