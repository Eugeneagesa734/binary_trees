#include "binary_trees.h"

/**
 * binary_trees_nodes - binary tree nodes are created
 * @parents: parent node of the node to be created which it points to
 * @value: Value to put the new node
 *
 * Retuen: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
