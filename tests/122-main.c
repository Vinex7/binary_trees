#include <stdlib.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;  /* Pointer to the root of the AVL tree */
    int array[] = {  /* Array of integers to be converted into an AVL tree */
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);  /* Size of the array */

    /* Convert the array into an AVL tree */
    tree = array_to_avl(array, n);
    if (!tree)
        return (1);  /* Return error code if conversion fails */

    /* Print the AVL tree */
    binary_tree_print(tree);

    return (0);
}

