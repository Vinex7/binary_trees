#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling, returns NULL.
 *         Otherwise, returns a pointer to the sibling.
 *
 * Description: This function finds the sibling of a given node in a binary tree,
 *              which is the node's parent's other child.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);
    
    /* If the node is the left child of its parent, return the right child */
    if (node->parent->left == node)
        return (node->parent->right);
    
    /* If the node is the right child of its parent, return the left child */
    return (node->parent->left);
}

