#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Case base */
	/* If node or his children don't exist, stop the count */
	if (tree == NULL ||
		(tree->left == NULL && tree->right == NULL))
		return (0);

	/* Need to find the longest route */
	/* Compute the height of each tree */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Height(A) = 1 + max(Height(Aleft), Height(Aright)) */
	/* Add 1 to the longest tree */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
