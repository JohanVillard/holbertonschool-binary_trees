#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree.
 * @tree: the pointer to the binary_tree_t (const).
 * Return: depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	}

	while (tree->parent != NULL) /* if the tree is not a root */
	{
		depth++;
		tree = tree->parent; /* move the tree to the parent */
	}

	return (depth); /* Return the depth when the root is achievement */
}
