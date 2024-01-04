#include "binary_trees.h"

/**
 * binary_tree_preorder - init
 * @tree: arg
 * @func: arg
 * 
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if(func && tree )
    {
        func(tree->n);
        binary_tree_preorder(tree->left,func);
        binary_tree_preorder(tree->right,func);
    }
}