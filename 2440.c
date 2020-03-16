#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    for(int z=0;z<x;z++){
        for(int k=x;k>z;k--)
            printf("*");
            // for(int r=0;r<z;r++)
            // printf(" ");
            printf("\n");
    }
    return 0;
}