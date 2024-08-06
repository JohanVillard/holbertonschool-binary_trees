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
	/* Use alignment method */
	/* Pointers traverse equal distances from their initial position */
	/* to the LCA */
	/* Allows to reset f and s to initial position */
	const binary_tree_t *f = first;
	const binary_tree_t *s = second;

	/* Search same parent */
	while (f != s)
	{
		if (f == NULL)	/* When at root */
			f = second;	/* Reset pointer to second's origin */
		else
			f = f->parent;	/* run in first ascendance */

		if (s == NULL)	/* When at root */
			s = first;	/* Reset pointer to first's origin */
		else
			s = s->parent;	/* run in second ascendance */
	}
	/* Return first or second parent(same) or return NULL if not find */
	return ((binary_tree_t *)f);
}
