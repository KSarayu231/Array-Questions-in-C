#include <stdio.h>

void main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i * i <= num; i++) {
        if (i * i == num) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Perfect Square");
    else
        printf("Not a Perfect Square");
}