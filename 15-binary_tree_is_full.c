#include "binary_trees.h"
/**
 * binary_tree_size - Vérifie si un arbre binaire est complet
 * @tree: Pointeur vers la racine de l'arbre
 *
 * Return: 1 si l'arbre est complet, 0 sinon
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)/* Si l'arbre est vide, retourner 0 */
{
return (0);
}
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}


/**
 * binary_tree_is_full - Vérifie si un arbre binaire est complet
 * @tree: Pointeur vers la racine de l'arbre
 *
 * Return: 1 si l'arbre est complet, 0 sinon
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
/* Si l'arbre est vide, il n'est pas complet */
if (tree == NULL)
return (0);
/* Si le nœud est une feuille, il est complet */
if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left != NULL && tree->right != NULL)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
/* Si le nœud a un seul enfant, il n'est pas complet */
return (0);
}

