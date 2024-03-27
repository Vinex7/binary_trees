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
    int full;

    /* Create a binary tree with root value 98 */
    root = binary_tree_node(NULL, 98);

    /* Add left child with value 12 */
    root->left = binary_tree_node(root, 12);

    /* Add right child with value 402 */
    root->right = binary_tree_node(root, 402);

    /* Add right child with value 54 to the left child of the root */
    binary_tree_insert_right(root->left, 54);

    /* Add right child with value 128 to the root */
    binary_tree_insert_right(root, 128);

    /* Add left child with value 10 to the left child of the left child of the root */
    root->left->left = binary_tree_node(root->left, 10);

    /* Print the binary tree */
    binary_tree_print(root);

    /* Check if the binary tree from the root is full */
    full = binary_tree_is_full(root);
    printf("Is %d full: %d\n", root->n, full);

    /* Check if the binary tree from the left child of the root is full */
    full = binary_tree_is_full(root->left);
    printf("Is %d full: %d\n", root->left->n, full);

    /* Check if the binary tree from the right child of the root is full */
    full = binary_tree_is_full(root->right);
    printf("Is %d full: %d\n", root->right->n, full);

    return (0);
}

