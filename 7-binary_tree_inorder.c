#include "binary_trees.h"

/**
 * binary_tree_inorder - init
 * @tree: arg
 * @func: arg
 * 
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if(func && tree )
    {
        binary_tree_inorder(tree->left,func);
        func(tree->n);
        binary_tree_inorder(tree->right,func);
    }
}