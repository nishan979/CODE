
#include <stdio.h>


int main() {
    int num;
    printf("Enter the Number:");
    scanf("%d", &num);

    if(num>0 && num%2 == 0){
        printf("Even Positive");
    }
    else if(num>0 && num%2 != 0){
        printf("Odd Positive");
    }
    else if(num<0 && num%2 == 0){
        printf("Even Negative");
    }
    else if(num<0 && num%2 != 0){
        printf("Odd Negative");
    }

    return 0;
}
