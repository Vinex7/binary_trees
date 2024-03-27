#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int bst;

    /* Create a binary tree */
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);

    /* Print the original binary tree and check if it's a binary search tree */
    binary_tree_print(root);
    bst = binary_tree_is_bst(root);
    printf("Is %d a binary search tree: %d\n", root->n, bst);
    bst = binary_tree_is_bst(root->left);
    printf("Is %d a binary search tree: %d\n", root->left->n, bst);

    /* Modify the binary tree and check if it's still a binary search tree */
    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    bst = binary_tree_is_bst(root);
    printf("Is %d a binary search tree: %d\n", root->n, bst);
    return (0);
}

