#include <stdio.h>

double add(num1,num2) {
    return num1 + num2;
}
int main() {
    double num1, num2, result;
    
    printf("Simple Addition Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    result = add(num1,num2);
    printf("The sum is: %.2lf\n", result);
    
    return 0;
}
