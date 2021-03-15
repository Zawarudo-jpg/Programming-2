#include <stdio.h>

int main()
{
    char name[50];
    int age;
    
    printf("Name: ");
    scanf("%[^\n]%*c", name);
    
    printf("Age: ");
    scanf("%d", &age);
    
    if(age < 18)
    {
        printf("You are not eligible for voting.");
    }
    else
    {
        printf("You are eligible for voting.");
    }

    return 0;
}