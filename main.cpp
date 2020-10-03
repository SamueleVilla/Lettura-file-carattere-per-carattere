
/*
Creare un programma che effettui la copia di un file di testo sorgente in un file destinazione, 
carattere per carattere (funzione fgetc).
Il file destinazione deve essere aperto in append.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fileSorgente;
    FILE *fileDestinazione;
    char buffer = ' ';

    if ((fileSorgente = fopen("sorgente.txt", "r")) == NULL)
        exit(1);

    if ((fileDestinazione = fopen("destinazione.txt", "a")) == NULL)
        exit(1);

    while ((buffer != EOF))
    {
        buffer = fgetc(fileSorgente);
        if (buffer != EOF)
            fputc(buffer, fileDestinazione);

        putchar(buffer);
    }

    fclose(fileDestinazione);
    fclose(fileSorgente);

    printf("\n");
    system("pause");
    return 0;
}