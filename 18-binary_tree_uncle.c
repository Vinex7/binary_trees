#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, returns NULL.
 *         Otherwise, returns a pointer to the uncle node.
 *
 * Description: This function finds the uncle of a given node in a binary tree,
 *              which is the sibling of its parent node. In other words, it returns
 *              the parent's sibling node, if it exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL ||
        node->parent == NULL ||
        node->parent->parent == NULL)
        return (NULL);
    
    /* If the grandparent exists and the parent is its left child, return the right child */
    if (node->parent->parent->left == node->parent)
        return (node->parent->parent->right);
    
    /* If the grandparent exists and the parent is its right child, return the left child */
    return (node->parent->parent->left);
}

