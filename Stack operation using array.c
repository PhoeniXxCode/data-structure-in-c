#include <stdio.h>
#include <conio.h>

#define SIZE 5  

int stack[SIZE], choice, top, ele, i;  

int is_full();
int is_empty();
void push();
void pop();
void display();

void main()  
{  
    top = -1;  // Initialization  

    printf("\n\t STACK OPERATIONS USING ARRAY");  
    printf("\n\t--------------------------------");  
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");  

    do  
    {  
        printf("\n\n Enter your Choice : ");  
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1:  
                push();  
                break;  
            case 2:  
                pop();  
                break;  
            case 3:  
                display();  
                break;  
            case 4:  
                printf("\n\t EXIT POINT ");  
                break;  
            default:  
                printf("\n\t Please Enter a Valid Choice (1/2/3/4)");  
        }  
    } while(choice != 4);  

    getch();  
}  

int is_full()  
{  
    if (top == SIZE - 1)  
        return 1;  
    else  
        return 0;  
}  

void push()  
{  
    if (is_full())  
    {  
        printf("\n\t STACK is overflow");  
    }  
    else  
    {  
        printf("\n Enter an element to add in the stack: ");  
        scanf("%d", &ele);  
        top++;  
        stack[top] = ele;  
    }  
}  

int is_empty()  
{  
    if (top == -1)  
        return 1;  
    else  
        return 0;  
}  

void pop()  
{  
    if (is_empty())  
    {  
        printf("\n\t STACK is underflow");  
    }  
    else  
    {  
        printf("\n Element popped: %d", stack[top]);  
        top--;  
    }  
}  

void display()  
{  
    if (is_empty())  
    {  
        printf("\n\t STACK is underflow");  
    }  
    else  
    {  
        printf("\n Stack elements: ");  
        for (i = top; i >= 0; i--)  
        {  
            printf(" %d ", stack[i]);  
        }  
    }  
}
