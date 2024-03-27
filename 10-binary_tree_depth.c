#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL or has no parent, returns 0.
 *         Otherwise, returns the depth of the node.
 *
 * Description: This function measures the depth of a node in a binary tree,
 *              which is defined as the number of edges from the node to
 *              the root of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    /* If the tree is not NULL and has a parent */
    return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

