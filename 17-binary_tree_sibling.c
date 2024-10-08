#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node == NULL)
		return (NULL);

	/* Check if parent has one child - no sibling */
	if (node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);

	/* node has the same parent as its sibling */
	/* Find out if node is left of right child */
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
