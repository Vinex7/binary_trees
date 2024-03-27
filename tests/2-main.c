#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    /* Create a binary tree with root value 98 */
    root = binary_tree_node(NULL, 98);

    /* Add left child with value 12 */
    root->left = binary_tree_node(root, 12);

    /* Add right child with value 402 */
    root->right = binary_tree_node(root, 402);

    /* Print the binary tree */
    binary_tree_print(root);
    printf("\n");

    /* Insert a new right child with value 54 to the left subtree of the root */
    binary_tree_insert_right(root->left, 54);

    /* Insert a new right child with value 128 to the root */
    binary_tree_insert_right(root, 128);

    /* Print the updated binary tree */
    binary_tree_print(root);

    return (0);
}

