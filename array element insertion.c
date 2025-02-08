#include <stdio.h>

int main() {
    int a[100], i, pos, size, item;

    printf("Enter the size of array: ");
    scanf("%d", &size);

   
    if (size >= 100) {
        printf("Size exceeds the maximum allowed (100)\n");
        return 1;
    }


    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }


    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);

   
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position! Please enter a position between 1 and %d\n", size + 1);
        return 1;
    }

    printf("Enter the item that you want to insert: ");
    scanf("%d", &item);

    
    for (i = size; i >= pos; i--) {
        a[i] = a[i - 1];
    }

  
    a[pos - 1] = item;
    size++; 

  
    printf("Resultant array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
