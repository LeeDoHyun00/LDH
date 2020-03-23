#include<stdio.h>

int main() {
    int a,b,x,y,z;
    scanf("%d",&a);
    scanf("%d",&b);
    x=a*(b%10);
    y=a*(((b%100)-(b%10))/10);
    z=a*(b/100);
    printf("%d\n%d\n%d\n%d",x,y,z,x+10*y+100*z);
    
    return 0;
}