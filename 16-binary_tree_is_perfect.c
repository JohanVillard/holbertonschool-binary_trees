#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: the pointer to the binary_tree_t.
 * Return: 1 if tree is perfect otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hg_left, hg_right;

	if (!tree)
	{
		return (0); /* if is not perfect */
	}

	/* Calculate the height of tree->left with recursive */
	hg_left = binary_tree_height(tree->left);

	/* Calculate the height of tree->right with recursive */
	hg_right = binary_tree_height(tree->right);

	if (hg_left != hg_right)
	{
		return (0); /* if tree left and right are not equal */
	}

	if (!tree->left && !tree->right)
	{
		return (1); /* if is a leaf for two */
	}

	/* if one child is null, the tree is not perfect */
	if (!tree->left || !tree->right)
	{
		return (0);
	}

	/* check with recursive if tree left and right are perfect */
	return (binary_tree_is_perfect(tree->left));
			return (binary_tree_is_perfect(tree->right));
}

