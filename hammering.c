#include "hammering.h"

#include <stdio.h>

int hamming_distance(char dna1[], char dna2[]) {
    int dna1size = 0;
    while (dna1[dna1size] != '\0') {
        dna1size++;
    }

    int dna2size = 0;
    while (dna2[dna2size] != '\0') {
        dna2size++;
    }

    int counter = 0;
    printf("The size of the array1 is: %zu\n", dna1size);
    printf("The size of the array2 is: %zu\n", dna2size);

    if (dna1size != dna2size) {
        printf("the dna is not the same legnth");
        return -1;
    }
    for (int i = 0; i <= dna1size; i++) {

    if (dna1[i] != dna2[i]) {
        counter++;
    }
    }
    return counter;
}
