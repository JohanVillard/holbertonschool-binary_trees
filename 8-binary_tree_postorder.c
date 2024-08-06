#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a
 * binary tree using post-order traversal.
 * @tree: the pointer to the binary_tree_t.
 * @func: the pointer to the function where whill be
 * called for each node are traversed.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n); /* the root */
}
