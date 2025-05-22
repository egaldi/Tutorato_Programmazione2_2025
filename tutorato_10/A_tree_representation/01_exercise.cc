// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2023-2024 Federico Motta <federico.motta@unimore.it>
 * Modified by Elena Galdi 2024-2025
 */

/*
 * Implementare i moduli type.cc e tree.cc
 */
/**
 * Dopo modificare il tipo di dato info_t in modo che contenga i dati di uno studente:
 * - char nome[20];
 * - char cognome[20];  
 * - int matricola;
 * 
 */
/*********************************** type.h ***********************************/
typedef char *info_t;
void copy(info_t &, info_t);
/*********************************** tree.h ***********************************/
struct node_t {
  info_t info;
  node_t *parent;
  node_t *first_child;
  node_t *next_sibling;
};

typedef node_t *tree;

info_t get_info(node_t *);
node_t *get_parent(node_t *);
node_t *get_first_child(node_t *);
node_t *get_next_sibling(node_t *);

node_t *new_node(info_t label);

/* inserisce il sotto-albero come primo figlio del padre */
void insert_child(tree /*father*/, node_t * /*sub-tree*/);

/* inserisce il later-albero come fratello del nodo */
void insert_sibling(node_t * /*nodo*/, tree /*sib-tree*/);


