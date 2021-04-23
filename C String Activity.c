#include <stdio.h>
#include <string.h>

void stringCount(char *str)
{
    int i, vowel = 0, cons = 0;

    printf("\nString Length: %d", strlen(str));

    for(i=0;str[i];i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] =='O' || str[i] == 'U')
                vowel++;
            else
                cons++;
        }
    }

    printf("\nVowels: %d", vowel);
    printf("\nConsonants: %d", cons);
}

int main()
{
    char str[100];
    int i = 0;

    printf("Input a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("String converted: ");
    puts(str);

    stringCount(str);

    return 0;
}
