#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[100], n, i;
    int num, count=0;
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find it's Occurrence: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }
    printf("Occurrence of %d is: %d\n", num, count);
    getch();
    return 0;
}