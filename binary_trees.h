#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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
/* P0T0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* P0T1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* P0T2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* P0T3 */
void binary_tree_delete(binary_tree_t *tree);
/* P0T4 */
int binary_tree_is_leaf(const binary_tree_t *node);
/* P0T5 */
int binary_tree_is_root(const binary_tree_t *node);
/* P0T6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* P0T7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* P0T8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* P0T9 */
size_t binary_tree_height(const binary_tree_t *tree);
/* P0T10 */
size_t binary_tree_depth(const binary_tree_t *tree);
/* P0T11 */
size_t binary_tree_size(const binary_tree_t *tree);
/* P0T12 */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* P0T13 */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* P0T14 */
int binary_tree_balance(const binary_tree_t *tree);
/* P0T15 */
int binary_tree_is_full(const binary_tree_t *tree);
/* P0T16 */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* P0T17 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* P0T18 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
/* P0T19 */
binary_tree_t *binary_trees_ancestor
(const binary_tree_t *first, const binary_tree_t *second);
/* P0T20 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

#endif /* _BINARY_TREES_H_ */
