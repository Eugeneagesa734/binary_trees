#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node into a binary tree as its right-child.
 * @parent: Pointer to the node which the left node is to be inserted.
 * @value: New node to store the value.
 *
 * Return: If an error occurs or the parent is NULL - NULL
 * 	   Otherwise - new node pointer.
 *
 * Description: The new node replaces the old one and the old left-child becomes the
 * 		new node's left-child if the parent already has a left-child.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}


