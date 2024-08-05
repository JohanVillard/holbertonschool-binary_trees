#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree:  is a pointer to the root node
 * of the tree to count the number of nodes
 *
 * Return: the number compute, if tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the tree is a leaf, then the function return simply moves it */
	/* 1 is not increment */
	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/* Size(A) = 1 + Size(Aleft) + Size(Aright) */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
