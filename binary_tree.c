#include "binary_data.h"

#include <stdio.h>
#include <stdlib.h>

Node* createNode(int data) // This function alone is suppose to create a new node everytime it's called. mostly utilized in the " NodeInsert " Function.
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //Allocates memory for a node.
    if (newNode == NULL)
    {
        fprintf(stderr, " Error creating Node. \n"); // "stderr" is suppose to be "standard error". Without it, you get errors. This is suppose to write the error in the file...?
        exit(0);
    }
    newNode -> data = data; // Writes the newNodes, that are created, into the data.
    newNode -> left = newNode -> right = NULL;
    return newNode;
}
// This whole function is pretty much the default on how to start inserting nodess.

void Nodeinsert(Node **number, int value) // This function is suppose to insert a new node everytime it's called for. 
{
    Node **input = number;

    while(*input != NULL) //Cream of Mushrooms right here. This will decide when to go either left, or right.
    {
        if(value >= (*input)->data)
        {
            input = &(*input)->right;
        }
        else
        {
            input = &(*input)->left;
        }
    }
    *input = createNode(value); // This will then create the final value
}

void free_tree(Node *node) //Self explanitory.
{
    if(node != NULL)
    {
        free_tree(node->left);
        free_tree(node->right);
        free(node);
    }
}

void print_tree(Node* data) //Prints the binary tree, in order of course.
{
    if(data != NULL)
    {
        printf(data->left);
        
    }
}

Node *search(Node *input, int value) // This will search for the specific number. If it's in the binary tree, it will return the value.
{
    if(input == NULL || value == input->data)
    {
        return input;
    }
    if(value > input->data)
    {
        return search(input->right, value);
    }
    else
    {
        return search(input->left, value);
    }
}

Node *findMax(Node *root) //Will scan till it finds the Max value
{
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

Node *findMin(Node *root) //Will scan till it finds the Min value
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root; 
}