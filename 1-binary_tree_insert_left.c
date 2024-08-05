#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to the left of parent node
 * @parent: is the node from which the created node starts
 * @value: is a integer which is stored as a data in the node
 *
 * Return: left_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;	/* Declare a new node */

	if (parent == NULL)	/* Parent doesn't exist */
		return (NULL);

	new_node = binary_tree_node(value);	/* Initialize a new node */

	new_node->parent = parent;	/* Define parent of new_node */
	parent->left = new_node;	/* Define new_node as left child of parent */

	/* New_node have no child */
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
