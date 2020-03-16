#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    for(int z=1;z<x+1;z++){
        for(int k=0;k<x-z;k++)
        printf(" ");
        for(int a=0;a<z-1;a++)
        printf("*");
        printf("*");
        for(int r=0;r<z-1;r++)
        printf("*");

        printf("\n");
        
    }
    for(int z=1;z<x;z++){
        for(int k=0;k<z;k++)
            printf(" ");
            for(int a=0;a<x-z-1;a++)
            printf("*");
           printf("*");
             for(int r=0;r<x-z-1;r++)
             printf("*");
            printf("\n");
    }
    return 0;
}