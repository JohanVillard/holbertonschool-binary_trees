#include "binary_trees.h"
size_t _binary_tree_height(const binary_tree_t *tree);
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
	hg_left = _binary_tree_height(tree->left);

	/* Calculate the height of tree->right with recursive */
	hg_right = _binary_tree_height(tree->right);

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
	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
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



