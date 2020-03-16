#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    for(int z=1;z<x+1;z++){
        for(int k=0;k<x-z;k++)
            printf(" ");
            for(int a=1;a<z;a++)
            printf("*");
            printf("*");
             for(int r=0;r<z-1;r++)
             printf("*");
            printf("\n");
    }
    return 0;
}