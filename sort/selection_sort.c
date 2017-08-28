#include "selection_sort.h"

int getSmallest(int list[], int lo, int hi) {
    int small = lo;
    for (int h = lo + 1; h <= hi; h++) 
        if(list[h] < list[small]) small = h;
    return small;
}

void swap(int list[], int i, int j) {
    int hold = list[i];
    list[i] = list[j];
    list[j] = hold;
}

void selectionSort(int list[], int lo, int hi) {
    for (int h = lo; h < hi; h++) {
        swap(list, h, getSmallest(list, h, hi));
    }
}