

#include <stdio.h>

int main() 
{
    int array[20], pos, i, n;

    printf("Enter number of elements you want to insert in the array:\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position of the element to be deleted:\n");
    scanf("%d", &pos);

    if (pos >= n + 1) 
    {
        printf("Deletion not possible.\n");
    } 
    else 
    {
        for (i = pos - 1; i < n - 1; i++) 
        {
            array[i] = array[i + 1];
        }

        printf("After deleting element at %d location, the array is:\n", pos);
        for (i = 0; i < n - 1; i++) 
        {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}

