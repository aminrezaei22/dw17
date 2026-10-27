#include "dw.h"

int *create_filled_array(int size, int fill_value) {
    int *values = new int[size]; // Added semicolon
    for (int i = 0; i < size; i++) {
        values[i] = fill_value;
    }
    return values; // Moved outside the loop
}

void free_array(int *values) {
    delete[] values; // Added semicolon and moved outside the other function
}

