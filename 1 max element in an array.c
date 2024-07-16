#include <stdio.h>
int main(){
    
    int max, i , pos, n;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements: ");
    for (i=0; i < n; i++){
        scanf("%d", &a[i]);
    }
    pos = 0;
    max = a[0];
    
    for(i=1;i<n;i++){
        if(a[i]> max){
            max=a[i];
            pos=i;
        }}
    printf("max element is %d", max);
    printf("posn of max element is %d", pos); 
     
}