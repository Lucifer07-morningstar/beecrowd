#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float a[5] = {4.00,4.50,5.00,2.00,1.50};
    float c;
    c = a[x-1]*y;
    printf("Total: R$ %.2lf\n",c);
}
