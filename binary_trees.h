#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>

/* -----------------------STRUCTURE----------------------- */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* ----------------------FUNCTIONS------------------------ */

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* P0T1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* P0T2 */

/* P0T3 */
void binary_tree_delete(binary_tree_t *tree);
/* P0T4 */

/* P0T5 */
int binary_tree_is_root(const binary_tree_t *node);
/* P0T6 */

/* P0T7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* P0T8 */

/* P0T9 */
size_t binary_tree_height(const binary_tree_t *tree);
/* P0T10 */

/* P0T11 */

/* P0T12 */

/* P0T13 */

/* P0T14 */

/* P0T15 */

/* P0T16 */

/* P0T17 */

/* P0T18 */


#endif /* _BINARY_TREES_H_ */
