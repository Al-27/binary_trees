#include "binary_trees.h"

/**
 * binary_tree_size - func
 * @tree: arg
 * 
 * Return: sizet
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t depth = 0;
    
    if(tree)
    {
        depth++;
        depth += binary_tree_size(tree->left);
        depth += binary_tree_size(tree->right);
    }
    
    return depth;
}