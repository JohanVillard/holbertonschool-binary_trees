#include "binary_trees.h"

int _binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_levelorder - goes through
 * a binary tree using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 *
 * Return: Always nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Compute the tree's height */
	int height = _binary_tree_height(tree), i;

	if (tree == NULL || func == NULL)
		return;
	for (i = 1; i < height ; i++)
	{
		if (i == 1)
			func(tree->n);

		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);

	}
}

/**
 * _binary_tree_height - compute the height of the binary tree
 * @tree: to compute
 *
 * Return: an integer of tree's size
 */
int _binary_tree_height(const binary_tree_t *tree)
{
	int left_tree = 0, right_tree = 0;

	if (tree == NULL)
		return (0);

	/* Recursively counts the height of each tree */
	left_tree = _binary_tree_height(tree->left);
	right_tree = _binary_tree_height(tree->right);

	/* Returns the highest height  */
	if (left_tree > right_tree)
		return (left_tree + 1);	/* Add one at each recursive call */

	return (right_tree + 1);
}
