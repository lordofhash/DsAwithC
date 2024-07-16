#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    int frequency[n];
    for (i = 0; i < n; i++) {
        frequency[i] = 0;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Calculate the frequency of each element
    for (i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            continue; // Skip if already processed
        }
        for (j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                frequency[i]++;
            }
        }
    }

    printf("\n"); 
    printf("Elements and their frequency: \n");
    for (i = 0; i < n; i++) {
        if (frequency[i] > 0) {
            printf("Element: %d, Frequency: %d\n", a[i], frequency[i]);
            // Mark all occurrences of this element as processed
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    frequency[j] = 0;
                }
            }
        }
    }

    return 0;
}