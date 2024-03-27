#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is the root, returns 1.
 *         Otherwise, returns 0.
 *
 * Description: This function determines if a given node in a binary tree
 *              is the root node, meaning it has no parent.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    /* Check if the node is NULL or has a parent */
    if (node == NULL || node->parent != NULL)
        return (0); /* Return 0 if it's not the root */

    return (1); /* Return 1 if it's the root */
}

