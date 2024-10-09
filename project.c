#include <stdio.h>

int main()
{
    int binary; 
    int result = 0;
    int base = 1;
    int num;
    int rem;
    printf("please enter a binary number:");
    scanf("%d", &binary);
    num = binary;
    while (binary != 0)
    {
        rem  = binary % 10;
        result = result + rem * base;
        binary = binary / 10; 
        base = base * 2;
    }
    printf("the decimal value of %d is %d", num, result);
    return 0;
}
    

