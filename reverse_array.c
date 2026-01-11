#include<stdio.h>

void reverse_array(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }

    printf("Reversed array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, size);

    return 0;
}