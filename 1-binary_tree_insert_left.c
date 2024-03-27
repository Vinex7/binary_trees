#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another
 *                           node in a binary tree.
 * @parent: A pointer to the node to insert the left child into.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or memory allocation fails - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If the parent already has a left child, the new node
 *              takes its place and the old left child becomes the
 *              left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Check if the parent node is NULL */
    if (parent == NULL)
        return (NULL);

    /* Create a new node with the given value */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* If parent already has a left child */
    if (parent->left != NULL)
    {
        /* Set the new node's left child to the current left child of parent */
        new_node->left = parent->left;
        /* Set the parent of the current left child to the new node */
        parent->left->parent = new_node;
    }

    /* Set the new node as the left child of the parent */
    parent->left = new_node;

    return (new_node);
}

