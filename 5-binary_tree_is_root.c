#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: is a pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)	/* NULL case */
		return (0);

	/* If the node has no parent, it is a root. */
	if (node->parent == NULL)
		return (1);

	return (0);	/* The node is not the root */
}
