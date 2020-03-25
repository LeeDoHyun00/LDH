#include<stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d",&x,&y);
    
    if(x==0&&y<45){
    printf("23 %d",y+15);}
    else
    {z=(60*(x+1)-60)+y-45;
    printf("%d %d",z/60,z%60);}
    return 0;
}