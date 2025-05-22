/*
 * tree.h
 *
 *  Created on: 14 mag 2018
 *      Author: federica
 */
typedef int tipo_key;

struct bnode {
	tipo_key key;
	tipo_inf inf;
     	bnode* left;
     	bnode* right;
     	bnode* parent;
    };


typedef bnode* bst;

bnode* bst_newNode(tipo_key, tipo_inf);
tipo_key get_key(bnode*);
tipo_inf get_value(bnode*);  //restituisce il valore del nodo in ingresso
bst get_left(bst); //restituisce il sottoalbero sinistro dell’albero in ingresso
bst get_right(bst); //restituisce il sottoalbero destro dell’albero in ingresso
bnode* get_parent(bnode* n); // restituisce il padre dell’albero in ingresso
void bst_insert(bst&,bnode*) ; //aggiunge un nodo al bst
void bst_insert(bst&, bnode*);
void print_key(tipo_key);
bnode* bst_search(bst,tipo_key);
void bst_delete(bst&, bnode*);






