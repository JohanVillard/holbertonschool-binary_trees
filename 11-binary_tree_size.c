#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the size
 *
 * Return: size of tree, if tree is NULL O
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;

	if (current_node == NULL)	/* Base case */
		return (0);

	/* Size(A) = 1 + Size(Aleft) + Size(Aright) */
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);

}
