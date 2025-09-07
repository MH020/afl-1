#include <stdio.h>
#include "hammering.h"

int main(void) {
    char dna1[] = "GAGCCTACTAACGGGAT";
    char dna2[] = "CATCGTAATGACGGCCT";

    int expected_distance = 7;
    int actual_distance = hamming_distance(dna1, dna2);

    printf("String 1: %s\n", dna1);
    printf("String 2: %s\n", dna2);
    printf("Distance: %d\n", actual_distance);
    printf("Is that correct? %s\n", expected_distance == actual_distance ? "Oh yas!" : "No :(");

    return expected_distance != actual_distance;
}