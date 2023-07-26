// 5. Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int num, i, cube, sum = 0;
    printf("Enter The Number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        cube = i * i * i;
        sum = sum + cube;
    }
    printf("sum of cubes of first %d natural numbers is %d ", num, sum);
}