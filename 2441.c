#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    for(int z=1;z<x+1;z++){
        for(int k=1;k<z;k++)
            printf(" ");
            for(int r=z;r<x+1;r++)
            printf("*");
            printf("\n");
    }
    return 0;
}