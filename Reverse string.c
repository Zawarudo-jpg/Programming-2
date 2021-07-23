#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; // Initialize string variable and limit
    int i, len;
    
    printf("Enter string: ");
    gets(str); // Get input from user
    
    len = strlen(str); // Length of string
    printf("Reversed string: ");

    for(i = len - 1; i >= 0; i--)
    {
        if(str[i] == ' ') 
        {
            str[i] = '\0';
            printf("%s ",&(str[i]) + 1);
        }
    }
    printf("%s", str);

    return 0;
}