#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[max];
int top = -1;
void push() // push function
{
    int element;
    if (top == max - 1)
    {
        printf("Stack Overflow.");
    }
    else
    {
        printf("Enter a number: \n");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}
void pop() // Pop function
{
    int element;
    if (top == -1)
    {
        printf("Stack Underflow.");
    }
    else
    {
        element = stack[top];
        printf("Pop element is %d:\n", element);
        top--;
    }
}
void display() // Display function
{
    int element, i;
    if (top == -1)
    {
        printf("Underflow Condition.");
    }
    else
    {
        for (i = top; i >= 0; i++)
        {
            printf("%d\t", stack[i]);
        }
    }
}
int main()
{
    int ch;
    printf("1.push\n2.pop\n3.display\n4.exit\n");
    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
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
            exit(0);
        default:
            printf("Invalid key.");
            break;
        }
    }
}