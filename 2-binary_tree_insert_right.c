#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 *                             in a binary tree.
 * @parent: A pointer to the node to insert the right child into.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or memory allocation fails - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If the parent already has a right child, the new node
 *              takes its place, and the old right child becomes the
 *              right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Check if the parent node is NULL */
    if (parent == NULL)
        return (NULL);

    /* Create a new node with the given value */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* If parent already has a right child */
    if (parent->right != NULL)
    {
        /* Set the new node's right child to the current right child of parent */
        new_node->right = parent->right;
        /* Set the parent of the current right child to the new node */
        parent->right->parent = new_node;
    }

    /* Set the new node as the right child of the parent */
    parent->right = new_node;

    return (new_node);
}

