#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) {
    int val = 0;
    for(unsigned int i = 1; i <= number; i++) {
        val += i*i;
    }

    return val;
}

unsigned int square_of_sum(unsigned int number) {
    int val = 0;
    for(unsigned int i = 1; i <= number; i++) {
        val += i;
    }
    return val*val;
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}
