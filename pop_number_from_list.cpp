#include <stdio.h>

#define MAX 100

void deleteNumber(int list[], int *size, int number) {
    int i, j;

    for (i = 0, j = 0; i < *size; i++) {
        if (list[i] != number) {
            list[j] = list[i];
            j++;
        }
        printf("operation %d : [",i);
        for (int k = 0; k < *size; k++) {
            printf(" %d ", list[k]);
        }
        printf("]\n");
        
    }

    *size = j;
}

int main() {
    int list[] = {10, 20, 30, 40, 20, 50, 20, 60};
    int size = sizeof(list) / sizeof(list[0]);
    int number;

    printf("Enter the number to delete: ");
    scanf("%d", &number);

    printf("Original list: [");
    for (int i = 0; i < size; i++) {
        printf(" %d ", list[i]);
    }
    printf("]\n");

    deleteNumber(list, &size, number);

    printf("List after deleting %d: [", number);
    for (int i = 0; i < size; i++) {
        printf(" %d ", list[i]);
    }
    printf("]\n");

    return 0;
}
