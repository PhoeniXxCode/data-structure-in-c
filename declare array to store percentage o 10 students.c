#include <stdio.h>

int main() {
    float percentage[10]; 
    int i; 
    
    // Input loop
    for (i = 0; i < 10; i++) { 
        printf("\nEnter percentage of student %d:\t", i + 1);
        scanf("%f", &percentage[i]);
    }
    
    // Output loop
    for (i = 0; i < 10; i++) {  // Fixed condition
        printf("\nPercentage of student %d:\t %4.2f", i + 1, percentage[i]); // Fixed missing semicolon
    }
    
    return 0;
}
