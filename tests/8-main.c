#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    /* Create a binary tree with root value 98 */
    root = binary_tree_node(NULL, 98);

    /* Add left child with value 12 */
    root->left = binary_tree_node(root, 12);

    /* Add right child with value 402 */
    root->right = binary_tree_node(root, 402);

    /* Add left-left child with value 6 */
    root->left->left = binary_tree_node(root->left, 6);

    /* Add left-right child with value 56 */
    root->left->right = binary_tree_node(root->left, 56);

    /* Add right-left child with value 256 */
    root->right->left = binary_tree_node(root->right, 256);

    /* Add right-right child with value 512 */
    root->right->right = binary_tree_node(root->right, 512);

    /* Print the binary tree */
    binary_tree_print(root);

    /* Print the binary tree using postorder traversal */
    binary_tree_postorder(root, &print_num);

    return (0);
}

