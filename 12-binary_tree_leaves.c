#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_leaves - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The depth of the tree. If the tree is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
return (1);
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
