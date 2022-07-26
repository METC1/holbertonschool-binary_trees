#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to traverse
 * Return: height of a binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree != NULL)
	{
		if (tree->left)
		{
			l = binary_tree_height(tree->left) + 1;
		}
		if (tree->right)
		{
			r = binary_tree_height(tree->right) + 1;
		}
	}
	if (l > r)
		return (l);
	else
		return (r);
}
