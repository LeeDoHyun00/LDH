#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    for(int z=1;z<x+1;z++){
        for(int k=1;k<z;k++)
            printf(" ");
            for(int a=z;a<x;a++)
            printf("*");
           printf("*");
             for(int r=0;r<x-z;r++)
             printf("*");
            printf("\n");
    }
    return 0;
}