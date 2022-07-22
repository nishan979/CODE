#include<stdio.h>

int main()
{
   int side1, side2, side3;

   printf("Enter the sides of a triangle:\n");
   scanf("%d %d %d", &side1, &side2, &side3);

   if (side1 == side2 && side2 == side3)
      printf("The given triangle is equilateral.\n");

   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The given triangle is isosceles.\n");

   else
      printf("The given triangle is scalene.\n");

   return 0;
}
