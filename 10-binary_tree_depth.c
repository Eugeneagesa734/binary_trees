#include "binary_trees.h"
/**
 * binary_tree_depth - Depth of the node in a binary tree is measured.
 * @tree: Node pointer to measure the depth.
 *
 * Return: Return 0 for NULL function. Otherwise return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
