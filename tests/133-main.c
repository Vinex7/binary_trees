#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;  /* Pointer to the heap tree */
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    int extract;    /* Variable to store the extracted value */

    /* Create a heap from the given array */
    tree = array_to_heap(array, n);

    /* Check if the heap creation was successful */
    if (!tree)
        return (1);

    /* Print the resulting heap */
    binary_tree_print(tree);

    /* Extract values from the heap */
    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);

    extract = heap_extract(&tree);
    printf("Extracted: %d\n", extract);
    binary_tree_print(tree);

    /* Clean up the memory */
    binary_tree_delete(tree);

    return (0);
}

