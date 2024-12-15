#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if there is no sibling or
 *         if node or its parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
/* Si le nœud est à gauche, retourner le nœud à droite  */
if (node == node->parent->left)
return (node->parent->right);
else
return (node->parent->left);
}
