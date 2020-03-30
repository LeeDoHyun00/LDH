#include<stdio.h>

int main() {
    int x,y,r=0;
    scanf("%d",&x);
    for(int z=1;z<x+1;z++){
        scanf("%d %d",&y,&r);
        printf("Case #%d: %d\n",z,y+r);
    }
    return 0;
}