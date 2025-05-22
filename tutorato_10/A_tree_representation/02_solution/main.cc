// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2023-2024 Federico Motta <federico.motta@unimore.it>
 */

#include "tree.h"
#include "type.h"
#include <cassert>
#include <cstring>
#include <iostream>

using namespace std;
#define HYDRA

const int max_name_len = 32;

node_t *new_node(const char *format, const int h) {
  char buf[max_name_len];
  snprintf(buf, max_name_len, format, h);
  cerr << buf << "\t" << flush;
  return new_node(buf);
}

tree hydra(const unsigned int H) {
  tree root = new_node("root-H%03d", 0);
  node_t *last_level = root;
  for (int h = 1; h <= H - 2; h++) {
    if (h < H - 2)
      insert_child(last_level, new_node("neck-H%03d", h));
    else
      insert_child(last_level, new_node("head-left-H%03d", H - 2));
    last_level = get_first_child(last_level);
  }
  if (H - 2 > 0)
    insert_sibling(last_level, new_node("head-right-H%03d", H - 2));
  return root;
}

tree giraffe(const unsigned int H) {
  const unsigned int neck_len = (H > 5 && H - 5 >= 0) ? H - 5 : 0;
  node_t *front_hips = NULL, *back_hips = NULL, *last_node = NULL;
  tree root = NULL;

  for (int h = 0; h < H; h++) {
    cerr << "aggiungo ";
    if (h == 0) {
      root = new_node("H%03d-head", h);
    } else if (h == 1) {
      insert_child(root, new_node("H%03d-mouth", h));
      last_node = get_first_child(root);
      insert_sibling(last_node, new_node("H%03d-neck", h));
      last_node = get_next_sibling(last_node);
    } else if ((h == 2 && H < 6) || h < 2 + neck_len) {
      insert_child(last_node,
                   new_node((h < H - 4) ? "H%03d-neck" : "H%03d-shoulders", h));
      last_node = get_first_child(last_node);
    } else if ((h == 3 && H < 6) || (h == H - 3)) {
      front_hips = new_node("H%03d-front-hips", h);
      insert_child(last_node, front_hips);
      back_hips = new_node("H%03d-back-hips", h);
      insert_sibling(front_hips, back_hips);
    } else if ((h == 4 && H < 6) || h == H - 2) {
      last_node = new_node("H%03d-front-left-knee", h);
      insert_child(front_hips, last_node);
      insert_sibling(last_node, new_node("H%03d-front-right-knee", h));
      last_node = new_node("H%03d-back-left-knee", h);
      insert_child(back_hips, last_node);
      insert_sibling(last_node, new_node("H%03d-back-right-knee", h));
      last_node = get_next_sibling(last_node);
      insert_sibling(last_node, new_node("H%03d-tail", h));
    } else if ((h == 5 && H < 6) || h == H - 1) {
      last_node = get_first_child(front_hips); // ginocchio anteriore sinistro
      insert_child(last_node, new_node("H%03d-front-left-foot", h));
      insert_child(get_next_sibling(last_node), // ginocchio anteriore destro
                   new_node("H%03d-front-right-foot", h));
      last_node = get_first_child(back_hips); // ginocchio posteriore sinistro
      insert_child(last_node, new_node("H%03d-back-left-foot", h));
      insert_child(get_next_sibling(last_node), // ginocchio posteriore destro
                   new_node("H%03d-back-right-foot", h));
    }
    cerr << endl;
  }
  return root;
}

int main() {
  unsigned int height = 0;
  tree root = NULL;

  while (height < 1) {
    cout << "Inserisci l'altezza dell'albero da allocare: " << flush;
    cin >> height;
  }

#ifdef HYDRA
  root = hydra(height);
#else
  root = giraffe(height);
#endif

  return root == NULL;
}
