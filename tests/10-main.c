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
    size_t depth;

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

    /* Print the binary tree */
    binary_tree_print(root);

    /* Get the depth of the binary tree from the root */
    depth = binary_tree_depth(root);
    printf("Depth of %d: %lu\n", root->n, depth);

    /* Get the depth of the binary tree from the right child of the root */
    depth = binary_tree_depth(root->right);
    printf("Depth of %d: %lu\n", root->right->n, depth);

    /* Get the depth of the binary tree from the right child of the left child of the root */
    depth = binary_tree_depth(root->left->right);
    printf("Depth of %d: %lu\n", root->left->right->n, depth);

    return (0);
}

