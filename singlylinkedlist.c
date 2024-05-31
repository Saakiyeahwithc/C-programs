#include <stdio.h>
#include <stdlib.h>
// define structure of a node
struct node
{
    int data;
    struct node *link;
};
struct node *start;
// create a node
struct node *create_node()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}
// function for insert element at first position
void insert_first()
{
    struct node *temp;
    temp = create_node();
    printf("\nEnter a element: \n");
    scanf("%d", &temp->data);
    temp->link = start;
    start = temp;
}
// function for delete element from the starting
void delete_first()
{
    struct node *temp;
    if (start == NULL)
        printf("List is empty\n");
    else
    {
        temp = start;
        start = temp->link;
        free(temp);
    }
}
// function for display the element of List
void display()
{
    struct node *temp;
    if (start == NULL)
        printf("List is empty\n");
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}
void main()
{
    int ch;
    printf("1. insert element at starting\n");
    printf("2. delete element from the starting\n");
    printf("3. display element of the list\n");
    printf("4. exit\n");
    while (1)
    {
        printf("\nEnter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_first();
            break;
        case 2:
            delete_first();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong key\n");
        }
    }
}