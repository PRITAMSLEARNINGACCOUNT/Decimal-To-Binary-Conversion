#include <stdio.h>
#include <stdlib.h>
int Dynamic_Memory_Allocation(int a)
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
void Before_Point(int var_1, int var_2)
{
    int *ptr;
    int n = var_1;
    n = n + 1;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        if (var_2 % 2 == 0)
        {
            ptr[i] = 0;
            var_2 = var_2 / 2;
        }
        else
        {
            ptr[i] = 1;
            var_2 = var_2 / 2;
        }
        if (var_2 == 1)
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
}
int Dynamic_Memory_Allocation_2(float a)
{
    int i = 0;
    for (i = 0; i >= 0; i++)
    {
        if (a * 2 >= 1.000)
        {
            a = a * 2;
            int temp = a;
            a = a - temp;
            if (a * 2 == 0.00)
            {
                break;
            }
        }
        else
        {
            a = a * 2;
            int temp = a;
            a = a - temp;
        }
    }

    return i;
}
void After_Point(float a, int Memory_Size, int B)
{
    Before_Point(Memory_Size, B);
    int Memory_Size_2 = Dynamic_Memory_Allocation_2(a);
    int *array;
    array = (int *)malloc(Memory_Size_2 * sizeof(int));
    int i = 0;
    printf(".");
    while (i < Memory_Size_2)
    {
        if (a * 2 >= 1.000)
        {
            array[i] = 1;
            a = a * 2;
            int temp = a;
            a = a - temp;
            if (a * 2 == 1.00)
            {
                break;
            }
        }
        else
        {
            array[i] = 0;
            a = a * 2;
            int temp = a;
            a = a - temp;
        }

        i++;
    }
    for (int ia = 0; ia < Memory_Size_2; ia++)
    {
        printf("%d", array[ia]);
    }
}

int main()
{
    float a;
    printf("Enter A Decimal Number In Floating Point??\n");
    scanf("%f", &a);
    int b = a;
    a = a - b;
    int Memory_size = Dynamic_Memory_Allocation(b);
    After_Point(a, Memory_size, b);

    return 0;
}