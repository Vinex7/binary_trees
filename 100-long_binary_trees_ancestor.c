#include "binary_trees.h"

/**
 * depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, returns 0, else returns the depth.
 *
 * Description: This function measures the depth of a node in a binary tree,
 *              which is the distance from the node to the root.
 */
size_t depth(const binary_tree_t *tree)
{
    return ((tree->parent != NULL) ? 1 + depth(tree->parent) : 0);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors, returns NULL, else returns common ancestor.
 *
 * Description: This function finds the lowest common ancestor of two nodes
 *              in a binary tree. If one of the nodes is an ancestor of the
 *              other, that node is returned. If no common ancestor exists,
 *              NULL is returned.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
    size_t first_depth, second_depth;

    if (first == NULL || second == NULL)
        return (NULL);
    if (first == second)
        return ((binary_tree_t *)first);
    if (first->parent == second->parent)
        return ((binary_tree_t *)first->parent);
    if (first == second->parent)
        return ((binary_tree_t *)first);
    if (first->parent == second)
        return ((binary_tree_t *)second);

    for (first_depth = depth(first); first_depth > 1; first_depth--)
        first = first->parent;
    for (second_depth = depth(second); second_depth > 1; second_depth--)
        second = second->parent;

    if (first == second)
        return ((binary_tree_t *)first);
    if (first->parent == second->parent)
        return ((binary_tree_t *)first->parent);
    if (first == second->parent)
        return ((binary_tree_t *)first);
    if (first->parent == second)
        return ((binary_tree_t *)second);
    else
        return (NULL);
}

