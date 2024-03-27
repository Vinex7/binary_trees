#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree (BST) from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 *
 * Description: This function builds a binary search tree from the elements
 * in the given array. It iterates through the array, inserting each unique
 * element into the BST using the bst_insert function. If an element is already
 * present in the tree, it skips insertion to maintain the BST property.
 * The function returns a pointer to the root node of the created BST or NULL
 * if memory allocation fails or if the input array is NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}

