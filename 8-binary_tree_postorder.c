#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses a binary tree in post-order,
 *              meaning it first recursively traverses the left subtree,
 *              then recursively traverses the right subtree,
 *              and finally processes the current node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if both the tree and function pointer are not NULL */
    if (tree && func)
    {
        /* Recursively traverse the left subtree */
        binary_tree_postorder(tree->left, func);
        /* Recursively traverse the right subtree */
        binary_tree_postorder(tree->right, func);
        /* Call the function on the current node */
        func(tree->n);
    }
}

