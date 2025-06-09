// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[100], i, pos, size;

    // Input size of the array
    printf("Enter size of array:\n");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter array elements:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Input position to delete
    printf("Enter the position from which you want to delete the element:\n");
    scanf("%d", &pos);

    // Validate position
    if(pos < 1 || pos > size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Delete element by shifting
    for(i = pos - 1; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    size--;

    // Print the updated array
    printf("Resultant array after deletion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
