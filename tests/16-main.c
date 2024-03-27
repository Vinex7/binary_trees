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
    int perfect;

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

    /* Add left child with value 10 to the left child of the right child of the root */
    root->right->left = binary_tree_node(root->right, 10);

    /* Print the binary tree */
    binary_tree_print(root);

    /* Check if the binary tree is perfect */
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    /* Add left child with value 10 to the left child of the right child of the right child of the root */
    root->right->right->left = binary_tree_node(root->right->right, 10);

    /* Print the binary tree */
    binary_tree_print(root);

    /* Check if the binary tree is perfect */
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    /* Add right child with value 10 to the right child of the right child of the right child of the root */
    root->right->right->right = binary_tree_node(root->right->right, 10);

    /* Print the binary tree */
    binary_tree_print(root);

    /* Check if the binary tree is perfect */
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n", perfect);

    return (0);
}

