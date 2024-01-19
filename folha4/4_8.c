#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double distr_unif(double x, double a, double b) {
    srand((unsigned)time(NULL));
    int counter = 0;
    for (int i = 0, i < TRIES; i++) {
        double xU = a + ((double)rand() / ((double)RAND_MAX+1)*(b-a));
    }
}