#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 *
 * Description: This function measures the size of a binary tree,
 *              which is defined as the total number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;

    /* If the tree is not NULL */
    if (tree)
    {
        /* Increment the size by 1 for the current node */
        size += 1;
        /* Recursively calculate the size of the left subtree */
        size += binary_tree_size(tree->left);
        /* Recursively calculate the size of the right subtree */
        size += binary_tree_size(tree->right);
    }

    return (size);
}

