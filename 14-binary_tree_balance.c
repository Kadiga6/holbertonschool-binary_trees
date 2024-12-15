#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * height - Helper function to calculate the height of a tree
 * @tree: A pointer to the root node of the tree to calculate the height.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
 */
int height(const binary_tree_t *tree)
{
int leftHeight;
int rightHeight;
if (tree == NULL)
return (0);

/* Compute the height of the left and right subtrees */
leftHeight = height(tree->left);
rightHeight = height(tree->right);
/* Return the larger height plus 1 (for the current node) */
return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}
/**
 * binary_tree_balance - Measures the balance factor of an AVL tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the tree.
 *         If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int leftHeight;
int rightHeight;
if (tree == NULL)
return (0);

/* Compute the height of the left and right subtrees */
leftHeight = height(tree->left);
rightHeight = height(tree->right);

/* Return the balance factor (difference between left and right heights) */
return (leftHeight - rightHeight);
}
