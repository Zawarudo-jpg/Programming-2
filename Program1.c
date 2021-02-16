
#include <stdio.h>

int main()
{
    int num1, num2;
    int add, mul, sub;
    float divide;
    
    printf("Input any 2 integer: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    add = num1 + num2; // ADDITION
    mul = num1 * num2; // MULTIPLICATION
    divide = num1 / num2; // DIVISION
    sub = num1 - num2; // SUBTRACTION
    
    printf("ADD = %d \n", add);
    printf("MUL = %d \n", mul);
    printf("DIV = %.1f \n", divide);
    printf("SUB = %d \n", sub);
    
    return 0;
}