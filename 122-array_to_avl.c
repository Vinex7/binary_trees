#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL tree, or NULL upon failure.
 *
 * Description: This function takes an array of integers and constructs an AVL tree
 *              using the values in the array. It iterates through the array, inserts
 *              each unique value into the AVL tree using the avl_insert function,
 *              and returns a pointer to the root node of the resulting AVL tree.
 *              If the array is NULL or empty, the function returns NULL.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
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
			if (avl_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}

