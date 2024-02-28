#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks wether a leaf is the nodee of a tree.
 * @node: Node pointer to be checked.
 *
 * Return: 1 when node is a leaf
 * 	   Otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
