#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the tree.
 *
 * Description: This function measures the balance factor of a binary tree,
 *              which is the difference between the heights of the left
 *              and right subtrees. A positive value indicates that the
 *              left subtree is taller, while a negative value indicates
 *              that the right subtree is taller. A balance factor of 0
 *              indicates that the tree is perfectly balanced.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree)
        return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

    return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree.
 *
 * Description: This function measures the height of a binary tree,
 *              which is defined as the number of edges on the longest
 *              path from the root node to a leaf node.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree)
    {
        size_t l = 0, r = 0;

        l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
        return ((l > r) ? l : r);
    }
    return (0);
}

