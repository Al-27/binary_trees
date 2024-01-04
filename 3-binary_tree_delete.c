#include "binary_trees.h"

/**
 * binary_tree_delete - init
 * @tree: arg
 * 
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if(tree)
    {
        nestedFree(tree->left);
        nestedFree(tree->right);
        free(tree);
    }
}


/**
 * nestedFree - init
 * @pointer: arg
 * 
*/
void nestedFree(void *pointer)
{
    if(pointer)
    {
        nestedFree(pointer);
        free(pointer);
    }
}