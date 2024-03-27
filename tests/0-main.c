#include <stdlib.h>
#include "../binary_trees.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    /* Create a binary tree with a root value of 98 */
    root = binary_tree_node(NULL, 98);

    /* Add nodes to the left subtree */
    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    /* Add nodes to the right subtree */
    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    /* Print the binary tree */
    binary_tree_print(root);

    return (0);
}

