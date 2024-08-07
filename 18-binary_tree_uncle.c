#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_t *binary_tree_uncle - function that finds the uncle of a node.
 * @node: the pointer to the binary_tree_t.
 * Return: null if the node have not a uncle,  a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    /* If one of them is NULL, the node have not uncle */
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL); /* return null if the node have not uncle */
	}

	/* use the binary_tree_sibling function to find uncle */
	return (binary_tree_sibling(node->parent));
}
