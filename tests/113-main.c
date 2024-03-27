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
    bst_t *node;  /* Pointer to the node found */

    /* Convert the array into a binary search tree */
    tree = array_to_bst(array, n);
    if (!tree)
        return (1);

    /* Print the binary search tree */
    binary_tree_print(tree);

    /* Search for a specific node in the binary search tree */
    node = bst_search(tree, 32);
    printf("Found: %d\n", node->n);
    binary_tree_print(node);

    /* Search for a node that does not exist in the binary search tree */
    node = bst_search(tree, 512);
    printf("Node should be nil -> %p\n", (void *)node);

    return (0);
}

