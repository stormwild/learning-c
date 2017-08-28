#include <stdio.h>
#include "selection_sort.h"
 
#define MAX 7

int main() {
    int num[MAX] = {15, 33, 48, 65, 57, 79, 52};
    // print the unsorted set of numbers
    for (int i = 0; i < MAX; i++) printf("%d ", num[i]);
    printf("\nSort starting ...\n");
    selectionSort(num, 0, MAX - 1);
    printf("Sort has ended. \n");
    for (int i = 0; i < MAX; i++) printf("%d ", num[i]);
    printf("\n");
    return 0;
}