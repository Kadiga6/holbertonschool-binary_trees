#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if there is no uncle,
 *         or if node or its parent is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
/* Si le nœud est à gauche, retourner le nœud à droite  */
if (node->parent == node->parent->parent->left)
return (node->parent->parent->right);
else
return (node->parent->parent->left);
}
