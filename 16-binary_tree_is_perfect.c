#include <stddef.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * max - Helper function to return the maximum of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: The maximum of a and b.
 */
int max(int a, int b)
{
return ((a > b) ? a : b);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: the height of the binary tree. If the tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int leftHeight;
int rightHeight;

if (tree == NULL)
{
return (0);
}

leftHeight = binary_tree_height(tree->left);
rightHeight = binary_tree_height(tree->right);

return (max(leftHeight, rightHeight) + 1);
}
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth for.
 *
 * Return: The depth of the node. If the node is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{/*ici pour la profondeur */
size_t depth = 0;
const binary_tree_t *current = tree;
while (current != NULL && current->parent != NULL)
{
current = current->parent;
depth++;
}
return (depth);
}
/**
 * is_Perfect_recursive - Helper function to check if the binarytreeisperfect.
 * @tree: Pointer to the root node of the current subtree.
 * @depth: The depth of the tree.
 * @level: The current level (or depth) in the tree.
 *
 * Return: 1 if the subtree is perfect, 0 otherwise.
 */
int is_Perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
if (tree == NULL)
{
return  (1);
}
if (tree->left == NULL && tree->right == NULL)
{
return (depth == level + 1);
}
if (tree->left == NULL || tree->right == NULL)
{
return (0);
}
return (is_Perfect_recursive(tree->left, depth, level + 1)
&& is_Perfect_recursive(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, return 1. Otherwise, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int depth;

if (tree == NULL)
{
return (0);
}

depth = binary_tree_height(tree);


return (is_Perfect_recursive(tree, depth, 0));
}

