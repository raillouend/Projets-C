#include <stdio.h>

int maxSearch(float tab[]) {
    /*Recherche du maximum dans un tableau*/
    int max = tab[0];

    for (int i = 0; i < sizeof(tab); i++) {
        if (max < tab[i]) {
            max = tab[i];
        }
    }

    return max;
}

int minSearch(float tab[]) {
    /*Recherche du maximum dans un tableau*/
    int min = tab[0];

    for (int i = 0; i < sizeof(tab); i++) {
        if (min > tab[i]) {
            min = tab[i];
        }
    }

    return min;
}

int main(void) {
    
    float tableau[] = {14, 17, 29, 01, 2, 38, 91, 0};
    float max = maxSearch(tableau);
    float min = minSearch(tableau);

    printf("Le maximum est : %f", max);
    printf("Le minimum est : %f", min);

    return 0;
}
