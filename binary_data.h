#ifndef BINARY_DATA_H
#define BINARY_DATA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node //This is just a simple Node struct, meant to hold data for the stuff
{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

//This is where I store the functions and stuff.

void print_tree(Node* data);
void Nodeinsert(Node**, int);
void free_tree(Node *);
Node *createNode(int);
Node *search(Node *, int);
Node *findMin(Node *);
Node *findMax(Node *);

#endif