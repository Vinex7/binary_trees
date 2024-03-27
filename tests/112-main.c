#include <stdlib.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    /* Convert the array into a binary search tree */
    tree = array_to_bst(array, n);
    if (!tree)
        return (1);

    /* Print the binary search tree */
    binary_tree_print(tree);

    return (0);
}

