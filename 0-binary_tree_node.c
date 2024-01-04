#include "binary_trees.h"

/**
 * binary_tree_node - init
 * @parent: arg
 * @value: int
 * 
 * Return: pointer
 * 
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = NULL;
    
    newNode = malloc(sizeof(binary_tree_t));
    
    if(newNode)
    {
        newNode->n = value;
        newNode->parent = parent;
    }
    
    return newNode;
}