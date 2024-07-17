#include <stdio.h>
int main(){
    
    int min, i , pos, n;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements: ");
    for (i=0; i < n; i++){
        scanf("%d", &a[i]);
    }
    pos = 0;
    min = a[0];
    
    for(i=1;i<n;i++){
        if(a[i] < min){
            min=a[i];
            pos=i;
        }}
    printf("min element is %d \n", min);
    printf("posn of min element is %d", pos); 
     
}