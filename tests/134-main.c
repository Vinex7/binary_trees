#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: Pointer to the array to be printed
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    /* Print each element of the array */
    for (i = 0; i < size; ++i)
    {
        /* Print a comma and space if it's not the first element */
        if (i > 0)
            printf(", ");
        /* Print the current element */
        printf("%d", array[i]);
    }
    printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *tree;            /* Pointer to the heap tree */
    int array[] = {          /* Input array */
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);  /* Size of the array */
    int *sorted;             /* Pointer to the sorted array */
    size_t sorted_size;      /* Size of the sorted array */

    /* Print the original array */
    print_array(array, n);

    /* Create a heap from the given array */
    tree = array_to_heap(array, n);
    if (!tree)
        return (1);

    /* Print the resulting heap */
    binary_tree_print(tree);

    /* Convert the heap to a sorted array */
    sorted = heap_to_sorted_array(tree, &sorted_size);

    /* Print the sorted array */
    print_array(sorted, sorted_size);

    /* Free the memory allocated for the sorted array */
    free(sorted);

    return (0);
}

