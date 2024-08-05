#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree
 * @tree:  is a pointer to the root node of the tree to delete
 *
 * Return: Always nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Get the current node pointed to by the pointer returned by the function */
	binary_tree_t *current_node = tree;

	if (current_node == NULL)	/* Base case. Stop the recursion */
		return;

	/* First, runs along the left tree */
	binary_tree_delete(current_node->left);
	/* Second, runs along the right tree */
	binary_tree_delete(current_node->right);

	free(current_node);	/* Delete current_node returned */
}
