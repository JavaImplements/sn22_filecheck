/*

Nom & Prenom : Baleydier Paul
Nom & Prenom : Pereira Enzo

*/

#include <stdio.h>
#include <stdlib.h>

// CHemin du fichier
#define FILE_PATCH "./paintTest/corbeau-renard_u.txt"


int main(){

    // Inisialization des variables
    int count = 0, caractereActuel = 0;
    FILE* fichier = fopen(FILE_PATCH, "r");
    
    // Si le fichier existe alors
    if(fichier != NULL){

        while (! feof(fichier)) {
            // Recupère le caractère
            caractereActuel = fgetc(fichier);
            // Somme de tous les caractères
            count += caractereActuel;
        }

        printf("Total de caractère ASCII est de : %i\n", count);
        
        fclose(fichier); // Fermeture du fichier
        return EXIT_SUCCESS;
    }

    //Si le fichier n'existe pas
    printf("Le fichier `%s` n'exits pas !\n", FILE_PATCH);
    

    return EXIT_FAILURE;
}

