#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: the pointer to the binary_tree_t.
 * Return: the sum of func (tree->left and tree->right).
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1); /* if is a leaf */
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
