#include "lib_binary_search.h"

int binary_search(int* array, int x, int left, int right){
    int mid = (left + right) / 2;
    if(left <= right && x <= array[right] && x >= array[left]){
        if(array[mid] == x)
            return mid;
        if(array[mid] > x)
            return binary_search(array,x,left,mid-1);
        if(array[mid] < x)
            return binary_search(array,x,mid+1,right);
    }
    return -1;
}