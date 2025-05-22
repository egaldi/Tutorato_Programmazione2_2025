// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2023-2024 Federico Motta <federico.motta@unimore.it>
 */

#include "type.h"

struct node_t {
  info_t info;
  node_t *parent;
  node_t *first_child;
  node_t *next_sibling;
};
typedef node_t *tree;

info_t get_info(node_t *n);
node_t *get_parent(node_t *n);
node_t *get_first_child(node_t *n);
node_t *get_next_sibling(node_t *n);
node_t *new_node(info_t label);
void insert_child(tree father, node_t *sub_tree);
void insert_sibling(node_t *n, tree sib_tree);
