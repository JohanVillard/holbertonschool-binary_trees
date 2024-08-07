#include "binary_trees.h"

size_t _binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree.
 * @tree: the pointer to the binary_tree_t.
 * Return: hg_left - hg_right.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hg_left = 0;
	size_t hg_right = 0;

	if (!tree)
	{
		return (0);
	}
	/* Calculate the height of tree->left with recursive */
	hg_left = _binary_tree_height(tree->left);

	/* Calculate the height of tree->height with recursive */
	hg_right = _binary_tree_height(tree->right);

	return (hg_left - hg_right);
}

/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the binary tree or 0 if tree is NULL
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Case base */
	/* If node or his children don't exist, stop the count */
	if (tree == NULL)
		return (0);

    /* If tree is a leaf - differ to Task 9 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Need to find the longest route */
	/* Compute the height of each tree */
	left_height = _binary_tree_height(tree->left);
	right_height = _binary_tree_height(tree->right);

	/* Height(A) = 1 + max(Height(Aleft), Height(Aright)) */
	/* Add 1 to the longest tree */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
