#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL)
		return (NULL);

	if (node->parent->parent == NULL)	/* Grandfather dont exists */
		return (NULL);

	/* Left child equal to node's parent */
	if (node->parent->parent->left == parent)
		return (node->parent->parent->right);	/* Print right child, his sibling */
												/* Uncle of node */
	return (node->parent->parent->left);
}
