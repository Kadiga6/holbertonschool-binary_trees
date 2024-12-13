#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The depth of the tree. If the tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
const binary_tree_t *current = tree;
if (current == NULL)
{
return (0);
}
/*Remonter l'arbre jusqu'à la racine*/
while (current != NULL)
{
current = current->parent; /*Remonte vers le parent*/
depth++; /*Incrémente la profondeur à chaque niveau*/
}
return (depth - 1);
}

