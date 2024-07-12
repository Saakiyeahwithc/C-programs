// Implementation of Queue using array.
#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int rear = -1;
int front = 0;
// Function for inserting an element into queue
void insert()
{
    int element;
    if (rear == max - 1)
    {
        printf("\nQueue is overflow.\n");
    }
    else
    {
        if (rear == -1)
            printf("\nEnter a value.\n");
        scanf("%d", &element);
        rear += 1;
        queue[rear] = element;
    }
}
// Function for deleting element form the queuedgy7u8ct987xsd
void delete()
{
    int element;
    if (rear < front)
    {
        printf("Underflow Condition.");
    }
    else
    {
        element = queue[front];
        front += 1;
        printf("%d is deleted\n", element);
    }
}
// Function for displaying all the elements in the queue
void display()
{
    int i;
    if (rear == -1)
    {
        printf("Underflow Condition\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}
// Driver function
void main()
{
    int ch;
    printf("1.Insert element\n");
    printf("2.Delete element\n");
    printf("3.Display element\n");
    printf("4.exit\n");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong key");
        }
    }
}