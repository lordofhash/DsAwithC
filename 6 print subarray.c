#include <stdio.h>

int findsub(int arr[],int k, int n) {
    int i,j,l;
    int sub = 0;
    for(i=0; i<n; i++){
        int sum = 0;
        for (j = i; j<n; j++){
            sum +=arr[j];
            if (sum == k){
                sub ++;
                printf("\nThe subarray is found from the index %d to %d \n", i, j);
                printf("Subarray is: \n");
                for (l = i; l < j+1; l++) {
                    printf("%d ",arr[l]);
                }
                printf("\n");
            }
        }
    }
    
    printf("\nNumber of subarrays with req sum are: %d",sub);
    if (!sub){
        printf("\nSorry no subarray is found with the sum %d",k);
    }
}


int main() {
    int n, i, j, k,l;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the sum: ");
    scanf("%d", &k);



findsub(a,k,n);

printf("\nThe time complexity of this program is O(n squared)).\n");
 return 0;

}