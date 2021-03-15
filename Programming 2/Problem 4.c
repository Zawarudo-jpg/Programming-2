#include <stdio.h>

int main()
{
    int num, reverse = 0;

    printf("Input any integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
	    reverse = reverse * 10;
        reverse = reverse + num % 10;
        num = num / 10;
    }
    printf("Revised for %d is %d", num, reverse);
    
    return 0;
}