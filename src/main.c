#include "code.h"

int main(int argc, char **argv)
{
    char *message;
    int shift;
    int taille;
    taille = saisieEntier();
    message = init(taille);
    printf("Veuillez entrer votre message : ");
    message = getline(&message, &taille, stdin);
    printf("De combien voulez vous décaler : ");
    scanf("%d", &shift);
    cesar(message, shift);
    printf("\n");
    free(message);
    return 0;
}