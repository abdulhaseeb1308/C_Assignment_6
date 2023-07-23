// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int num, sum = 0, i;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("The Sum of Natural number ");
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("%d ", sum);
}