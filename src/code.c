#include "code.h"

char *init(int taille){
    char *message;
    message = malloc(taille * sizeof(char));
    if (message == NULL) {
        printf("Allocation mémoire echoué\n");
        exit(ERREUR_ALLOCATION);
    }
    return message;
}

int saisieEntier(void)
{

    int int_retour;
    int nb;

    int_retour = scanf("%d", &nb);

    if (int_retour == 0)
    {
        fprintf(stderr, "Entree incorrecte, Veuillez saisir un entier \n");
        exit(ERREUR_SAISIE);
    }
    return (nb);
}

void cesar(char *message, int shift)
{
    int i; 
    i = 0;
    char c;

    while (message[i] != '\0')
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            c = message[i] - 'A';

            c += shift;
            c = c % 26;
            message[i] = c + 'A';
        }
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            c = message[i] - 'a';
            c += shift;
            c = c % 26;
            message[i] = c + 'a';
        }
        
        else {
            message[i] = c;
        }
        i++;
    }
    printf("Voici le message crypté : %s \n", message);
}
