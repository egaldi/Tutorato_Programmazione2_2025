// #include "tipo_stringa.h"
#include "tipo_struct.h"

typedef struct node
{
    tipo_inf val;
    node *parent;
    node *firstChild;
    node *nextSibling;
} node;

node* new_node(tipo_inf);
void insert_child(node* parent, node* child);
void insert_sibling(node* s1 , node* s2);
tipo_inf get_info(node*);
node* get_parent(node*);
node* get_firstChild(node*);
node* get_nextSibling(node*);