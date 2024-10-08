#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Base case */
	/* Node has no child */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Compare the left and right tree */
	/* Check if the 2 trees are full */
	/* For a full tree, Node must have 2 children */
	/* If the node has 1 child, a binary tree is not full */
	/* If the result of each recursion is 1, the && will give 1 */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
