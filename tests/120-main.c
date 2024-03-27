#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;  /* Pointer to the root of the tree */

    /* Create the root and initialize its children */
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;  /* Pointer to the root of the tree */
    int avl;  /* Variable to store whether the tree is AVL */

    /* Create a basic binary tree */
    root = basic_tree();

    /* Print the binary tree */
    binary_tree_print(root);

    /* Check if the tree is an AVL tree */
    avl = binary_tree_is_avl(root);
    printf("Is %d AVL: %d\n", root->n, avl);

    /* Check if the left subtree is an AVL tree */
    avl = binary_tree_is_avl(root->left);
    printf("Is %d AVL: %d\n", root->left->n, avl);

    /* Modify the tree */
    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);

    /* Check if the modified tree is an AVL tree */
    avl = binary_tree_is_avl(root);
    printf("Is %d AVL: %d\n", root->n, avl);

    /* Reset the tree */
    root = basic_tree();
    root->right->right->right = binary_tree_node(root->right->right, 430);
    binary_tree_print(root);

    /* Check if the new modification preserves AVL property */
    avl = binary_tree_is_avl(root);
    printf("Is %d AVL: %d\n", root->n, avl);

    /* Further modify the tree */
    root->right->right->right->left = binary_tree_node(root->right->right->right, 420);
    binary_tree_print(root);

    /* Check if the final modification preserves AVL property */
    avl = binary_tree_is_avl(root);
    printf("Is %d AVL: %d\n", root->n, avl);

    return (0);
}

