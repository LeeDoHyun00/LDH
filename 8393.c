#include<stdio.h>

int main() {
    int x,y,r=0;
    scanf("%d",&x);
    for(int z=0;z<x+1;z++){
        r+=z;
    }
    printf("%d",r);
    return 0;
}