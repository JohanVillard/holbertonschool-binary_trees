#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_insert_right -  function that inserts a node
 * as the right-child of another node.
 * @parent: the parent of the new_node (pointer).
 * @value: the value attribute for the new_node.
 * Return: The new node created.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (!new_node)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
