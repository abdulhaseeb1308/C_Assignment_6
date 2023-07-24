// 4. Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
    int num, i, square, sum = 0;
    printf("Enter The Number ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        square = i * i;
        sum = sum + square;
    }
    printf("The Sum of Square of First %d Natural Numbers is %d", num, sum);
}