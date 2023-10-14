#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    int numere[49];
    int numereAlese[6];

    // Inițializăm generatorul de numere aleatoare cu timpul curent
    srand(time(NULL));

    // Inițializăm șirul numere cu valorile de la 1 la 49
    for (i = 0; i < 49; i++) {
        numere[i] = i + 1;
    }

    // Selectăm 6 numere aleatoriu din șir
    for (i = 0; i < 6; i++) {
        int indexAleator = rand() % 49;

        // Verificăm dacă numărul a mai fost ales
        for (j = 0; j < i; j++) {
            if (numereAlese[j] == numere[indexAleator]) {
                // Numărul a fost deja ales, generăm un alt număr
                i--;
                break;
            }
        }

        // Dacă numărul nu a fost deja ales, îl adăugăm în lista de numere alese
        if (j == i) {
            numereAlese[i] = numere[indexAleator];
        }
    }

    // Afișăm cele 6 numere alese
    printf("Numerele alese sunt: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", numereAlese[i]);
    }
    printf("\n");

    return 0;
}
