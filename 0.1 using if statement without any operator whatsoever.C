#include <stdio.h>

int main()
{
    int a;
    printf("Enter 0 or any other number:") ;
    scanf("%d", &a);
    if(a){
        printf("Damn, why?");
    }
    if(!a){
        printf("Whoaa!!");
    }

    return 0;
}