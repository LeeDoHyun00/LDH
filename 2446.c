#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);
    
    for(int z=1;z<x+1;z++){
        for(int a=0;a<z-1;a++)
        printf(" ");
        for(int a=0;a<x-z;a++)
        printf("*");
        printf("*");
        for(int a=0;a<x-z;a++)
        printf("*");
        printf("\n");
    }
    
    for(int z=1;z<x;z++){
        for(int a=0;a<x-z-1;a++)
        printf(" ");
        for(int a=0;a<z;a++)
        printf("*");
        printf("*");
        for(int a=0;a<z;a++)
        printf("*");
        printf("\n");
    }
    
    return 0;
}