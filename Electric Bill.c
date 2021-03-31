#include <stdio.h>

int main()
{
    int cus_ID, unit, charge, surcharge, total;

    printf("Input Cusomer ID: ");
    scanf("%d", &cus_ID);
    printf("Input the unit consumed by the customer: ");
    scanf("%d", &unit);

    printf("\n\n[Electricity Bill]");
    printf("\nCustomer ID# \t\t\t: %d", cus_ID);
    printf("\nUnit Consumed \t\t\t: %d", unit);

    //Charge/Unit
    if(unit > 199 && unit < 250)
    {
        charge = unit * 1.50;
        printf("\nUnit Charges @P 1.50 per unit \t: %d", charge);
    }
    else if(unit >= 250 && unit < 400)
    {
        charge = unit * 1.60;
        printf("\nUnit Charges @P 1.60 per unit \t: %d", charge);
    }
    else if(unit >= 450 && unit < 600)
    {
        charge = unit * 1.85;
        printf("\nUnit Charges @P 1.85 per unit \t: %d", charge);
    }
    else if(unit >= 600)
    {
        charge = unit * 2.00;
        printf("\nUnit Charges @P 2.00 per unit \t: %d", charge);
    }
    else
    {
        printf("\nEnter right amount!\n");
        return 0;
    }

    //Surcharge
    if(charge > 400)
    {
        surcharge = charge * .10;
        printf("\nSurcharge Amount \t\t: %d", surcharge);
        total = charge + surcharge;
        printf("\nTotal Customer Bill \t\t: %d\n", total);
    }
    //No Surcharge
    else
    {
        printf("\nSurcharge Amount \t\t: None - add '10%%' if bill exceeds P400");
        printf("\nTotal Customer Bill \t\t: %d\n", charge);
    }

    return 0;
}
