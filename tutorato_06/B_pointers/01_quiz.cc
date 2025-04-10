// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2021      Filippo  Muzzini <filippo.muzzini@unimore.it>
 * Copyright (C) 2022      Riccardo Mescoli <244993@studenti.unimore.it>
 * Copyright (C) 2023-2024 Federico Motta   <federico.motta@unimore.it>
 */

// Cosa stampa il seguente programma?

#include <iostream>

using namespace std;

void f(int *p, int *&rp) {
  int *tmp = p;
  p = rp;
  *tmp = 10;
  *p = 20;
  rp = p;
}

int main() {
  int a = 10, b = 10;
  int *punt = &a;
  int *prp = &b;
  f(punt, prp);
  cout << a << " " << *punt << " " << b << " " << *prp << " " << endl;
}
