#include "binary_data.h"

void insert_numbers()
{
    printf("Inserted: \n");
    Node *num = NULL;

    Nodeinsert(&num, 5);

    free_tree(num);
}

void print_tree()
{
    




}

int main()
{
    insert_numbers();
    print_tree();


    return 0;
}