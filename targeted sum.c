#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements at indices which are factors of 12:\n");

    for (int i = 1; i <= n; i++)   // index starts from 1
    {
        if (12 % i == 0)
        {
            printf("%d ", a[i - 1]);  // i-1 because array index starts from 0
        }
    }

    return 0;
}