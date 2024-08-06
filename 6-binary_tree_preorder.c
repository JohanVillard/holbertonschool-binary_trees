#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a
 * binary tree using pre-order traversal.
 * @tree: the pointer to the binary_tree_t.
 * @func: the pointer to the function where whill be
 * called for each node are traversed.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
