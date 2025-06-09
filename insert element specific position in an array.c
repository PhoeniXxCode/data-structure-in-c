#include <stdio.h>

int main() {
    int a[100], i, pos, size, item;

    printf("Enter size of array:\n");
    scanf("%d", &size);  // ✅ Fixed: Removed quotes and comma from scanf

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position where you want to insert the element:\n");
    scanf("%d", &pos);  // ✅ Fixed: This should be the position

    if (pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element you want to insert:\n");
    scanf("%d", &item);

    // Move elements to the right
    for (i = size; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert the element
    a[pos - 1] = item;
    size++;

    printf("Resultant array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
