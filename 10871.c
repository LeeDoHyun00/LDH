#include<stdio.h>

int main() {
    int x,y,r,t;
    scanf("%d %d",&x,&t);
    for(int z=1;z<x+1;z++){
        scanf("%d",&y);
        if(y<t)
        printf("%d ",y);
    }
    return 0;
}