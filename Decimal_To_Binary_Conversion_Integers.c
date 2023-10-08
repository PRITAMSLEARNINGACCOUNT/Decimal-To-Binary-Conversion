#include <stdio.h>
#include <stdlib.h>
int Func(int a)
{
    int temp = a;
    int n;
    int i = 0;
    for (i = 0; i >= 0; i++)
    {
        if (temp % 2 == 0)
        {
            temp = temp / 2;
        }
        else
        {
            temp = temp / 2;
        }
        if (temp == 1)
        {
            break;
        }
    }
    return i;
}
int main()
{
    int *ptr;
    int num;
    printf("Enter The Decimal Number??\n");
    scanf("%d", &num);
    int n = Func(num);
    n = n + 1;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        if (num % 2 == 0)
        {
            ptr[i] = 0;
            num = num / 2;
        }
        else
        {
            ptr[i] = 1;
            num = num / 2;
        }
        if (num == 1)
        {
            ptr[i + 1] = 1;
            break;
        }
    }
    printf("Here is the binary number of the decimal number you gave \n");
    for (int i = n; i >= 0; i--)
    {
        printf("%d", ptr[i]);
    }

    return 0;
}
