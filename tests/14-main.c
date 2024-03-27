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
    int balance;

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

    /* Add left child with value 45 to the root */
    binary_tree_insert_left(root, 45);

    /* Add right child with value 50 to the left child of the root */
    binary_tree_insert_right(root->left, 50);

    /* Add left child with value 10 to the left child of the left child of the root */
    binary_tree_insert_left(root->left->left, 10);

    /* Add left child with value 8 to the left child of the left child of the left child of the root */
    binary_tree_insert_left(root->left->left->left, 8);

    /* Print the binary tree */
    binary_tree_print(root);

    /* Get the balance factor of the binary tree from the root */
    balance = binary_tree_balance(root);
    printf("Balance of %d: %+d\n", root->n, balance);

    /* Get the balance factor of the binary tree from the right child of the root */
    balance = binary_tree_balance(root->right);
    printf("Balance of %d: %+d\n", root->right->n, balance);

    /* Get the balance factor of the binary tree from the right child of the left child of the left child of the root */
    balance = binary_tree_balance(root->left->left->right);
    printf("Balance of %d: %+d\n", root->left->left->right->n, balance);

    return (0);
}

