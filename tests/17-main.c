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
    binary_tree_t *sibling;

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

    /* Find the sibling of the left child of the root */
    sibling = binary_tree_sibling(root->left);
    printf("Sibling of %d: %d\n", root->left->n, sibling->n);

    /* Find the sibling of the left child of the right child of the root */
    sibling = binary_tree_sibling(root->right->left);
    printf("Sibling of %d: %d\n", root->right->left->n, sibling->n);

    /* Find the sibling of the right child of the left child of the root */
    sibling = binary_tree_sibling(root->left->right);
    printf("Sibling of %d: %d\n", root->left->right->n, sibling->n);

    /* Find the sibling of the root (should be NULL) */
    sibling = binary_tree_sibling(root);
    printf("Sibling of %d: %p\n", root->n, (void *)sibling);

    return (0);
}

