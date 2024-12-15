#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_size - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The depth of the tree. If the tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)/* Si l'arbre est vide, retourner 0 */
{
return (0);
}
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
