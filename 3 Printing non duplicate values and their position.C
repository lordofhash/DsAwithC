#include <stdio.h>

int main() {
    int n, i, j, isD;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int a[n]; 
    int positions[n]; 
    int posIndex = 0; 

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        isD = 0; //Using this statement, I am assuming a[i] is not a duplicate
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                isD = 1; 
                break;
                //If a duplicate is found (a[i] == a[j] and i != j), isD is set to 1.
                /* Once a duplicate is detected, break is executed. This causes the program to exit the inner loop immediately without checking the remaining elements. The control moves to the next statement after the inner loop, which is the if statement checking the value of isD.*/
            }
        }
        if (!isD) { 
            positions[posIndex] = i; 
            posIndex++;
        }
    }

    if (posIndex == 0) {
        printf("No non-duplicate elements found.\n");
    } else {
        printf("Non-duplicate elements and their positions: \n");
        for (i = 0; i < posIndex; i++) {
            printf("Element: %d, \t Position: %d\n", a[positions[i]], positions[i]);
        }
    }

    return 0;
}
