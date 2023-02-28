#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tr_s;

	if (!tree)
		return (0);
/* Size of a tree = Size of left subtree + 1 + Size of right subtree.*/
	tr_s = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (tr_s);
}
