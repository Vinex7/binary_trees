#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 *
 * Description: This function counts the leaves in a binary tree,
 *              which are nodes that have no children.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    /* If the tree is not NULL */
    if (tree)
    {
        /* Increment the count if the current node is a leaf */
        leaves += (!tree->left && !tree->right) ? 1 : 0;
        /* Recursively count the leaves in the left subtree */
        leaves += binary_tree_leaves(tree->left);
        /* Recursively count the leaves in the right subtree */
        leaves += binary_tree_leaves(tree->right);
    }

    return (leaves);
}

