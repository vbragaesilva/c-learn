#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double n1;
    double n2;
    int op;
    char symbol;
    double res = 0;
    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter second number: ");
    scanf("%lf", &n2);
    printf("Choose an operation:\n");
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");
    printf("[5] Power\n");
    printf("Enter operation: ");
    scanf("%i", &op);
    if(op == 1){
        res = n1 + n2;
        symbol = '+';
    }
    if(op == 2){
        res = n1 - n2;
        symbol = '-';
    }
    if(op == 3){
        res = n1 * n2;
        symbol = '*';
    }
    if(op == 4){
        res = n1 / n2;
        symbol = '/';
    }
    if(op == 5){
        res = pow(n1, n2);
        symbol = '^';
    }
    printf("%lf %c %lf = %lf\n", n1, symbol, n2, res);
    return 0;
}
