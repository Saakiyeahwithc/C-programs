// Lab-6 Implementation of Tree data structure
#include <stdio.h>
#include <stdlib.h>
// Define the structure for a tree node
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
// Function to create a new tree node
struct TreeNode *createNode(int data)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void main()
{
    // Create nodes for a simple binary tree
    struct TreeNode *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    // Print the structure of the binary tree
    printf("   %d\n", root->data);
    printf("  / \\ \n");
    printf(" %d   %d\n", root->left->data, root->right->data);
    printf("/ \\ \n");
    printf("%d  v%d\n", root->left->left->data, root->left->right->data);
}
