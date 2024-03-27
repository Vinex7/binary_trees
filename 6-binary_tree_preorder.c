#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses a binary tree in pre-order,
 *              meaning it processes the current node, then recursively
 *              traverses the left subtree, and finally recursively
 *              traverses the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if both the tree and function pointer are not NULL */
    if (tree && func)
    {
        /* Call the function on the current node */
        func(tree->n);
        /* Recursively traverse the left subtree */
        binary_tree_preorder(tree->left, func);
        /* Recursively traverse the right subtree */
        binary_tree_preorder(tree->right, func);
    }
}

