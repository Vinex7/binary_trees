#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a binary search tree (BST).
 * @tree: A pointer to the root node of the BST to search.
 * @value: The value to search for in the BST.
 *
 * Return: If the tree is NULL or the value is not found, NULL.
 *         Otherwise, a pointer to the node containing the value.
 *
 * Description: This function searches for a given value in a binary search tree.
 * It recursively traverses the tree, comparing the value with the value of
 * each node visited. If the value is found, it returns a pointer to the node
 * containing the value. If the tree is NULL or the value is not found in the tree,
 * it returns NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}

