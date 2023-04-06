#include "lib_linear_search.h"

int linear_search(int* array, int x, int size){
    for(int i = 0; i < size; i++){
        if(array[i] == x) return i;
    }
    return -1;
}