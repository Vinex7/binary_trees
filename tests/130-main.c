#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * basic_tree - Build a basic binary tree for testing
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    /* Create the root node with value 98 */
    root = binary_tree_node(NULL, 98);
    /* Create left child with value 90 */
    root->left = binary_tree_node(root, 90);
    /* Create right child with value 85 */
    root->right = binary_tree_node(root, 85);
    /* Create left child of the left subtree with value 80 */
    root->left->right = binary_tree_node(root->left, 80);
    /* Create right child of the left subtree with value 79 */
    root->left->left = binary_tree_node(root->left, 79);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int heap;

    /* Build a basic binary tree for testing */
    root = basic_tree();

    /* Print the binary tree */
    binary_tree_print(root);
    /* Check if the root is a max binary heap */
    heap = binary_tree_is_heap(root);
    printf("Is %d a heap: %d\n", root->n, heap);
    /* Check if the left subtree is a max binary heap */
    heap = binary_tree_is_heap(root->left);
    printf("Is %d a heap: %d\n", root->left->n, heap);

    /* Add a new node to the right subtree */
    root->right->left = binary_tree_node(root->right, 97);
    /* Print the binary tree */
    binary_tree_print(root);
    /* Check if the root is a max binary heap after modification */
    heap = binary_tree_is_heap(root);
    printf("Is %d a heap: %d\n", root->n, heap);

    /* Restore the original binary tree */
    root = basic_tree();
    /* Add a new node to the right subtree */
    root->right->right = binary_tree_node(root->right, 79);
    /* Print the binary tree */
    binary_tree_print(root);
    /* Check if the root is a max binary heap after modification */
    heap = binary_tree_is_heap(root);
    printf("Is %d a heap: %d\n", root->n, heap);

    return (0);
}

