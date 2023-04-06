#include "lib_interpolation_search.h"

int interpolation_search(int* array, int x, int left, int right){
    if(left <= right && x >= array[left] && x <= array[right]){
        int mid = left + ((x - array[left]) * (right - left) / (array[right] - array[left]));
        if(array[mid] == x)
            return mid;
        else if (array[mid] < x)
            return interpolation_search(array,x,mid+1,right);
        else
            return interpolation_search(array,x,left,mid-1);
    }
    return -1;
}