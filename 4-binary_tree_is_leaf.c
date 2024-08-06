#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * @node: the pointer to the binary_tree_t (const).
 * Return: 1 if the node is a leaf, ortherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	while (node != NULL)
	{
		/* check if child left and right are not a leaf  */
		if (node->left != NULL && node->right != NULL)
			return (0); /* if the node is not a leaf */
		return (1); /* if the node is a leaf */
	}
	return (0);
}
