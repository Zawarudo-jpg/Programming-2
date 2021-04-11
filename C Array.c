#include <stdio.h>

int addition(int );

int main()
{
    int array[10], i, n, sum=0;

    printf("Size of Array: ");
    scanf("%d", &n);

    if(n >= 5 && n <= 10)
    {
        for(i=0;i<n;i++)
    {
        printf("\nElement %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for(i=0;i<n;i++)
    {
        sum += array[i];
    }
        printf("\nSum of array is: %d", sum);
        return 0;
    }
    else
    {
        printf("\nSize of Array is 5 - 10 only.");
    }

}

int addition(int a)
{
    if(a == 1)
        return 1;
    else
        return 0;
}
