#include <stdio.h>

int main()
{
    for (int i = 41; i <= 45; i++)
        {
            for (int j = 41; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }

    // 2

    int num = 11;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    // 3

    for (int i = 5; i >= 1; i--)
    {

        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    // 4

    for (int i = 5; i >= 1; i--)
    {

        for (int k = i; k < 5; k++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j % 2);
        }

        printf("\n");
    }

    // 5
    for (int i = 5; i >= 1; i--)
    {

        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }

        for (int p = 4; p >= i; p--)
        {
            printf("%d ", p);
        }

        printf("\n");
    }

    // 6

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

         for (int k = 1; k <=2*(5-i); k++)
        {
            printf("  ");
        }

        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    // 7

    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3)
        {
            printf("* * * * *");
        }
        else if (i == 2)
        {
            printf("*       *");
        }

        else
        {
            printf("* ");
        }
        printf("\n");
    }
}
