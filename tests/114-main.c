#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
    bst_t *tree;  /* Pointer to the binary search tree */
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);  /* Size of the array */

    /* Convert the array into a binary search tree */
    tree = array_to_bst(array, n);
    if (!tree)
        return (1);

    /* Print the binary search tree */
    binary_tree_print(tree);

    /* Remove node with value 79 from the binary search tree */
    tree = bst_remove(tree, 79);
    printf("Removed 79...\n");
    binary_tree_print(tree);

    /* Remove node with value 21 from the binary search tree */
    tree = bst_remove(tree, 21);
    printf("Removed 21...\n");
    binary_tree_print(tree);

    /* Remove node with value 68 from the binary search tree */
    tree = bst_remove(tree, 68);
    printf("Removed 68...\n");
    binary_tree_print(tree);

    /* Delete the binary search tree */
    binary_tree_delete(tree);

    return (0);
}

