#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first:  is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (first == NULL || second == NULL)	/* No common ancestor */
		return (NULL);

	if (first == second->parent)	/* Base case */
		return (second->parent);

	if (first->parent == second)	/* Base case */
		return (first->parent);

	if (first->parent == second->parent)	/* Base case */
		return (first->parent);

	if (first->parent != second->parent)	/* Run into second ancestors */
		return (binary_trees_ancestor(first, second->parent));

	if (first->parent != second->parent)	/* Run into first ancestors */
		return (binary_trees_ancestor(first->parent, second));

	return (NULL);
}
