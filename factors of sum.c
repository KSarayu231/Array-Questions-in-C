#include <stdio.h>

int main()
{
    int a[50], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum of elements = %d\n", sum);
    printf("Elements which are factors of the sum:\n");

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0 && sum % a[i] == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}