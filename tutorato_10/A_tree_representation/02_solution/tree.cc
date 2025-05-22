// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2023-2024 Federico Motta <federico.motta@unimore.it>
 */

#include "tree.h"
#include <cstdlib>

info_t get_info(node_t *n) { return n->info; }
node_t *get_parent(node_t *n) { return n->parent; }
node_t *get_first_child(node_t *n) { return n->first_child; }
node_t *get_next_sibling(node_t *n) { return n->next_sibling; }

node_t *new_node(info_t label) {
  node_t *ret = new node_t;
  copy(ret->info, label);
  ret->first_child = ret->next_sibling = ret->parent = NULL;
  return ret;
}

/* inserisce il sotto-albero come primo figlio del padre */
void insert_child(tree father, node_t *sub_tree) {
  sub_tree->parent = father;

  /*
   * fare attenzione a non sovrascrivere eventuali primogeniti del
   * nodo father!!!
   */
  sub_tree->first_child = father->first_child;

  father->first_child = sub_tree; // ora possiamo sovrascrivere
}

/* inserisce il later-albero come fratello del nodo */
void insert_sibling(node_t *n, tree sib_tree) {
  sib_tree->parent = n->parent;

  /*
   * fare attenzione a non sovrascrivere eventuali primi cugini del
   * nodo father!!!
   */
  sib_tree->next_sibling = n->next_sibling;

  n->next_sibling = sib_tree; // ora possiamo sovrascrivere
}
