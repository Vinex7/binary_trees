#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses a binary tree in in-order,
 *              meaning it first recursively traverses the left subtree,
 *              then processes the current node, and finally recursively
 *              traverses the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if both the tree and function pointer are not NULL */
    if (tree && func)
    {
        /* Recursively traverse the left subtree */
        binary_tree_inorder(tree->left, func);
        /* Call the function on the current node */
        func(tree->n);
        /* Recursively traverse the right subtree */
        binary_tree_inorder(tree->right, func);
    }
}

