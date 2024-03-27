#include "binary_trees.h"

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
    binary_tree_t *mom, *pop;

    if (!first || !second)
        return (NULL);
    if (first == second)
        return ((binary_tree_t *)first);

    mom = first->parent, pop = second->parent;
    if (first == pop || !mom || (!mom->parent && pop))
        return (binary_trees_ancestor(first, pop));
    else if (mom == second || !pop || (!pop->parent && mom))
        return (binary_trees_ancestor(mom, second));
    return (binary_trees_ancestor(mom, pop));
}

