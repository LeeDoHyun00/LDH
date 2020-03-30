#include<stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int z=1;z<10;z++)
    printf("%d * %d = %d\n",x,z,x*z);
    
    return 0;
}