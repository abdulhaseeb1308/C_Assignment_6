// 2. Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int num, sum = 0, i;
    printf("Enter The Number ");
    scanf("%d", &num);
    printf("THe Sum of First %d natural Number are:", num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}