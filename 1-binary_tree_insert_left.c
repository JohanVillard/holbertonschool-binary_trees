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

	new_node = binary_tree_node(parent, value);	/* Initialize a new node */
	if (new_node == NULL)
	return (NULL);

	new_node->parent = parent;	/* Define parent of new_node */
	if (parent->left != NULL)	/* Parent had left child */
	{
		new_node->left = parent->left;	/* new_node become left parent */
		new_node->left->parent = new_node;	/* left child changes parent */
	}
	else
		new_node->left = NULL;	/* New_node have no left child */

	parent->left = new_node;
	new_node->right = NULL;	/* New_node have no right child */

	return (new_node);
}
