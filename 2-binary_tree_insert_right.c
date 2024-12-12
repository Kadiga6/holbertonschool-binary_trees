#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node_2 = malloc(sizeof(binary_tree_t));
if (!parent || !new_node_2)
	return (NULL);

new_node_2->n = value;
new_node_2->parent = parent;
new_node_2->left = NULL;
new_node_2->right = NULL;

if (parent->right != NULL)
{
new_node_2->right = parent->right;
parent->right->parent = new_node_2;
}
parent->right = new_node_2;

return (new_node_2);
}
