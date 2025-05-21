// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2023-2024 Federico Motta <federico.motta@unimore.it>
 */

/*
 * Scrivere un main che attraverso i moduli implementati
 * nell'esercizio precedente (01_exercise.cc) allochi in maniera
 * "hardcoded" uno dei seguenti seguenti alberi
 */

/*
 * tree hydra(const int height);
 *
 *     altezza 1:      O		// 1 nodo
 *                     |
 *                    ...
 *                     |
 *     altezza H-1:    O		// 1 nodo
 *                    / \
 *     altezza H:    V   V		// 2 nodi
 *
 * se l'altezza passata è maggiore di 3 si ritorna un Hydra col collo
 * opportunamente allungato (al posto dei puntini)
 */

/*
 * tree giraffe(const int height);
 *
 *     altezza 1:        O		// 1 nodo
 *                      / \
 *     altezza 2:      O   O		// 2 nodi
 *                         |
 *                        ...
 *                         |
 *     altezza H-3:        O		// 1 nodo
 *                        / \
 *                       /   \
 *                      /     \
 *     altezza H-2:    O       O	// 2 nodi
 *                    / \    / | \
 *     altezza H-1:  O   O  O  O  O	// 5 nodi
 *                   |   |  |  |
 *     altezza H:    O   O  O  O	// 4 nodi
 *
 * se l'altezza passata è maggiore di 6 ritorna la giraffa completa,
 * col collo opportunamente allungato (al posto dei puntini);
 * altrimenti ritorna una giraffa con collo lungo 1 nodo e troncata
 * all'altezza fornita (e.g., con H=5 la giraffa non dovrebbe avere i
 * piedi)
 */
