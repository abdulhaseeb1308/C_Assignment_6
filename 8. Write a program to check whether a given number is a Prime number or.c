// 8. Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
    int num, i, count = 0;
    printf("Enter The num ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("Its a prime Number");
    }
    else
    {
        printf("its not prime number");
    }
}
