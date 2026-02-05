#include <stdio.h>
void main()
{
    int size;
    printf("enter how many elements to store \n");
    scanf("%d", &size);
    int a[size];
    for (int i=0 ; i<=size-1; i++)
    {
        printf("enter the %d element \n", (i+1));
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0;i<=size-1; i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is %d\n", sum);
    if (sum%2==0)
    {
        printf("sum is even \n");
    }
    else
    {
        printf("sum is odd \n");
    }
}