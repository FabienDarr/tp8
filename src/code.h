#ifndef CODE_H
#define CODE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERREUR_ALLOCATION -1
#define ERREUR_SAISIE -1
#include "time.h"

void cesar(char *message, int shift);

char *init(int taille);

int saisieEntier(void);

#endif