#include <stdio.h>

int main() {
    int a[3] = {5, 4, 3};

    printf("\na[0], value = %d: address = %p", a[0], (void*)&a[0]);
    printf("\na[1], value = %d: address = %p", a[1], (void*)&a[1]);
    printf("\na[2], value = %d: address = %p", a[2], (void*)&a[2]);

    return 0;
}
