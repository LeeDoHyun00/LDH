#include<stdio.h>

int main() {
    int x,y,r;
    scanf("%d",&x);
    for(int z=0;z<x;z++){
        scanf("%d %d",&y,&r);
        printf("%d\n",y+r);
    }
    return 0;
}