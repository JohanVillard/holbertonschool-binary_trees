#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;
	size_t left_height = 0, right_height = 0;

	/* Case base */
	/* If node or his choildren are don't exist, stop the count */
	if (current_node == NULL ||
		(current_node->left == NULL && current_node->right == NULL))
		return (0);

	/* Need to find the longest path */
	left_height = binary_tree_height(current_node->left);
	right_height = binary_tree_height(current_node->right);

	/* Height(A) = 1 + max(Height(Aleft), Height(Aright)) */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
