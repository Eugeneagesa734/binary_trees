#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - checks wether a node is a leaf of a binary tree.
 * @node: Pointer node to be checked
 *
 * Return: If the node is a leaf, 1, Otherwise 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Reurn the depth of a given binary tree
 * @tree: Pointer to the node to measure the depth of.
 *
 * Return: Nodes depth
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Leaf of a binary tree is returned.
 * @tree: Pointer of the tree to find the leaf in.
 *
 * Return: Pointer to the first encounter leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks weather a binary tree is perfectly recursive
 * @tree: Root node pointer of the tree to be checked.
 * @leaf_depth: Depth of one leaf in the binar treee.
 * @level: Current node level.
 *
 * Return: If the tree is perfect, 1, Otherwise 1.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks weather a binary tree is perfect
 * @tree: Pointer to the root node of the tree to be checked.
 *
 * Return: If the tree is NULL 0
 * 	   Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

