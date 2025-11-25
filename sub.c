#include <stdio.h>

float sub(float a, float b) {
    return a - b;
}

int main() {
    float num1, num2, result;
    
    printf("Simple 2-Element Calculator\n");
    printf("===========================\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
 
    if(num2 != 0) {
        result = sub(num1, num2);
         printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
    }
    else {
        printf("\nError: Invalid operation!\n");
    }
    
    return 0;
}