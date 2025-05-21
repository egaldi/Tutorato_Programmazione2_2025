// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * This exercise is part of the tutoring activity of the course:
 * "Programming 2", held at www.fim.unimore.it
 *
 * Based on ideas and code from the following tutors:
 * Copyright (C) 2023-2024 Federico Motta   <federico.motta@unimore.it>
 */

/*
 * Scrivere un modulo che generi un albero n-ario definito per
 * "livelli", ovvero data una sequenza:
 *
 *     L : L_0 = 1, L_1, L_2, ... L_m
 *
 * allochi L_0, ovvero 1 nodo radice;
 *
 *         L_i  nodi, come figli dei nodi allocati nel livello/step
 *              precedente (i-1), di modo che siano equamente
 *              distribuiti [si suggerisce adottare un approccio
 *                           round-robin fino a che non si esauriscono
 *                           i nodi da assegnare]
 * Extra:
 *        inoltre se il livello è dispari (e.g. L_1, L_3, ...) si
 *        aggiungono i nodi a partire dal nodo più a sinistra del
 *        livello precedente
 *
 *        altrimenti (se il livello è pari) si aggiungono nodi a
 *        partire dal nodo più a destra del livello precedente
 *
 *
 * Ad esempio, la sequenza L = (1, 2, 1, 2, 5, 4) dovrebbe generare un
 * albero del tipo:
 *
 *        O			L_0 = 1,	livello 0 -> 1 nodo (radice)
 *       / \
 *      O   O			L_1 = 2,	livello 1 -> 2 nodi
 *          |
 *          O			L_2 = 1,	livello 2 -> 1 nodo
 *         / \
 *        /   \
 *       /     \
 *      O       O		L_3 = 2,	livello 3 -> 2 nodi
 *     / \    / | \
 *    O   O  O  O  O		L_4 = 5,	livello 4 -> 5 nodi
 *    |   |  |  |
 *    O   O  O  O		L_5 = 4,	livello 5 -> 4 nodi
 */
