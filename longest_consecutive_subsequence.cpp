#include <stdio.h>

#define MAX 100

int main() {
    printf("Start\n");
    
    int list[] = {10, 11, 12, 13, 14, 20, 21, 22, 23, 24, 30, 31, 32, 33, 34, 40, 41, 42, 43, 44};
    int size = sizeof(list) / sizeof(list[0]);
    
    printf("Your list is: [");
    for (int i = 0; i < size; i++) {
        printf(" %d ", list[i]);
    }
    printf("]\n");

    int longest[MAX];
    int longestSize = 0;

    int current[MAX];
    int currentSize = 0;
    
    for (int i = 0; i < size; i++) {
        if (i > 0 && list[i] == list[i - 1] + 1) {
            current[currentSize] = list[i];
            currentSize++;
        } else {
            if (currentSize > longestSize) {
                for (int j = 0; j < currentSize; j++) {
                    longest[j] = current[j];
                }
                longestSize = currentSize;
            }
            current[0] = list[i];
            currentSize = 1;
        }
    }

    printf("Longest consecutive subsequence of big numbers is: [");
    for (int i = 0; i < longestSize; i++) {
        printf(" %d ", longest[i]);
    }
    printf("]\n");

    return 0;
}
