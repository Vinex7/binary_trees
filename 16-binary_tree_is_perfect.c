#include "binary_trees.h"

/**
 * is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, returns 1, otherwise returns 0.
 *
 * Description: This function checks if a given node is a leaf node
 *              in a binary tree, meaning it has no children.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
    return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of a given node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
 * Return: The depth of the node.
 *
 * Description: This function calculates the depth of a given node
 *              in a binary tree, which is the distance from the node
 *              to the root.
 */
size_t depth(const binary_tree_t *tree)
{
    return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf node.
 *
 * Description: This function traverses the binary tree to find and return
 *              a leaf node. It starts from the given root node and goes
 *              recursively to the leftmost child until a leaf node is found.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
    if (is_leaf(tree) == 1)
        return (tree);
    return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: Level of the current node.
 *
 * Return: If the tree is perfect, returns 1, otherwise returns 0.
 *
 * Description: This function recursively checks if a binary tree is perfect,
 *              meaning all interior nodes have exactly two children and all
 *              leaves are at the same level.
 */
int is_perfect_recursive(const binary_tree_t *tree,
        size_t leaf_depth, size_t level)
{
    if (is_leaf(tree))
        return (level == leaf_depth ? 1 : 0);
    if (tree->left == NULL || tree->right == NULL)
        return (0);
    return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
            is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or not perfect, returns 0, otherwise returns 1.
 *
 * Description: This function checks if a binary tree is perfect,
 *              meaning all interior nodes have exactly two children
 *              and all leaves are at the same level.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

