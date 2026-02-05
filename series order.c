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
    for(int i=0;i<=size-1; i++)
    {
        if(a[i]+1==a[i+1])
        {
        printf("%d",a[i]);
        printf("%d",a[i+1]);
        i++;
    }
    else if(a[i]-1==a[i-1])
    {
    printf("%d",a[i]);
    printf("\n");
    }
}
}