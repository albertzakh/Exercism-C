#include "grains.h"

uint64_t square(uint8_t index){
    if(index == 0) {
        return 0;
    }
    uint64_t val = 1;
    for(uint64_t i = 1; i < index; i++) {
        val = val * 2;
    }    
    return val;
}

uint64_t total(void) {
    int sum = 0;
    for(int i = 1; i <= 64; i++) {
        sum += square(i);
    }
    return sum;
}