#include "binary_trees.h"

/**
 * struct node_s - Singly linked list node.
 * @node: Pointer to a binary tree node.
 * @next: Pointer to the next node in the list.
 */
typedef struct node_s
{
	const binary_tree_t *node;
	struct node_s *next;
} ll;

/* Function prototypes */
ll *append(ll *head, const binary_tree_t *btnode);
void free_list(ll *head);
ll *get_children(ll *head, const binary_tree_t *parent);
void levels_rec(ll *head, void (*func)(int));

/**
 * binary_tree_levelorder - Performs level-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function traverses the binary tree using level-order
 *              traversal and calls the given function on each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	ll *children = NULL;

	func(tree->n);
	children = get_children(children, tree);
	levels_rec(children, func);

	free_list(children);
}

/**
 * levels_rec - Recursively calls func on nodes at each level.
 * @head: Pointer to the head of the linked list with nodes at one level.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function recursively calls the given function on nodes
 *              at each level starting from the linked list of nodes at the
 *              current level.
 */
void levels_rec(ll *head, void (*func)(int))
{
	ll *children = NULL, *curr = NULL;

	if (!head)
		return;
	for (curr = head; curr != NULL; curr = curr->next)
	{
		func(curr->node->n);
		children = get_children(children, curr->node);
	}
	levels_rec(children, func);
	free_list(children);
}

/**
 * get_children - Appends children of a parent to a linked list.
 * @head: Pointer to the head of the linked list to append children.
 * @parent: Pointer to the parent node.
 *
 * Return: Pointer to the head of the linked list of children.
 *
 * Description: This function appends the children of the given parent
 *              node to the linked list and returns the head of the list.
 */
ll *get_children(ll *head, const binary_tree_t *parent)
{
	if (parent->left)
		head = append(head, parent->left);
	if (parent->right)
		head = append(head, parent->right);
	return (head);
}

/**
 * append 

