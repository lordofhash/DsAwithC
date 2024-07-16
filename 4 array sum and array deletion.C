#include <stdio.h>

int main() {
    int n, i, j, isD;
    int max;
    printf("Enter the max marks: \n");
    scanf("%d", &max);
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    float t;
    t = max * 2;
    float o;
    float a[n]; 
    float b[n];
    float result[n];
    o = 100;

    printf("Enter marks of Maths: \n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ",i+1);
        scanf("%f", &a[i]);
    }
    
    printf("\n");
    printf("Enter marks of Physics: \n");
    
    for (i = 0; i < n; i++) {
        printf("Student %d: ",i+1);
        scanf("%f", &b[i]);
    }
    

    
    for(i=0;i<n;i++){
        result[i]=(((a[i]+b[i])*o)/t);
    }
    
    printf("\n");
    printf("Percentage bagged by each Student: \n");
    
    

    for (i = 0; i < n; i++) {
            printf("Student %d %.2f  \n",(i+1),result[i]);
    }
 
   
   float maxp;
   int maxpos;
   maxp = result[0];
   maxpos = 0;
  
   for(i=1;i<n;i++){
        if(maxp < result[i]){
            maxp = result[i];
            maxpos = i;
        }
    }
   printf("\n");    
   printf("Student %d scored the highest. ", maxpos + 1);
   printf("Damnn son\n");
   
   int pos;
   printf("\n");
   printf("Enter the position of element you want to delete: ");
   scanf("%d", &pos);
   
   for(i=pos; i<n-1; i++){
       result[i]=result[i+1];
   }
   int ne ;
   ne = n-1;
   
   printf("\n");
   printf("Edited Result array is: \n");
   for (i = 0; i < ne; i++) {
            printf("Student %d %f  \n",(i+1),result[i]);
    }
    
    return 0;
}