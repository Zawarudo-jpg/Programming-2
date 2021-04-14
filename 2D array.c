#include <stdio.h>

int main()
{
    int i, j, account[3][2] =
    {
        {1100, 1111},
        {2200, 2222},
        {3300, 3333}
    };

    printf("Enter ID: ");
    scanf("%d", &account[i][0]);

    printf("Enter PIN: ");
    scanf("%d", &account[j][1]);

    if(account[i][0] == 1100 && account[j][1] == 1111)
    {
        printf("\nYou have successfully logged in. \nID#: %d", account[i][0]);
    }
    else if(account[i][0] == 2200 && account[j][1] == 2222)
    {
        printf("\nYou have successfully logged in. \nID#: %d", account[i][0]);
    }
    else if(account[i][0] == 3300 && account[j][1] == 3333)
    {
        printf("\nYou have successfully logged in. \nID#: %d", account[i][0]);
    }
    else
    {
        printf("\nInvalid ID/PIN!");
    }

    return 0;
}
