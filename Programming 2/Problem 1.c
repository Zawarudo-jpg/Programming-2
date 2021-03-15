#include <stdio.h>

int main()
{
    int num1, num2;
    int add, mul, sub;
    float divide;
    
    printf("Input any 2 integer: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    add = num1 + num2;
    mul = num1 * num2;
    divide = num1 / num2;
    sub = num1 - num2;
    
    printf("\nADD: %d", add);
    printf("\nMUL: %d", mul);
    printf("\nDIV: %.1f", divide);
    printf("\nSUB: %d", sub);
    
    return 0;
}