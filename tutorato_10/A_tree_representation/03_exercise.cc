// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2023-2024 Federico Motta <federico.motta@unimore.it>
 */

/*
 * Sfruttando il modulo precedentemente implementato nell'esercizio
 * precedente (01_exercise.cc); scrivere un programma che dati due
 * numeri naturali positivi N ed H generi e stampi un albero N-ario,
 * "completo" di altezza H
 */

void print_tree(tree root, char *prefix, bool last);
tree complete_n_ary_tree(const int N, const int H);

/*********************************** type.h ***********************************/
typedef char *info_t;
/*********************************** tree.h ***********************************/
struct node_t {
  info_t info;
  node_t *parent;
  node_t *first_child;
  node_t *next_sibling;
};

info_t get_info(node_t *);
node_t *get_parent(node_t *);
node_t *get_first_child(node_t *);
node_t *get_next_sibling(node_t *);

typedef node_t *tree;

node_t *new_node(info_t);
void insert_child(tree, node_t *);
void insert_sibling(tree, node_t *);
