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
    binary_tree_t *uncle;

    /* Create a binary tree with root value 98 */
    root = binary_tree_node(NULL, 98);

    /* Add left child with value 12 */
    root->left = binary_tree_node(root, 12);

    /* Add right child with value 128 */
    root->right = binary_tree_node(root, 128);

    /* Add right child with value 54 to the left child of the root */
    root->left->right = binary_tree_node(root->left, 54);

    /* Add right child with value 402 to the right child of the root */
    root->right->right = binary_tree_node(root->right, 402);

    /* Add left child with value 10 to the left child of the left child of the root */
    root->left->left = binary_tree_node(root->left, 10);

    /* Add left child with value 110 to the left child of the right child of the root */
    root->right->left = binary_tree_node(root->right, 110);

    /* Add left child with value 200 to the left child of the right child of the right child of the root */
    root->right->right->left = binary_tree_node(root->right->right, 200);

    /* Add right child with value 512 to the right child of the right child of the right child of the root */
    root->right->right->right = binary_tree_node(root->right->right, 512);

    /* Print the binary tree */
    binary_tree_print(root);

    /* Find the uncle of the left child of the right child of the root */
    uncle = binary_tree_uncle(root->right->left);
    printf("Uncle of %d: %d\n", root->right->left->n, uncle->n);

    /* Find the uncle of the right child of the left child of the root */
    uncle = binary_tree_uncle(root->left->right);
    printf("Uncle of %d: %d\n", root->left->right->n, uncle->n);

    /* Find the uncle of the left child of the root (should be NULL) */
    uncle = binary_tree_uncle(root->left);
    printf("Uncle of %d: %p\n", root->left->n, (void *)uncle);

    return (0);
}

