#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 *
 * Return: Always nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current_node = tree;

	if (current_node == NULL)	/* Base case */
		return;

	while (current_node->left != NULL)	/* Search for left leaf at max height*/
		current_node = current_node->left;

	return (binary_tree_inorder(current_node->left, current_node->left->n));
	return (binary_tree_inorder(current_node, current_node->n));
	return (binary_tree_inorder(current_node->right, current_node->right->n));
}
