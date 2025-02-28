#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    binary_tree_t *root;

    /* Create a binary tree */
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 64);
    root->left->left = binary_tree_node(root->left, 32);

    /* Print the original binary tree and perform a right rotation */
    binary_tree_print(root);
    printf("Rotate-right %d\n", root->n);
    root = binary_tree_rotate_right(root);
    binary_tree_print(root);
    printf("\n");

    /* Modify the binary tree and perform another right rotation */
    root->left->left = binary_tree_node(root->left, 20);
    root->left->right = binary_tree_node(root->left, 56);
    binary_tree_print(root);
    printf("Rotate-right %d\n", root->n);
    root = binary_tree_rotate_right(root);
    binary_tree_print(root);
    return (0);
}

