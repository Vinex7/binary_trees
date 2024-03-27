#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: The number of nodes with at least one child in the tree.
 *
 * Description: This function counts the nodes in a binary tree that have
 *              at least one child, excluding leaf nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    /* If the tree is not NULL */
    if (tree)
    {
        /* Increment the count if the current node has at least one child */
        nodes += (tree->left || tree->right) ? 1 : 0;
        /* Recursively count the nodes in the left subtree */
        nodes += binary_tree_nodes(tree->left);
        /* Recursively count the nodes in the right subtree */
        nodes += binary_tree_nodes(tree->right);
    }

    return (nodes);
}

