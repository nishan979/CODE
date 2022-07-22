#include <stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter the Unit:");
    scanf("%d", &unit);

    if (unit > 0 && unit <= 199)
    {
        bill = unit * 1.20;
        printf("Electricity Bill: %.2f", bill);
    }
    else if (unit >= 200 && unit < 400)
    {
        bill = unit * 1.50;

        if (bill > 400)
        {
            bill = (100 + (unit * 1.50));
            bill = bill + bill * 0.15;
            printf("Electricity Bill: %.2f", bill);
        }

        else
        {
            printf("Electricity Bill: %.2f", bill);
        }
    }
    else if (unit >= 400 && unit < 600)
    {
        bill = (100 + (unit * 1.80));
        bill = bill + bill * 0.15;
        printf("Electricity Bill: %.2f", bill);
    }
    else if (unit >= 600)
    {
        bill = (100 + (unit * 2.00));
        bill = bill + bill * 0.15;
        printf("Electricity Bill: %.2f", bill);
    }

    return 0;
}