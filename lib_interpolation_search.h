#ifndef LIB_INTERPOLATION_SEARCH
#define LIB_ITNERPOLATION_SEARCH

/**
Interpolation Search Algorithm

@param array Pointer the array to search
@param x The number to search for
@param left First index of the search range in the array
@param right Last index of the search range in the array

@return Return index of first x occurrence in the array

*/
int interpolation_search(int* array, int x, int left, int right);

#endif