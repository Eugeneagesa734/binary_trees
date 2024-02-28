#include "binary_trees.h"

/**
 * binary_tree_height - Height of the binary tree is measured.
 * @tree: Root node pointer of thr tree to measure the height.
 *
 * Return: Return 0 when the tree is NULL, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
