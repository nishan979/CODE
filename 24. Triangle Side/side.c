#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter three sides of a triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("This triangle is valid.\n");
    }
    else
    {
        printf("This triangle is not valid.\n");
    }

    return 0;
}
