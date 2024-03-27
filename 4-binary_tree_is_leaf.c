#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, returns 1.
 *         Otherwise, returns 0.
 *
 * Description: This function determines if a given node in a binary tree
 *              is a leaf node, meaning it has no children.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    /* Check if the node is NULL or has any children */
    if (node == NULL || node->left != NULL || node->right != NULL)
        return (0); /* Return 0 if it's not a leaf */

    return (1); /* Return 1 if it's a leaf */
}

